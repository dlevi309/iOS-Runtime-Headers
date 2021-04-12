/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageSensorSettings.h>

@class NSString;

@interface ARDepthSensorSettings : ARImageSensorSettings {

	NSString* _timeOfFlightProjectorMode;

}

@property (nonatomic,retain) NSString * timeOfFlightProjectorMode;              //@synthesize timeOfFlightProjectorMode=_timeOfFlightProjectorMode - In the implementation block
-(void)setTimeOfFlightProjectorMode:(NSString *)arg1 ;
-(NSString *)timeOfFlightProjectorMode;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithVideoFormat:(id)arg1 ;
@end

