/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2 ;
-(id)initWithSection:(id)arg1 configuration:(id)arg2 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 ;
-(id)initWithLayoutSection:(id)arg1 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(id)initWithSection:(id)arg1 ;
-(NSArray *)boundarySupplementaryItems;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(NSArray *)supplementaryItems;
-(long long)scrollDirection;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 scrollDirection:(long long)arg2 ;
-(id)initWithLayoutSection:(id)arg1 configuration:(id)arg2 ;
-(id)initWithLayoutSectionProvider:(/*^block*/id)arg1 ;
@end

