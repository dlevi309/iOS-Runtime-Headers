/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <EmailDaemon/EDSearchableIndexManager.h>
#import <libobjc.A.dylib/EDSearchableIndexReasonProvider.h>

@class NSSet, EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSString;

@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager <EDSearchableIndexReasonProvider> {

	os_unfair_lock_s _indexLock;
	EDSearchableIndex* _index;
	EDSearchableIndexPersistence* _persistence;
	EDSearchableIndexScheduler* _scheduler;

}

@property (nonatomic,retain) EDSearchableIndex * index;                               //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) EDSearchableIndexPersistence * persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,retain) EDSearchableIndexScheduler * scheduler;                  //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * dataSourceRefreshReasons; 
@property (nonatomic,copy,readonly) NSSet * purgeReasons; 
@property (nonatomic,copy,readonly) NSSet * exclusionReasons; 
@property (nonatomic,copy,readonly) NSSet * currentReasons; 
-(EDSearchableIndex *)index;
-(void)setIndex:(EDSearchableIndex *)arg1 ;
-(EDSearchableIndexPersistence *)persistence;
-(EDSearchableIndexScheduler *)scheduler;
-(void)setScheduler:(EDSearchableIndexScheduler *)arg1 ;
-(void)setPersistence:(EDSearchableIndexPersistence *)arg1 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 ;
-(id)initWithDatabase:(id)arg1 hookResponder:(id)arg2 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2 ;
-(NSSet *)dataSourceRefreshReasons;
-(NSSet *)purgeReasons;
-(NSSet *)exclusionReasons;
-(NSSet *)currentReasons;
@end

