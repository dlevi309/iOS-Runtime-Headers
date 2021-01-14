/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphAreaNode, NSArray, NSDate, NSString;

@interface PGPotentialAreaMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphAreaNode* _areaNode;
	long long _year;
	NSArray* _assetLocalIdentifiersInArea;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphAreaNode * areaNode;                       //@synthesize areaNode=_areaNode - In the implementation block
@property (readonly) long long year;                                   //@synthesize year=_year - In the implementation block
@property (readonly) NSString * area; 
@property (retain) NSArray * assetLocalIdentifiersInArea;              //@synthesize assetLocalIdentifiersInArea=_assetLocalIdentifiersInArea - In the implementation block
@property (retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
-(long long)year;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)area;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithAreaNode:(id)arg1 year:(long long)arg2 ;
-(PGGraphAreaNode *)areaNode;
-(NSArray *)assetLocalIdentifiersInArea;
-(void)setAssetLocalIdentifiersInArea:(NSArray *)arg1 ;
@end

