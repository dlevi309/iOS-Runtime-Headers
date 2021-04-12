/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCCaptionsSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, AVConferenceXPCClient, NSObject, NSString;

@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate> {

	NSMutableDictionary* _streamTokenList;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(void)notifyClientsWithStreamToken:(long long)arg1 service:(char*)arg2 arguments:(id)arg3 ;
-(void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3 ;
-(void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3 ;
-(void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2 ;
-(void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2 ;
-(void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2 ;
-(void)registerCaptionsSource:(id)arg1 streamToken:(long long)arg2 ;
-(void)unregisterCaptionsSourceWithStreamToken:(long long)arg1 ;
-(id)captionsSourceFromClientContext:(id)arg1 ;
@end

