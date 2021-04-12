/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol OS_dispatch_queue;
@class EMRemoteConnection, NSObject, NSMutableDictionary, NSString;

@interface EMInteractionLogger : NSObject <EFLoggable> {

	BOOL _appLaunched;
	EMRemoteConnection* _connection;
	NSObject*<OS_dispatch_queue> _stateTrackingQueue;
	NSMutableDictionary* _viewedMessages;
	NSMutableDictionary* _messageListMessages;
	NSRange _messageListVisibleRows;

}

@property (retain) EMRemoteConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateTrackingQueue;              //@synthesize stateTrackingQueue=_stateTrackingQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewedMessages;                         //@synthesize viewedMessages=_viewedMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageListMessages;                    //@synthesize messageListMessages=_messageListMessages - In the implementation block
@property (assign,nonatomic) NSRange messageListVisibleRows;                               //@synthesize messageListVisibleRows=_messageListVisibleRows - In the implementation block
@property (assign) BOOL appLaunched;                                                       //@synthesize appLaunched=_appLaunched - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)_appWillEnterForeground;
-(void)_appDidEnterBackground;
-(NSObject*<OS_dispatch_queue>)stateTrackingQueue;
-(NSMutableDictionary *)viewedMessages;
-(id)_rescopedMessageObjectID:(id)arg1 ;
-(void)_xpcLogEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4 ;
-(id)_stateForObjectID:(id)arg1 container:(id)arg2 ;
-(NSMutableDictionary *)messageListMessages;
-(NSRange)messageListVisibleRows;
-(void)_logMessageListDisplayStartedMessageID:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5 ;
-(void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2 ;
-(void)setAppLaunched:(BOOL)arg1 ;
-(void)_xpcLogEvent:(id)arg1 date:(id)arg2 data:(id)arg3 ;
-(BOOL)appLaunched;
-(void)messageListDisplayEndedForAllListItems;
-(void)_viewingEndedForAllMessages;
-(void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2 ;
-(void)scrolledToEndOfMessage:(id)arg1 ;
-(void)viewingStartedForMessage:(id)arg1 messageListScope:(id)arg2 ;
-(void)viewingEndedForMessage:(id)arg1 ;
-(void)composeReplyStartedForMessage:(id)arg1 ;
-(void)composeFowardStartedForMessage:(id)arg1 ;
-(void)messageListDisplayStartedForListItem:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4 ;
-(void)messageListDisplayEndedForListItem:(id)arg1 cellStyle:(id)arg2 ;
-(id)messageListTypeForMailboxes:(id)arg1 ;
-(void)applicationLaunched;
-(void)setStateTrackingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setViewedMessages:(NSMutableDictionary *)arg1 ;
-(void)setMessageListMessages:(NSMutableDictionary *)arg1 ;
-(void)setMessageListVisibleRows:(NSRange)arg1 ;
@end

