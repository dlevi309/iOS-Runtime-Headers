/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class UIView, SKUIClientContext;

@interface SKUICellLayout : NSObject {

	UIView* _cell;
	SKUIClientContext* _clientContext;
	UIView* _contentView;
	BOOL _parentWantsCellNeedsLayout;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,__weak,readonly) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * parentCellView;               //@synthesize cell=_cell - In the implementation block
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg1 ;
-(UIView *)contentView;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)resetLayout;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(UIView *)parentCellView;
@end

