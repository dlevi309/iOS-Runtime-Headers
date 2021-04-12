/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCMediaStreamProtocol.h>
#import <libobjc.A.dylib/VCTextSender.h>
#import <libobjc.A.dylib/VCTextReceiverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate> {

	int _clientPid;
	long long _state;
	NSObject*<OS_dispatch_queue> _queue;
	id _sendDelegate;
	id _mediaStreamDelegate;
	NSObject*<OS_dispatch_queue> _mediaStreamDelegateQueue;

}

@property (assign,nonatomic) NSObject*<VCMediaStreamDelegate> mediaStreamDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaStreamDelegateQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)stop;
-(void)start;
-(void)setPause:(BOOL)arg1 ;
-(id)sendDelegate;
-(void)sendText:(id)arg1 ;
-(void)sendCharacter:(unsigned short)arg1 ;
-(void)didReceiveText:(id)arg1 ;
-(id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2 ;
-(NSObject*<VCMediaStreamDelegate>)mediaStreamDelegate;
-(NSObject*<OS_dispatch_queue>)mediaStreamDelegateQueue;
-(void)setMediaStreamDelegate:(NSObject*<VCMediaStreamDelegate>)arg1 ;
-(void)setMediaStreamDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

