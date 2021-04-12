/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AFConversationStore : NSObject {

	NSMutableDictionary* _conversationsByIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (getter=_conversationsByIdentifier,nonatomic,readonly) NSMutableDictionary * conversationsByIdentifier;              //@synthesize conversationsByIdentifier=_conversationsByIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                               //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_conversationsByIdentifier;
-(void)_registerConversation:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeConversationWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveConversation:(id)arg1 withIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchConversationWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

