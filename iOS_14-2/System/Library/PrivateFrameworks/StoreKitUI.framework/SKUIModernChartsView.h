/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class _UIBackdropView, UIView, NSMutableArray, UIScrollView, NSArray, NSString;

@interface SKUIModernChartsView : UIView <UIScrollViewDelegate> {

	_UIBackdropView* _backdropView;
	UIEdgeInsets _contentInset;
	UIView* _headerView;
	NSMutableArray* _headerViews;
	BOOL _hideHeader;
	UIScrollView* _scrollView;
	NSArray* _viewControllers;

}

@property (nonatomic,readonly) _UIBackdropView * backdropView; 
@property (assign,nonatomic) UIEdgeInsets contentInset;                     //@synthesize contentInset=_contentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIBackdropView *)backdropView;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateHeader;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)_layoutHeadersWithColumnSize:(CGSize)arg1 ;
-(void)_layoutViewControllersWithColumnSize:(CGSize)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(void)setColumnViewControllers:(id)arg1 ;
@end

