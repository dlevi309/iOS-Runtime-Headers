/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UISearchBarSearchContainerLayout;

@interface _UISearchBarSearchContainerView : UIView {

	_UISearchBarSearchContainerLayout* _layout;

}

@property (nonatomic,retain) _UISearchBarSearchContainerLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_isKnownUISearchBarComponentContainer;
-(void)setLayout:(_UISearchBarSearchContainerLayout *)arg1 ;
-(void)setNeedsLayout;
-(_UISearchBarSearchContainerLayout *)layout;
@end

