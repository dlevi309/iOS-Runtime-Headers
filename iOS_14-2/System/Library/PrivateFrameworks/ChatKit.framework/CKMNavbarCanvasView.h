/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UISearchBar, UIButton;

@interface CKMNavbarCanvasView : UIView {

	BOOL _shouldLayoutForCollapsedWidth;
	UISearchBar* _searchBarView;
	UIButton* _composeButtonView;

}

@property (nonatomic,readonly) UISearchBar * searchBarView;                   //@synthesize searchBarView=_searchBarView - In the implementation block
@property (nonatomic,readonly) UIButton * composeButtonView;                  //@synthesize composeButtonView=_composeButtonView - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutForCollapsedWidth;              //@synthesize shouldLayoutForCollapsedWidth=_shouldLayoutForCollapsedWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)clearAllItemViews;
-(UIButton *)composeButtonView;
-(void)setComposeButtonView:(UIButton *)arg1 ;
-(void)_layoutForDisplayBelowToolbar;
-(void)_layoutForDisplayInNavbar;
-(UISearchBar *)searchBarView;
-(BOOL)shouldLayoutForCollapsedWidth;
-(void)setSearchBarView:(UISearchBar *)arg1 ;
-(void)setShouldLayoutForCollapsedWidth:(BOOL)arg1 ;
@end

