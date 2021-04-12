/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCMomentsMessengerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface VCMomentsManager : NSObject <VCMomentsMessengerDelegate> {

	NSMutableDictionary* _streamTokenList;
	id _delegate;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}

@property (assign,nonatomic) id<VCMomentsMessengerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<VCMomentsMessengerDelegate>)delegate;
-(void)setDelegate:(id<VCMomentsMessengerDelegate>)arg1 ;
-(void)registerBlocksForService;
-(void)notifyClientsWithStreamToken:(long long)arg1 service:(char*)arg2 arguments:(id)arg3 ;
-(void)streamTokenDidCleanupAllRequests:(long long)arg1 ;
-(void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3 ;
-(void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5 ;
-(void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(BOOL)arg3 ;
-(id)messengerFromClientContext:(id)arg1 ;
-(id)newRequestWithArguments:(id)arg1 state:(unsigned char)arg2 ;
-(void)registerMomentsMessenger:(id)arg1 withStreamToken:(long long)arg2 ;
-(void)unregisterMomentsMessengerWithStreamToken:(long long)arg1 ;
@end

