/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class GEOLocation;

@interface MNTraceRouteSimulatorEvent : NSObject {

	double _timestamp;
	GEOLocation* _location;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) GEOLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) id completion;                       //@synthesize completion=_completion - In the implementation block
-(id)description;
-(double)timestamp;
-(GEOLocation *)location;
-(id)completion;
-(id)initWithLocation:(id)arg1 ;
-(id)initWithTime:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

