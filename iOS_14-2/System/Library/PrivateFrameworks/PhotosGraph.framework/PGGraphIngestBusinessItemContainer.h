/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestBusiness.h>

@class NSString, NSArray, NSDateInterval, CLCircularRegion, CLSBusinessItem, CLSLocationOfInterestVisit;

@interface PGGraphIngestBusinessItemContainer : NSObject <PGGraphIngestBusiness> {

	CLSBusinessItem* _businessItem;
	CLSLocationOfInterestVisit* _visit;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) CLSBusinessItem * businessItem;                  //@synthesize businessItem=_businessItem - In the implementation block
@property (nonatomic,readonly) CLSLocationOfInterestVisit * visit;              //@synthesize visit=_visit - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                   //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * businessCategories; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (nonatomic,readonly) double routineVisitConfidence; 
@property (nonatomic,readonly) BOOL hasRoutineVisit; 
@property (nonatomic,readonly) CLCircularRegion * region; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateInterval *)dateInterval;
-(CLSLocationOfInterestVisit *)visit;
-(CLCircularRegion *)region;
-(NSString *)name;
-(unsigned long long)muid;
-(long long)venueCapacity;
-(NSArray *)businessCategories;
-(double)routineVisitConfidence;
-(BOOL)hasRoutineVisit;
-(id)initWithBusinessItem:(id)arg1 visit:(id)arg2 dateInterval:(id)arg3 ;
-(id)initWithBusinessItem:(id)arg1 visit:(id)arg2 ;
-(id)initWithBusinessItem:(id)arg1 dateInterval:(id)arg2 ;
-(void)updateBusinessItem:(id)arg1 ;
-(CLSBusinessItem *)businessItem;
@end

