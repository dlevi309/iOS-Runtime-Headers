/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol GCDeviceConfigurationRegistry <NSObject>
@required
-(BOOL)removeConfigurationWithIdentifier:(id)arg1;
-(BOOL)addConfiguration:(id)arg1 replaceExisting:(BOOL)arg2;
-(id)configurationWithIdentifier:(id)arg1;
-(void)refreshActiveConfigurations;
-(BOOL)updateConfiguration:(id)arg1;
-(BOOL)hasConfigurationWithIdentifier:(id)arg1;
-(void)refreshActiveConfigurationsWithCompletion:(/*^block*/id)arg1;

@end

