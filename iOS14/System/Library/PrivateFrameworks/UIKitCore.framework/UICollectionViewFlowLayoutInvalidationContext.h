/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	SCD_Struct_UI36 _flowLayoutInvalidationFlags;

}

@property (assign,nonatomic) BOOL invalidateFlowLayoutDelegateMetrics; 
@property (assign,nonatomic) BOOL invalidateFlowLayoutAttributes; 
-(id)init;
-(void)setInvalidateFlowLayoutDelegateMetrics:(BOOL)arg1 ;
-(BOOL)invalidateFlowLayoutDelegateMetrics;
-(BOOL)invalidateFlowLayoutAttributes;
-(void)setInvalidateFlowLayoutAttributes:(BOOL)arg1 ;
@end

