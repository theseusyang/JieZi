//
//  JZViewController.h
//  JieZi
//
//  Created by 崔峥 on 14-8-5.
//  Copyright (c) 2014年 cuizzz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "btSimplePopUp/btSimplePopUP.h"
#import "JZOcr.h"

@interface JZViewController : UIViewController<JZOcrDelegate, btSimplePopUPDelegate>

@property (nonatomic, strong) JZOcr *ocr;
@property (nonatomic, strong) NSArray *favorites;

@property (nonatomic, strong) IBOutlet UIImageView *ocrFrameImageView;
@property (nonatomic, strong) IBOutlet UIImageView *ocrImageView;
@property (nonatomic, strong) IBOutlet UIButton *ocrButton;
@property (nonatomic, strong) IBOutlet UIButton *cardButton;

@end
