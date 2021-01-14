/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMServiceAgent.h>

@interface IMServiceAgentImpl : IMServiceAgent
+(void)initialize;
+(id)notificationCenter;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(void)_determineStatusImageAppearance;
+(id)sharedAgent;
+(void)_statusImageAppearanceChanged:(id)arg1 ;
-(id)init;
-(id)notificationCenter;
-(id)serviceWithName:(id)arg1 ;
-(unsigned long long)vcCapabilities;
-(void)setupComplete;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 ;
-(void)dealloc;
-(void)_statusImageAppearanceChanged:(id)arg1 ;
-(void)_daemonConnected:(id)arg1 ;
-(void)_daemonDisconnected:(id)arg1 ;
-(void)launchIfNecessary;
-(void)_customMessagesChanged:(id)arg1 ;
-(id)myAvailableMessages;
-(id)myAwayMessages;
-(void)setMyAvailableMessages:(id)arg1 ;
-(void)setMyAwayMessages:(id)arg1 ;
@end

