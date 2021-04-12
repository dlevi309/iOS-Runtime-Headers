/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class AVAudioSession;

@interface _DKAudioInputMonitor : _DKMonitor {

	AVAudioSession* _inputMonitor;

}
+(id)eventStream;
+(id)entitlement;
+(id)_eventWithState:(id)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)deactivate;
-(void)onAudioRouteChangeNotification:(id)arg1 ;
@end

