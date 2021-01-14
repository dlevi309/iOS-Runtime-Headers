/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)appLaunched;
-(id)initWithRemoteConnection:(id)arg1 ;
-(id)_stateForObjectID:(id)arg1 container:(id)arg2 ;
-(void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2 ;
-(void)applicationLaunched;
-(NSObject*<OS_dispatch_queue>)stateTrackingQueue;
-(NSMutableDictionary *)viewedMessages;
-(void)messageListDisplayEndedForAllListItems;
-(void)_viewingEndedForAllMessages;
-(void)_appWillEnterForeground;
-(void)scrolledToEndOfMessage:(id)arg1 ;
-(void)composeFowardStartedForMessage:(id)arg1 ;
-(id)messageListTypeForMailboxes:(id)arg1 ;
-(void)composeReplyStartedForMessage:(id)arg1 ;
-(EMRemoteConnection *)connection;
-(NSRange)messageListVisibleRows;
-(void)messageListDisplayEndedForListItem:(id)arg1 cellStyle:(id)arg2 ;
-(void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2 ;
-(void)setViewedMessages:(NSMutableDictionary *)arg1 ;
-(void)setMessageListMessages:(NSMutableDictionary *)arg1 ;
-(void)messageListDisplayStartedForListItem:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4 ;
-(void)viewingEndedForMessage:(id)arg1 ;
-(void)setAppLaunched:(BOOL)arg1 ;
-(void)_xpcLogEvent:(id)arg1 date:(id)arg2 data:(id)arg3 ;
-(void)setStateTrackingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_logMessageListDisplayStartedMessageID:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5 ;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(NSMutableDictionary *)messageListMessages;
-(void)_xpcLogEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4 ;
-(void)viewingStartedForMessage:(id)arg1 messageListScope:(id)arg2 ;
-(void)_appDidEnterBackground;
-(id)_rescopedMessageObjectID:(id)arg1 ;
-(void)setMessageListVisibleRows:(NSRange)arg1 ;
@end

