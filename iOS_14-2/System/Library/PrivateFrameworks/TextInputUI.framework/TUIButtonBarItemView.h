/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isPad;
-(void)layoutSubviews;
-(UIView *)customView;
-(_UIButtonBarButton *)barButtonView;
-(void)setBarButtonView:(_UIButtonBarButton *)arg1 ;
-(BOOL)isCollapsedItem;
-(void)setCollapsedItem:(BOOL)arg1 ;
-(UIBarButtonItem *)associatedItem;
-(void)setAssociatedItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItemGroup *)associatedGroup;
-(void)setAssociatedGroup:(UIBarButtonItemGroup *)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)contentView;
@end

