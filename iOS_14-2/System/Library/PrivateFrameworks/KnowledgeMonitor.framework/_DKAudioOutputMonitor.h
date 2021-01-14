/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class AVAudioSession;

@interface _DKAudioOutputMonitor : _DKMonitor {

	AVAudioSession* _outputMonitor;

}
+(id)entitlements;
+(id)eventStream;
+(id)contextValueForAudioOutputConnectionStatus:(BOOL)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5 ;
+(id)_eventWithState:(id)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5 ;
-(id)init;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)onAudioRouteChangeNotification:(id)arg1 ;
-(void)dealloc;
@end

