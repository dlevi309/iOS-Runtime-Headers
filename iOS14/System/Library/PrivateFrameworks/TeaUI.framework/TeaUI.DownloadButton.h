/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)startingButtonTappedWithSender:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accessibilityActivate;
@end

