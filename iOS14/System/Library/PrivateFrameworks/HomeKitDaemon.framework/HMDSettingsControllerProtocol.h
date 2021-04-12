/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSArray;


@protocol HMDSettingsControllerProtocol <HMFObject,AWDHMDSettingsControllerProtocol>
@property (readonly) NSArray * allObjectIdentifiers; 
@required
-(void)configure;
-(void)encodeWithCoder:(id)arg1;
-(void)migrateSettingsWithCompletion:(/*^block*/id)arg1;
-(id)modelsToMakeSettings;
-(void)loadWithModels:(id)arg1;
-(NSArray *)allObjectIdentifiers;

@end

