/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateTableLayoutDelegateMetrics;
	BOOL _skipSectionInvalidation;

}

@property (assign,nonatomic) BOOL invalidateTableLayoutDelegateMetrics;              //@synthesize invalidateTableLayoutDelegateMetrics=_invalidateTableLayoutDelegateMetrics - In the implementation block
@property (assign,nonatomic) BOOL skipSectionInvalidation;                           //@synthesize skipSectionInvalidation=_skipSectionInvalidation - In the implementation block
-(void)setSkipSectionInvalidation:(BOOL)arg1 ;
-(BOOL)invalidateTableLayoutDelegateMetrics;
-(BOOL)skipSectionInvalidation;
-(void)setInvalidateTableLayoutDelegateMetrics:(BOOL)arg1 ;
@end

