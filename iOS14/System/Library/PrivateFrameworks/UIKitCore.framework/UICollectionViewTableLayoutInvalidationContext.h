/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateTableLayoutDelegateMetrics;
	BOOL _skipSectionInvalidation;

}

@property (assign,nonatomic) BOOL invalidateTableLayoutDelegateMetrics;              //@synthesize invalidateTableLayoutDelegateMetrics=_invalidateTableLayoutDelegateMetrics - In the implementation block
@property (assign,nonatomic) BOOL skipSectionInvalidation;                           //@synthesize skipSectionInvalidation=_skipSectionInvalidation - In the implementation block
-(BOOL)invalidateTableLayoutDelegateMetrics;
-(void)setSkipSectionInvalidation:(BOOL)arg1 ;
-(BOOL)skipSectionInvalidation;
-(void)setInvalidateTableLayoutDelegateMetrics:(BOOL)arg1 ;
@end

