/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _business;
	long long _year;

}

@property (assign,nonatomic) NSString * business;              //@synthesize business=_business - In the implementation block
@property (assign,nonatomic) long long year;                   //@synthesize year=_year - In the implementation block
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(NSString *)business;
-(void)setBusiness:(NSString *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)_potentialMemoriesWithBusinessNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
@end

