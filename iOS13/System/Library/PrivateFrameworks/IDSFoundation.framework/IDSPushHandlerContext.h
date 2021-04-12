/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface IDSPushHandlerContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _topics;
	NSSet* _commands;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSSet * topics;                                      //@synthesize topics=_topics - In the implementation block
@property (nonatomic,copy) NSSet * commands;                                    //@synthesize commands=_commands - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(NSSet *)commands;
-(id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3 ;
-(NSSet *)topics;
-(void)setTopics:(NSSet *)arg1 ;
-(void)setCommands:(NSSet *)arg1 ;
@end

