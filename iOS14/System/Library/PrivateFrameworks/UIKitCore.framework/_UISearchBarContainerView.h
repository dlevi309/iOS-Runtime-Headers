/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willRemoveSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)safeAreaInsetsDidChange;
-(void)_uncontainerSubview:(id)arg1 ;
-(void)enforceSubviewAtBottomIfNecessary;
@end

