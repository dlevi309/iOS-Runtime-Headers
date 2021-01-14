/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class HMDBackingStore, HMFActivity;


@protocol HMDAccessorySettingsControllerDataSource
@property (readonly) HMDBackingStore * backingStore; 
@property (retain) HMFActivity * setupActivity; 
@property (assign) double setupStartTimestamp; 
@property (assign) double homepodSetupLatency; 
@property (assign) double homepodSettingsCreationTimestamp; 
@required
-(HMDBackingStore *)backingStore;
-(double)homepodSettingsCreationTimestamp;
-(double)homepodSetupLatency;
-(void)setHomepodSetupLatency:(double)arg1;
-(void)setHomepodSettingsCreationTimestamp:(double)arg1;
-(HMFActivity *)setupActivity;
-(void)setSetupActivity:(id)arg1;
-(void)setSetupStartTimestamp:(double)arg1;
-(double)setupStartTimestamp;
-(id)modelsToMakeSettingsForController:(id)arg1 parentUUID:(id)arg2;
-(id)modelsToMigrateSettingsForController:(id)arg1;

@end

