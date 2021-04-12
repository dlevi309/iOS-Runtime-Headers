/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet, NSString;

@interface PGPlaceAreaMemoryGenerator : PGFeaturedMemoryGenerator {

	NSSet* _supersetAddressNodes;
	NSString* _area;
	long long _year;

}

@property (assign,nonatomic) NSString * area;              //@synthesize area=_area - In the implementation block
@property (assign,nonatomic) long long year;               //@synthesize year=_year - In the implementation block
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(NSString *)area;
-(void)setArea:(NSString *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)_potentialMemoriesWithAreaNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
@end

