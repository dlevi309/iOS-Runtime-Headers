/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class CLLocation;

@interface PLLocationOfInterestLocation : NSObject {

	CLLocation* _location;
	double _uncertainty;

}

@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double uncertainty;                 //@synthesize uncertainty=_uncertainty - In the implementation block
-(id)description;
-(CLLocation *)location;
-(double)uncertainty;
-(id)initWithLocation:(id)arg1 uncertainty:(double)arg2 ;
-(double)distanceFromLocation:(id)arg1 withTypeRadius:(double)arg2 ;
@end

