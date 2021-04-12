/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setTarget:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)target;
-(unsigned long long)flags;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(unsigned)invalidated;
-(void)setInvalidated:(unsigned)arg1 ;
-(NSPredicate *)filterPredicate;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(id)streamHandler;
-(void)setStreamHandler:(id)arg1 ;
@end

