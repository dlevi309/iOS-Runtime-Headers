/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSSet * dataSourceRefreshReasons; 
@property (nonatomic,copy,readonly) NSSet * purgeReasons; 
@property (nonatomic,copy,readonly) NSSet * exclusionReasons; 
@property (nonatomic,copy,readonly) NSSet * currentReasons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EDSearchableIndexPersistence *)persistence;
-(void)setPersistence:(EDSearchableIndexPersistence *)arg1 ;
-(EDSearchableIndex *)index;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2 ;
-(NSSet *)purgeReasons;
-(void)setIndex:(EDSearchableIndex *)arg1 ;
-(id)initWithDatabase:(id)arg1 hookResponder:(id)arg2 ;
-(void)setScheduler:(EDSearchableIndexScheduler *)arg1 ;
-(NSSet *)currentReasons;
-(NSSet *)dataSourceRefreshReasons;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 ;
-(NSSet *)exclusionReasons;
-(EDSearchableIndexScheduler *)scheduler;
@end

