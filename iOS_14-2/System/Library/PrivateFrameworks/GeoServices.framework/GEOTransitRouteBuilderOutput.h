/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEORouteBuilderOutput.h>

@class NSArray;

@interface GEOTransitRouteBuilderOutput : GEORouteBuilderOutput {

	BOOL _isWalkingOnlyRoute;
	NSArray* _rideSelections;
	NSArray* _sectionOptions;

}

@property (nonatomic,readonly) BOOL isWalkingOnlyRoute;               //@synthesize isWalkingOnlyRoute=_isWalkingOnlyRoute - In the implementation block
@property (nonatomic,readonly) NSArray * rideSelections;              //@synthesize rideSelections=_rideSelections - In the implementation block
@property (nonatomic,readonly) NSArray * sectionOptions;              //@synthesize sectionOptions=_sectionOptions - In the implementation block
-(BOOL)isWalkingOnlyRoute;
-(NSArray *)rideSelections;
-(void)setRideSelections:(NSArray *)arg1 ;
-(void)setIsWalkingOnlyRoute:(BOOL)arg1 ;
-(NSArray *)sectionOptions;
-(void)setSectionOptions:(NSArray *)arg1 ;
@end

