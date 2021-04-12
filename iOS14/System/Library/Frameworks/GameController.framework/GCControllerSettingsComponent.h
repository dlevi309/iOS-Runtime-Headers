/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class GCControllerSettings;


@protocol GCControllerSettingsComponent <GCControllerComponent>
@property (nonatomic,copy) id changedHandler; 
@property (nonatomic,readonly) GCControllerSettings * settingsForBundleID; 
@property (nonatomic,readonly) GCControllerSettings * settingsDefault; 
@required
-(id)changedHandler;
-(void)setChangedHandler:(/*^block*/id)arg1;
-(GCControllerSettings *)settingsForBundleID;
-(GCControllerSettings *)settingsDefault;

@end

