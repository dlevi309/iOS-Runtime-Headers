/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UISearchBarContainerView : UIView {

	UIView* _subview;
	int _resizingMask;
	BOOL _shouldSendContainerSafeAreaInsetsDidChange;

}
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)willRemoveSubview:(id)arg1 ;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_uncontainerSubview:(id)arg1 ;
-(void)enforceSubviewAtBottomIfNecessary;
-(void)_didRemoveSubview:(id)arg1 ;
@end

