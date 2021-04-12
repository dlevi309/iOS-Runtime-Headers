/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDUserDataControllerDelegate <NSObject>
@property (readonly) BOOL isUserSettingsPrefEnabled; 
@required
-(id)sharedZoneControllerForUserDataController:(id)arg1;
-(id)privateZoneControllerForUserDataController:(id)arg1;
-(BOOL)isUserSettingsPrefEnabled;
-(BOOL)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;
-(BOOL)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;
-(void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;
-(void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;

@end

