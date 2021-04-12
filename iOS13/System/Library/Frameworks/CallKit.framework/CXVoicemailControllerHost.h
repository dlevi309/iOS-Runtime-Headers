/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CXVoicemailControllerHostConnectionDelegate.h>

@protocol OS_dispatch_queue, CXVoicemailControllerHostDelegate;
@class NSObject, NSXPCListener, NSMutableDictionary, NSMutableSet, NSString;

@interface CXVoicemailControllerHost : NSObject <NSXPCListenerDelegate, CXVoicemailControllerHostConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<CXVoicemailControllerHostDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSXPCListener* _xpcListener;
	NSMutableDictionary* _voicemailUUIDToVoicemailMap;
	NSMutableSet* _connections;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXVoicemailControllerHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                        //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * voicemailUUIDToVoicemailMap;                  //@synthesize voicemailUUIDToVoicemailMap=_voicemailUUIDToVoicemailMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * connections;                                         //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXVoicemailControllerHostDelegate>)delegate;
-(void)setDelegate:(id<CXVoicemailControllerHostDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSMutableSet *)connections;
-(void)setConnections:(NSMutableSet *)arg1 ;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)voicemailUUIDToVoicemailMap;
-(void)addOrUpdateVoicemails:(id)arg1 ;
-(void)removeVoicemails:(id)arg1 ;
-(void)voicemailControllerHostConnectionInvalidated:(id)arg1 ;
-(void)voicemailControllerHostConnection:(id)arg1 requestVoicemails:(/*^block*/id)arg2 ;
-(void)voicemailControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_voicemailsForVoicemailControllerHostConnection:(id)arg1 ;
-(id)initWithVoicemails:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)setVoicemailUUIDToVoicemailMap:(NSMutableDictionary *)arg1 ;
@end

