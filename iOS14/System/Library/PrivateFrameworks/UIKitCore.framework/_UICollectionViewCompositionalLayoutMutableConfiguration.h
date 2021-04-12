/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewCompositionalLayoutConfiguration.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSArray, NSString;

@interface _UICollectionViewCompositionalLayoutMutableConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, _UICollectionLayoutAPIRespresenting> {

	long long _scrollDirection;
	double _interSectionSpacing;
	NSArray* _boundarySupplementaryItems;

}

@property (assign,nonatomic) long long scrollDirection;                       //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) double interSectionSpacing;                      //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;              //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(NSArray *)boundarySupplementaryItems;
-(long long)scrollDirection;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(double)interSectionSpacing;
-(void)setInterSectionSpacing:(double)arg1 ;
-(void)setScrollDirection:(long long)arg1 ;
-(id)_apiRepresentation;
-(id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

