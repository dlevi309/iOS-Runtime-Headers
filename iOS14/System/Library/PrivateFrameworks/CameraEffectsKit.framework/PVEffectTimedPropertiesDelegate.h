/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol PVEffectTimedPropertiesDelegate <NSObject>
@optional
-(void)effect:(id)arg1 willStartRequestingTimedProperties:(id)arg2;
-(void)effect:(id)arg1 didStopRequestingTimedProperties:(id)arg2;

@required
-(id)supportedTimedPropertyGroupsForEffect:(id)arg1;
-(id)effect:(id)arg1 timedPropertiesForGroup:(id)arg2 time:(SCD_Struct_JF3)arg3 userContext:(id)arg4;

@end

