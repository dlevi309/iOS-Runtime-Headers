/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)setFontSize:(int)arg1 ;
-(void)done;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)showInView:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)hide;
-(void)setShowsText:(BOOL)arg1 ;
-(void)show:(BOOL)arg1 ;
@end

