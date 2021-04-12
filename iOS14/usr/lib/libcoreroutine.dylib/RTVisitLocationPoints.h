/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTLocation, NSArray;

@interface RTVisitLocationPoints : NSObject {

	RTLocation* _centroid;
	NSArray* _locations;

}

@property (nonatomic,readonly) NSArray * locations;                //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) RTLocation * centroid;              //@synthesize centroid=_centroid - In the implementation block
-(NSArray *)locations;
-(RTLocation *)centroid;
-(id)init;
-(void)enumerateLowSpeedSegementsUsingBlock:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)description;
-(id)firstDate;
-(id)initWithLocations:(id)arg1 ;
-(double)duration;
-(id)lastDate;
@end

