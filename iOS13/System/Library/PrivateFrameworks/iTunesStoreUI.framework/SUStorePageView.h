/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIScrollView;

@interface SUStorePageView : UIView {

	UIView* _backdropView;
	UIView* _contentView;
	UIView* _headerView;
	UIScrollView* _headerScrollView;
	UIView* _previewOverlayView;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,retain) UIView * backdropView;                       //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * previewOverlayView;                 //@synthesize previewOverlayView=_previewOverlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewInsets;              //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
-(void)dealloc;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIView *)backdropView;
-(void)setBackdropView:(UIView *)arg1 ;
-(UIEdgeInsets)contentViewInsets;
-(void)setPreviewOverlayView:(UIView *)arg1 ;
-(UIView *)previewOverlayView;
-(void)setContentViewInsets:(UIEdgeInsets)arg1 ;
@end

