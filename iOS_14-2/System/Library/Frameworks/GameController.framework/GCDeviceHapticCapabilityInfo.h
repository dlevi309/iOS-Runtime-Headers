/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class GCDeviceHaptics, NSArray;


@protocol GCDeviceHapticCapabilityInfo <GCControllerComponent>
@property (readonly) GCDeviceHaptics * deviceHaptics; 
@property (copy,readonly) NSArray * hapticEngines; 
@required
-(void)initializeHapticEngines;
-(void)removeHapticEngines;
-(GCDeviceHaptics *)deviceHaptics;
-(NSArray *)hapticEngines;

@end

