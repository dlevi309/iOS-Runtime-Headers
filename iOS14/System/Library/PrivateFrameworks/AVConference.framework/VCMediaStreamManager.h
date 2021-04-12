/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMutableDictionary, NSString;

@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate> {

	opaque_pthread_mutex_t stateLock;
	NSMutableArray* streamArray;
	NSObject*<OS_dispatch_queue> xpcQueue;
	NSMutableDictionary* _vcMomentsCollectorDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2 ;
-(id)textStreamWithStreamToken:(long long)arg1 ;
-(oneway void)release;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(id)init;
-(void)pauseStreams:(BOOL)arg1 ;
-(id)retain;
-(void)registerBlocksForService;
-(id)autorelease;
-(void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(id)allocWithZone:(NSZone*)arg1 ;
-(void)vcMediaStream:(id)arg1 didReceiveText:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(unsigned long long)retainCount;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 dictionary:(id)arg4 ;
-(void)deregisterBlocksForService;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)vcMediaStreamDidInterruptionEnd:(id)arg1 ;
-(void)vcMediaStreamDidInterruptionBegin:(id)arg1 ;
-(void)dealloc;
-(void)vcMediaStreamDidStop:(id)arg1 ;
@end

