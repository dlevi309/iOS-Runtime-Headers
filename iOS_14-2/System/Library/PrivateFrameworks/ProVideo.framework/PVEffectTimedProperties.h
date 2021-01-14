/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVEffectTimedProperties
@required
-(void)removeAllTimedPropertiesDelegates;
-(void)addTimedPropertiesDelegate:(id)arg1 userContext:(id)arg2;
-(BOOL)hasTimedPropertiesDelegates;
-(BOOL)applyTimedPropertiesForTime:(SCD_Struct_PV22)arg1;
-(void)removeTimedPropertiesDelegate:(id)arg1;
-(id)timedPropertiesDelegates;
-(BOOL)hasTimedPropertiesDelegate:(id)arg1;
-(id)userContextForTimedPropertiesDelegate:(id)arg1;

@end

