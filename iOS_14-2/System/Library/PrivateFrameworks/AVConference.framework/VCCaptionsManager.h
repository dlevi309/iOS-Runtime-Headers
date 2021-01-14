/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerCaptionsSource:(id)arg1 streamToken:(long long)arg2 ;
-(void)registerBlocksForService;
-(void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2 ;
-(void)notifyClientsWithStreamToken:(long long)arg1 service:(char*)arg2 arguments:(id)arg3 ;
-(void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3 ;
-(void)unregisterCaptionsSourceWithStreamToken:(long long)arg1 ;
-(void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2 ;
-(void)deregisterBlocksForService;
-(void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3 ;
-(id)captionsSourceFromClientContext:(id)arg1 ;
-(void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2 ;
-(void)dealloc;
@end

