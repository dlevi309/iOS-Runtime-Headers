/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class MTBaseQueryObserver, NSObject, MTDefaultsChangeNotifier;

@interface MTBaseProcessor : NSObject {

	BOOL _isStopping;
	MTBaseQueryObserver* _queryObserver;
	NSObject*<OS_dispatch_source> _timer;
	MTDefaultsChangeNotifier* _defaultsNotifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject* _isStoppingLock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) MTDefaultsChangeNotifier * defaultsNotifier;              //@synthesize defaultsNotifier=_defaultsNotifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject * isStoppingLock;                                //@synthesize isStoppingLock=_isStoppingLock - In the implementation block
@property (assign,nonatomic) BOOL isStopping; 
@property (nonatomic,retain) MTBaseQueryObserver * queryObserver;                      //@synthesize queryObserver=_queryObserver - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)entityName;
-(NSObject*<OS_dispatch_source>)timer;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)predicate;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(BOOL)isStopping;
-(BOOL)start;
-(void)stop;
-(BOOL)isRunning;
-(void)enqueueWorkBlock:(/*^block*/id)arg1 ;
-(void)results:(/*^block*/id)arg1 ;
-(void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2 ;
-(id)createQueryObserver;
-(void)setQueryObserver:(MTBaseQueryObserver *)arg1 ;
-(MTBaseQueryObserver *)queryObserver;
-(double)updatePredicateDuration;
-(void)updatePredicate;
-(id)defaultPropertiesThatAffectPredicate;
-(void)setDefaultsNotifier:(MTDefaultsChangeNotifier *)arg1 ;
-(MTDefaultsChangeNotifier *)defaultsNotifier;
-(void)setIsStopping:(BOOL)arg1 ;
-(NSObject *)isStoppingLock;
-(void)setIsStoppingLock:(NSObject *)arg1 ;
@end

