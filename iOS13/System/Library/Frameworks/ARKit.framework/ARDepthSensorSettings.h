/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageSensorSettings.h>

@class NSString;

@interface ARDepthSensorSettings : ARImageSensorSettings {

	NSString* _timeOfFlightProjectorMode;

}

@property (nonatomic,retain) NSString * timeOfFlightProjectorMode;              //@synthesize timeOfFlightProjectorMode=_timeOfFlightProjectorMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)timeOfFlightProjectorMode;
-(void)setTimeOfFlightProjectorMode:(NSString *)arg1 ;
-(id)initWithVideoFormat:(id)arg1 ;
@end

