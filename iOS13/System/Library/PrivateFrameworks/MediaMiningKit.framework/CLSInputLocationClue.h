/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)location;
-(id)region;
-(id)placemark;
-(id)place;
-(void)setPlace:(id)arg1 ;
-(id)projectedLocation;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(id)regionInPlacemark;
-(CLLocationCoordinate2D)closestCoordinates;
-(BOOL)isDefinite;
@end

