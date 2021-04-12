/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithParentView:(id)arg1 ;
-(void)resetLayout;
-(UIView *)contentView;
-(void)setNeedsLayout;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(UIView *)parentCellView;
@end

