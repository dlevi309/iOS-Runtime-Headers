/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel, UIImageView, UIWindow;

@interface UIProgressHUD : UIView {

	UIActivityIndicatorView* _progressIndicator;
	UILabel* _progressMessage;
	UIImageView* _doneView;
	UIWindow* _parentWindow;
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	}  _progressHUDFlags;

}
-(void)show:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)done;
-(void)drawRect:(CGRect)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)layoutSubviews;
-(void)hide;
-(void)setFontSize:(int)arg1 ;
-(void)setShowsText:(BOOL)arg1 ;
-(void)dealloc;
@end

