/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSArray;


@protocol HMDSettingsControllerProtocol <HMFObject,AWDHMDSettingsControllerProtocol>
@property (readonly) NSArray * allObjectIdentifiers; 
@property (readonly) id<HMDSettingGroupProtocol> rootGroup; 
@required
-(void)encodeWithCoder:(id)arg1;
-(void)configure;
-(id<HMDSettingGroupProtocol>)rootGroup;
-(void)migrateSettingsWithCompletion:(/*^block*/id)arg1;
-(id)modelsToMakeSettings;
-(void)loadWithModels:(id)arg1;
-(NSArray *)allObjectIdentifiers;

@end

