/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@protocol OS_dispatch_queue;
@class NSObject, NSPredicate;

@interface OSLogEventStreamBase : NSObject {

	unsigned _invalidated;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _target;
	unsigned long long _flags;
	NSPredicate* _filterPredicate;
	/*^block*/id _streamHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) unsigned long long flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSPredicate * filterPredicate;                      //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id streamHandler;                                   //@synthesize streamHandler=_streamHandler - In the implementation block
@property (assign,nonatomic) unsigned invalidated;                             //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                             //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)setTarget:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)filterPredicate;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned)invalidated;
-(id)streamHandler;
-(void)setStreamHandler:(id)arg1 ;
-(unsigned long long)flags;
-(void)setInvalidated:(unsigned)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_queue>)target;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

