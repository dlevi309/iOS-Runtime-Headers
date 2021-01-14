/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_conversationsByIdentifier;
-(void)_registerConversation:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeConversationWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveConversation:(id)arg1 withIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchConversationWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

