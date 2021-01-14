/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

