/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInputClue.h>

@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue {

	CLSPlace* _place;

}
+(id)clueWithLocation:(id)arg1 ;
+(id)cluesWithLocations:(id)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)place;
-(id)region;
-(id)location;
-(id)description;
-(void)setPlace:(id)arg1 ;
-(id)placemark;
-(double)gpsHorizontalAccuracy;
-(id)projectedLocation;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)isDefinite;
-(id)regionInPlacemark;
-(CLLocationCoordinate2D)closestCoordinates;
@end

