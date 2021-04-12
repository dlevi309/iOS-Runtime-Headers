/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <ScreenshotServices/SSFlashView.h>

@class UIView;

@interface SSReduceTransparencyFlashView : SSFlashView {

	/*^block*/id _oldCompletionBlock;
	UIView* _colorView;

}
+(double)expectedAnimationDurationForStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)flashWithCompletion:(/*^block*/id)arg1 ;
@end

