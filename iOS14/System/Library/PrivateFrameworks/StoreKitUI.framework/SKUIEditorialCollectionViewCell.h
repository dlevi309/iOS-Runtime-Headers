/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <libobjc.A.dylib/SKUICellLayoutParentView.h>

@class SKUIEditorialCellLayout, NSString;

@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {

	SKUIEditorialCellLayout* _layout;
	BOOL _layoutNeedsLayout;

}

@property (nonatomic,readonly) SKUIEditorialCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(SKUIEditorialCellLayout *)layout;
-(void)setCellLayoutNeedsLayout;
@end

