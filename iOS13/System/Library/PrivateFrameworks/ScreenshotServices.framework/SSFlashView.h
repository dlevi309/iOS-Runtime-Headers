/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIView.h>

@interface SSFlashView : UIView {

	unsigned long long _style;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(Class)_flashViewClass;
+(double)expectedAnimationDurationForStyle:(unsigned long long)arg1 ;
+(id)flashViewForStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)flashWithCompletion:(/*^block*/id)arg1 ;
@end

