/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIContextMenuActionView.h>

@class UIActivityIndicatorView;

@interface _UIContextMenuLoadingActionView : _UIContextMenuActionView {

	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)trailingView;
-(void)_updateContentAppearance;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)_contentsTintColor;
-(id)_contentsCompositingFilter;
@end

