/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CLLocationMatchInfoInternal : NSObject <NSCopying> {

	long long fMatchQuality;
	CLLocationCoordinate2D fMatchCoordinate;
	double fMatchCourse;
	int fMatchFormOfWay;
	int fMatchRoadClass;
	BOOL fMatchShifted;
	NSData* fMatchDataArray;

}
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 matchDataArray:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

