/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UICollectionViewFlowLayoutInvalidationContext.h>

@interface SKUIStorePageCollectionViewLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {

	BOOL _invalidateItemPinningLayoutInformation;
	BOOL _invalidatePinnedBackdropViewStyle;

}

@property (assign,nonatomic) BOOL invalidateItemPinningLayoutInformation;              //@synthesize invalidateItemPinningLayoutInformation=_invalidateItemPinningLayoutInformation - In the implementation block
@property (assign,nonatomic) BOOL invalidatePinnedBackdropViewStyle;                   //@synthesize invalidatePinnedBackdropViewStyle=_invalidatePinnedBackdropViewStyle - In the implementation block
-(void)setInvalidateItemPinningLayoutInformation:(BOOL)arg1 ;
-(void)setInvalidatePinnedBackdropViewStyle:(BOOL)arg1 ;
-(BOOL)invalidateItemPinningLayoutInformation;
-(BOOL)invalidatePinnedBackdropViewStyle;
@end

