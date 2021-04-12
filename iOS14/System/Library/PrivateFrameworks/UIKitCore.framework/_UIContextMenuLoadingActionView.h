/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContextMenuActionView.h>

@class UIActivityIndicatorView;

@interface _UIContextMenuLoadingActionView : _UIContextMenuActionView {

	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)trailingView;
-(void)_updateContentAppearance;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)_contentsTintColor;
-(id)_contentsCompositingFilter;
-(BOOL)_ignoreRemoveAllAnimations;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

