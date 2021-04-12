/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
+(void)updateCriticalState;
-(void)_conferenceEnded:(id)arg1 ;
-(long long)_runPingTestForChat:(id)arg1 ;
-(void)_conferenceWillStart:(id)arg1 ;
-(long long)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2 ;
-(void)chatStateUpdated;
@end

