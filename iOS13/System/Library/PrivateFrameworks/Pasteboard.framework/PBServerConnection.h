/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface PBServerConnection : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSXPCConnection* _memberQ_serverConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * memberQ_serverConnection;              //@synthesize memberQ_serverConnection=_memberQ_serverConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * serverConnection; 
+(id)defaultConnection;
+(unsigned long long)beginListeningToPasteboardChangeNotifications;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)deletePersistentPasteboardWithName:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 error:(id*)arg3 ;
-(id)pasteboardWithName:(id)arg1 error:(id*)arg2 ;
-(id)localGeneralPasteboard:(id*)arg1 ;
-(NSXPCConnection *)serverConnection;
-(NSXPCConnection *)memberQ_serverConnection;
-(void)setMemberQ_serverConnection:(NSXPCConnection *)arg1 ;
-(void)helloCompletionBlock:(/*^block*/id)arg1 ;
-(void)pasteboardWithName:(id)arg1 createIfNeeded:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)localGeneralPasteboardCompletionBlock:(/*^block*/id)arg1 ;
-(void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 itemIndex:(unsigned long long)arg3 typeIdentifier:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)performJanitorialTasksCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAllPasteboardsCompletionBlock:(/*^block*/id)arg1 ;
-(id)pasteboardWithName:(id)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(void)pasteboardWithName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)didPastePasteboard:(id)arg1 ;
@end

