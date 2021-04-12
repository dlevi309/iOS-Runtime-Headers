/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateIncrementalReveal;
	BOOL _invalidateBoundsChange;
	BOOL _invalidatePlaceholderVisibility;
	BOOL _invalidatePinnableAreas;

}

@property (assign,nonatomic) BOOL invalidateIncrementalReveal;                  //@synthesize invalidateIncrementalReveal=_invalidateIncrementalReveal - In the implementation block
@property (assign,nonatomic) BOOL invalidateBoundsChange;                       //@synthesize invalidateBoundsChange=_invalidateBoundsChange - In the implementation block
@property (assign,nonatomic) BOOL invalidatePlaceholderVisibility;              //@synthesize invalidatePlaceholderVisibility=_invalidatePlaceholderVisibility - In the implementation block
@property (assign,nonatomic) BOOL invalidatePinnableAreas;                      //@synthesize invalidatePinnableAreas=_invalidatePinnableAreas - In the implementation block
-(BOOL)invalidateIncrementalReveal;
-(BOOL)invalidateBoundsChange;
-(void)setInvalidateIncrementalReveal:(BOOL)arg1 ;
-(void)setInvalidateBoundsChange:(BOOL)arg1 ;
-(BOOL)invalidatePlaceholderVisibility;
-(void)setInvalidatePlaceholderVisibility:(BOOL)arg1 ;
-(BOOL)invalidatePinnableAreas;
-(void)setInvalidatePinnableAreas:(BOOL)arg1 ;
@end

