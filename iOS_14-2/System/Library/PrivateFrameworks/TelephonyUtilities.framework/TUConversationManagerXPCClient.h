/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUConversationManagerXPCClient.h>

@protocol TUConversationManagerXPCClient <TUConversationMediaControllerXPCClient>
@required
-(oneway void)updateConversationsByGroupUUID:(id)arg1;

@end

#import <libobjc.A.dylib/TUConversationManagerDataSource.h>

@protocol TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate, OS_dispatch_queue;
@class NSDictionary, NSObject, NSXPCConnection, NSString;

@interface TUConversationManagerXPCClient : NSObject <TUConversationManagerXPCClient, TUConversationManagerDataSource> {

	BOOL _hasRequestedInitialState;
	BOOL _shouldConnectToHost;
	int _shouldConnectToken;
	id<TUConversationManagerDataSourceDelegate> _delegate;
	id<TUConversationMediaControllerDataSourceDelegate> _mediaDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSDictionary* _conversationsByGroupUUID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                       //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedInitialState;                                                         //@synthesize hasRequestedInitialState=_hasRequestedInitialState - In the implementation block
@property (assign,nonatomic) int shouldConnectToken;                                                                //@synthesize shouldConnectToken=_shouldConnectToken - In the implementation block
@property (assign,nonatomic) BOOL shouldConnectToHost;                                                              //@synthesize shouldConnectToHost=_shouldConnectToHost - In the implementation block
@property (nonatomic,copy) NSDictionary * conversationsByGroupUUID;                                                 //@synthesize conversationsByGroupUUID=_conversationsByGroupUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TUConversationManagerDataSourceDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDataSourceDelegate> mediaDelegate;              //@synthesize mediaDelegate=_mediaDelegate - In the implementation block
+(id)conversationManagerServerXPCInterface;
+(id)conversationManagerClientXPCInterface;
+(id)conversationManagerAllowedClasses;
+(void)setAsynchronousServer:(id)arg1 ;
+(void)setSynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(id)asynchronousServer;
-(void)handleServerDisconnect;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setMediaDelegate:(id<TUConversationMediaControllerDataSourceDelegate>)arg1 ;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)conversationsByGroupUUID;
-(id)init;
-(id<TUConversationManagerDataSourceDelegate>)delegate;
-(void)setHasRequestedInitialState:(BOOL)arg1 ;
-(void)_invokeCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasRequestedInitialState;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2 ;
-(void)setConversationsByGroupUUID:(NSDictionary *)arg1 ;
-(oneway void)updateConversationsByGroupUUID:(id)arg1 ;
-(void)buzzMember:(id)arg1 conversation:(id)arg2 ;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2 ;
-(void)setDelegate:(id<TUConversationManagerDataSourceDelegate>)arg1 ;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldConnectToHost;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_requestInitialStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestInitialStateIfNecessary;
-(void)setShouldConnectToken:(int)arg1 ;
-(int)shouldConnectToken;
-(id<TUConversationMediaControllerDataSourceDelegate>)mediaDelegate;
-(void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2 ;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setShouldConnectToHost:(BOOL)arg1 ;
-(void)dealloc;
-(oneway void)mediaPrioritiesChangedForConversation:(id)arg1 ;
@end

