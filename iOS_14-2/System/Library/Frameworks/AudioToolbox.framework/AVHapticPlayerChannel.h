/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class AVHapticClient;

@interface AVHapticPlayerChannel : NSObject {

	unsigned long long _chanID;
	unsigned long long _behavior;
	AVHapticClient* _client;

}

@property (assign) unsigned long long chanID;                     //@synthesize chanID=_chanID - In the implementation block
@property (__weak) AVHapticClient * client;                       //@synthesize client=_client - In the implementation block
@property (assign) unsigned long long eventBehavior; 
-(AVHapticClient *)client;
-(void)setClient:(AVHapticClient *)arg1 ;
-(unsigned long long)chanID;
-(unsigned long long)eventBehavior;
-(id)initWithChannelID:(id)arg1 client:(id)arg2 ;
-(void)setEventBehavior:(unsigned long long)arg1 ;
-(BOOL)startEvent:(unsigned long long)arg1 atTime:(double)arg2 token:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)startEvent:(unsigned long long)arg1 atTime:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 token:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)sendEvents:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)stopEvent:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)clearEvents:(double)arg1 error:(id*)arg2 ;
-(BOOL)setParameter:(unsigned long long)arg1 value:(float)arg2 atTime:(double)arg3 error:(id*)arg4 ;
-(BOOL)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 error:(id*)arg4 ;
-(BOOL)resetAtTime:(double)arg1 error:(id*)arg2 ;
-(void)setChanID:(unsigned long long)arg1 ;
-(void)invalidate;
@end

