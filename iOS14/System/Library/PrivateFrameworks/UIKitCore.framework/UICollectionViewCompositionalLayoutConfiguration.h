/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewCompositionalLayoutConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, NSCopying> {

	long long _scrollDirection;
	double _interSectionSpacing;
	NSArray* _boundarySupplementaryItems;
	long long _contentInsetsReference;

}

@property (assign,setter=_setSafeAreaReference:,getter=_safeAreaReference,nonatomic) long long safeAreaReference; 
@property (assign,nonatomic) long long scrollDirection;                                                                        //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) double interSectionSpacing;                                                                       //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;                                                               //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (assign,nonatomic) long long contentInsetsReference;                                                                 //@synthesize contentInsetsReference=_contentInsetsReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(long long)contentInsetsReference;
-(id)init;
-(NSArray *)boundarySupplementaryItems;
-(unsigned long long)differencesFromConfiguration:(id)arg1 ;
-(long long)scrollDirection;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(void)setContentInsetsReference:(long long)arg1 ;
-(double)interSectionSpacing;
-(void)setInterSectionSpacing:(double)arg1 ;
-(void)setScrollDirection:(long long)arg1 ;
-(long long)_safeAreaReference;
-(void)_setSafeAreaReference:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 contentInsetsReference:(long long)arg4 ;
@end

