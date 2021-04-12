/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView {

	UIActivityIndicatorView* _activityIndicator;
	UIActivityIndicatorView* _accessibilityHUDIndicator;
	BOOL _slowActivity;
	BOOL _syncActivity;

}
-(void)setVisible:(BOOL)arg1 ;
-(void)_stopAnimating;
-(double)shadowPadding;
-(void)_startAnimating;
-(long long)_activityIndicatorStyle;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)updateContentsAndWidth;
-(id)accessibilityHUDRepresentation;
@end

