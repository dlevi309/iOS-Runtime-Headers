/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBluetoothMonitor : _DKMonitor
+(id)entitlements;
+(id)eventStream;
+(id)_eventWithState:(id)arg1 name:(id)arg2 address:(id)arg3 type:(int)arg4 isAppleAudioDevice:(BOOL)arg5 productID:(unsigned)arg6 ;
+(id)contextValueForBluetoothConnectionStatus:(BOOL)arg1 name:(id)arg2 address:(id)arg3 deviceType:(int)arg4 isAppleAudioDevice:(BOOL)arg5 productID:(unsigned)arg6 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)deactivate;
@end

