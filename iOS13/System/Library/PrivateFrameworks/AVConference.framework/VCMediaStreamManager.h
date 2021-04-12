/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3 ;
-(void)vcMediaStreamDidInterruptionBegin:(id)arg1 ;
-(void)vcMediaStreamDidInterruptionEnd:(id)arg1 ;
-(id)textStreamWithStreamToken:(long long)arg1 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveText:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 dictionary:(id)arg4 ;
-(void)pauseStreams:(BOOL)arg1 ;
@end

