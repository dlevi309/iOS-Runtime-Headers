/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANRemotePlaybackSessionServiceClientInterface.h>

@protocol ANRemotePlaybackSessionDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface ANRemotePlaybackSession : NSObject <ANRemotePlaybackSessionServiceClientInterface> {

	id<ANRemotePlaybackSessionDelegate> _delegate;
	NSXPCConnection* _connection;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id handler;                                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> handlerQueue;                 //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (assign,nonatomic,__weak) id<ANRemotePlaybackSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ANRemotePlaybackSessionDelegate>)delegate;
-(void)setHandler:(id)arg1 ;
-(void)setDelegate:(id<ANRemotePlaybackSessionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)invalidate;
-(void)lastPlayedAnnouncementInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)handler;
-(BOOL)endSession;
-(void)dealloc;
-(void)setPlaybackStoppedForAnnouncement:(id)arg1 ;
-(BOOL)startSessionForGroupID:(id)arg1 announcementsHandler:(/*^block*/id)arg2 ;
-(void)setPlaybackStartedForAnnouncement:(id)arg1 ;
-(void)didUpdateAnnouncements:(id)arg1 forGroupID:(id)arg2 ;
-(void)_callHandler:(id)arg1 ;
-(void)setPlaybackEndedForAnnouncement:(id)arg1 ;
@end

