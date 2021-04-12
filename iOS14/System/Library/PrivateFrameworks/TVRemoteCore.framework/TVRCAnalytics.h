/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@interface TVRCAnalytics : NSObject
+(id)sharedInstance;
-(id)_presentationSourceEventDictionaryFor:(id)arg1 ;
-(id)_spinnerShownDictionaryFor:(id)arg1 ;
-(id)_connectionDictionaryForType:(id)arg1 status:(id)arg2 reason:(id)arg3 ;
-(void)logPresentationFrom:(id)arg1 ;
-(void)logConnectingSpinnerShown:(id)arg1 ;
-(void)logSearchingSpinnerShown;
-(void)logConnectionStatus:(long long)arg1 type:(long long)arg2 reason:(long long)arg3 ;
-(void)logShortcutActionRunWithType:(id)arg1 ;
-(void)logSessionStatistics:(id)arg1 ;
@end

