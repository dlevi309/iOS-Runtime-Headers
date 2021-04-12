/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSString, NSArray, NSDateInterval, CLCircularRegion;


@protocol PGGraphIngestBusiness <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * businessCategories; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) double routineVisitConfidence; 
@property (nonatomic,readonly) BOOL hasRoutineVisit; 
@property (nonatomic,readonly) CLCircularRegion * region; 
@required
-(NSDateInterval *)dateInterval;
-(CLCircularRegion *)region;
-(NSString *)name;
-(unsigned long long)muid;
-(long long)venueCapacity;
-(NSArray *)businessCategories;
-(double)routineVisitConfidence;
-(BOOL)hasRoutineVisit;

@end

