/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <libobjc.A.dylib/SKUICellLayoutParentView.h>

@class SKUIItemCellLayout, NSString;

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {

	BOOL _layoutNeedsLayout;

}

@property (nonatomic,readonly) SKUIItemCellLayout * layout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(SKUIItemCellLayout *)layout;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)configureForItem:(id)arg1 clientContext:(id)arg2 ;
-(void)setCellLayoutNeedsLayout;
@end

