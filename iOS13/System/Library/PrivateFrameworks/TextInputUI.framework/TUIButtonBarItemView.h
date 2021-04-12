/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <UIKitCore/UIView.h>

@class UIBarButtonItem, UIBarButtonItemGroup, _UIButtonBarButton, UIView;

@interface TUIButtonBarItemView : UIView {

	BOOL _collapsedItem;
	UIBarButtonItem* _associatedItem;
	UIBarButtonItemGroup* _associatedGroup;
	_UIButtonBarButton* _barButtonView;
	UIView* _customView;

}

@property (assign,getter=isCollapsedItem,nonatomic) BOOL collapsedItem;              //@synthesize collapsedItem=_collapsedItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * associatedItem;                       //@synthesize associatedItem=_associatedItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItemGroup * associatedGroup;                 //@synthesize associatedGroup=_associatedGroup - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UIButtonBarButton * barButtonView;                     //@synthesize barButtonView=_barButtonView - In the implementation block
@property (nonatomic,retain) UIView * customView;                                    //@synthesize customView=_customView - In the implementation block
-(UIView *)contentView;
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)customView;
-(void)layoutSubviews;
-(void)setBarButtonView:(_UIButtonBarButton *)arg1 ;
-(BOOL)isCollapsedItem;
-(void)setCollapsedItem:(BOOL)arg1 ;
-(UIBarButtonItem *)associatedItem;
-(void)setAssociatedItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItemGroup *)associatedGroup;
-(void)setAssociatedGroup:(UIBarButtonItemGroup *)arg1 ;
-(_UIButtonBarButton *)barButtonView;
@end

