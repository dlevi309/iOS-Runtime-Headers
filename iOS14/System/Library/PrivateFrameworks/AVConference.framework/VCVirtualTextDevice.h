/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(void)pause;
-(id)sendDelegate;
-(void)stop;
-(void)setPause:(BOOL)arg1 ;
-(void)resume;
-(void)dealloc;
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

