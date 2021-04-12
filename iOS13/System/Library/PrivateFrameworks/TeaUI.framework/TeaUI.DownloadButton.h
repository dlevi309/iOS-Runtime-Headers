/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <TeaUI/TeaUI.TouchInsetsButton.h>

@interface TeaUI.DownloadButton : TeaUI.TouchInsetsButton {

	 handler;
	 delegate;
	 dataProvider;
	 imageTintColor;
	 progressTintColor;
	 trackTintColor;
	 downloadingImage;
	 notDownloadingImage;
	 progressBackgroundLayer;
	 progressLayer;
	 buttonState;
	 downloadProgressDisposable;
	 downloadStateDisposable;

}
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)accessibilityActivate;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)startingButtonTappedWithSender:(id)arg1 ;
@end

