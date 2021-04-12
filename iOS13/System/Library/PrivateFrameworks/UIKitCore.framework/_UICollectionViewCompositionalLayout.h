/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UICollectionViewCompositionalLayout.h>

@class NSArray;

@interface _UICollectionViewCompositionalLayout : UICollectionViewCompositionalLayout {

	long long _scrollDirection;
	NSArray* _boundarySupplementaryItems;
	NSArray* _supplementaryItems;

}

@property (nonatomic,readonly) long long scrollDirection;                     //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;              //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryItems;                      //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
-(NSArray *)boundarySupplementaryItems;
-(id)initWithLayoutSection:(id)arg1 ;
-(NSArray *)supplementaryItems;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(long long)scrollDirection;
-(id)initWithSection:(id)arg1 ;
-(id)initWithSection:(id)arg1 configuration:(id)arg2 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2 ;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(id)initWithLayoutSection:(id)arg1 configuration:(id)arg2 ;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 scrollDirection:(long long)arg2 ;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 ;
@end

