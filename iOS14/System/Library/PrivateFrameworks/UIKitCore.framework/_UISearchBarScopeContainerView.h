/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UISearchBarScopeContainerLayout;

@interface _UISearchBarScopeContainerView : UIView {

	_UISearchBarScopeContainerLayout* _layout;

}

@property (nonatomic,retain) _UISearchBarScopeContainerLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_isKnownUISearchBarComponentContainer;
-(void)setLayout:(_UISearchBarScopeContainerLayout *)arg1 ;
-(void)setNeedsLayout;
-(_UISearchBarScopeContainerLayout *)layout;
@end

