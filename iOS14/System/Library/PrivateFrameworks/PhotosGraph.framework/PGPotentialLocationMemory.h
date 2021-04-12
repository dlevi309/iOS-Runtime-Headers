/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphLocationCityNode, NSArray, NSDate, NSString;

@interface PGPotentialLocationMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphLocationCityNode* _cityNode;
	long long _year;
	NSArray* _assetLocalIdentifiersInCity;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphLocationCityNode * cityNode;               //@synthesize cityNode=_cityNode - In the implementation block
@property (readonly) long long year;                                   //@synthesize year=_year - In the implementation block
@property (readonly) NSString * city; 
@property (retain) NSArray * assetLocalIdentifiersInCity;              //@synthesize assetLocalIdentifiersInCity=_assetLocalIdentifiersInCity - In the implementation block
@property (retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
-(long long)year;
-(NSDate *)endDate;
-(NSString *)city;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(PGGraphLocationCityNode *)cityNode;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithCityNode:(id)arg1 year:(long long)arg2 ;
-(NSArray *)assetLocalIdentifiersInCity;
-(void)setAssetLocalIdentifiersInCity:(NSArray *)arg1 ;
@end

