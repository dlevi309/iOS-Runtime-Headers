/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTLocation, NSArray;

@interface RTVisitLocationPoints : NSObject {

	RTLocation* _centroid;
	NSArray* _locations;

}

@property (nonatomic,readonly) NSArray * locations;                //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) RTLocation * centroid;              //@synthesize centroid=_centroid - In the implementation block
-(id)init;
-(id)description;
-(double)duration;
-(RTLocation *)centroid;
-(NSArray *)locations;
-(id)initWithLocations:(id)arg1 ;
-(id)lastDate;
-(id)firstDate;
-(void)enumerateLowSpeedSegementsUsingBlock:(id)arg1 block:(/*^block*/id)arg2 ;
@end

