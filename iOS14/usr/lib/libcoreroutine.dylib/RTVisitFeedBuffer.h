/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableArray, NSDate;

@interface RTVisitFeedBuffer : NSObject {

	/*^block*/id _comparator;
	double _minWaitInterval;
	NSMutableArray* _locations;
	NSDate* _lastMaturedLocationDate;

}

@property (nonatomic,retain) NSMutableArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSDate * lastMaturedLocationDate;               //@synthesize lastMaturedLocationDate=_lastMaturedLocationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long numLocations; 
@property (nonatomic,readonly) double minWaitInterval;                       //@synthesize minWaitInterval=_minWaitInterval - In the implementation block
-(NSMutableArray *)locations;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(id)init;
-(double)minWaitInterval;
-(void)addLocations:(id)arg1 ;
-(unsigned long long)numLocations;
-(id)initWithMinWaitInterval:(double)arg1 ;
-(NSDate *)lastMaturedLocationDate;
-(void)setLastMaturedLocationDate:(NSDate *)arg1 ;
-(id)maturedLocations;
@end

