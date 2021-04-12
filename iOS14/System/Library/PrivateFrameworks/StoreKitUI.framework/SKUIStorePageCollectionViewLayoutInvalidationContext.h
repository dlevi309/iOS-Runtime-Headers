/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UICollectionViewFlowLayoutInvalidationContext.h>

@interface SKUIStorePageCollectionViewLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {

	BOOL _invalidateItemPinningLayoutInformation;
	BOOL _invalidatePinnedBackdropViewStyle;

}

@property (assign,nonatomic) BOOL invalidateItemPinningLayoutInformation;              //@synthesize invalidateItemPinningLayoutInformation=_invalidateItemPinningLayoutInformation - In the implementation block
@property (assign,nonatomic) BOOL invalidatePinnedBackdropViewStyle;                   //@synthesize invalidatePinnedBackdropViewStyle=_invalidatePinnedBackdropViewStyle - In the implementation block
-(BOOL)invalidatePinnedBackdropViewStyle;
-(BOOL)invalidateItemPinningLayoutInformation;
-(void)setInvalidatePinnedBackdropViewStyle:(BOOL)arg1 ;
-(void)setInvalidateItemPinningLayoutInformation:(BOOL)arg1 ;
@end

