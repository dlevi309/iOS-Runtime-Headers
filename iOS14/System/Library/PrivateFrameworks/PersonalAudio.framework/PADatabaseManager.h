/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
*/

#import <HearingCore/HCDatabaseManager.h>

@interface PADatabaseManager : HCDatabaseManager
+(id)sharedManager;
-(void)logMessage:(id)arg1 ;
-(BOOL)saveConfiguration:(id)arg1 ;
-(id)containerIdentifier;
-(id)currentConfiguration;
-(id)cloudKitContainer;
-(id)managedObjectModelName;
-(void)contentDidUpdate:(id)arg1 ;
@end

