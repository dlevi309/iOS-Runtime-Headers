/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	SCD_Struct_UI31 _flowLayoutInvalidationFlags;

}

@property (assign,nonatomic) BOOL invalidateFlowLayoutDelegateMetrics; 
@property (assign,nonatomic) BOOL invalidateFlowLayoutAttributes; 
-(id)init;
-(void)setInvalidateFlowLayoutAttributes:(BOOL)arg1 ;
-(BOOL)invalidateFlowLayoutAttributes;
-(void)setInvalidateFlowLayoutDelegateMetrics:(BOOL)arg1 ;
-(BOOL)invalidateFlowLayoutDelegateMetrics;
@end

