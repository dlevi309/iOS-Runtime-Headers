/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3 ;
-(NSSet *)commands;
-(NSSet *)topics;
-(void)setTopics:(NSSet *)arg1 ;
-(void)setCommands:(NSSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

