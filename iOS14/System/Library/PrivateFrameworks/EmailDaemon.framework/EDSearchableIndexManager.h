/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>

@class EDPersistenceDatabase, EDSearchableIndexPersistence, EDSearchableIndexScheduler, EDSearchableIndex, NSString;

@interface EDSearchableIndexManager : NSObject <EFLoggable, EDMessageChangeHookResponder> {

	BOOL _needsReindex;
	BOOL _needsToScheduleRecurringActivity;
	EDPersistenceDatabase* _database;

}

@property (assign,nonatomic) BOOL needsReindex;                                         //@synthesize needsReindex=_needsReindex - In the implementation block
@property (assign,nonatomic) BOOL needsToScheduleRecurringActivity;                     //@synthesize needsToScheduleRecurringActivity=_needsToScheduleRecurringActivity - In the implementation block
@property (nonatomic,readonly) EDSearchableIndexPersistence * persistence; 
@property (nonatomic,readonly) EDSearchableIndexScheduler * scheduler; 
@property (nonatomic,readonly) EDPersistenceDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDSearchableIndex * index; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(EDSearchableIndexPersistence *)persistence;
-(void)test_tearDown;
-(EDSearchableIndex *)index;
-(void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2 ;
-(void)persistenceWillBeginUpdates;
-(void)persistenceDidFinishUpdates;
-(void)persistenceDidUpdateData:(id)arg1 message:(id)arg2 ;
-(void)persistenceDidAddLabels:(id)arg1 removeLabels:(id)arg2 messages:(id)arg3 generationWindow:(id)arg4 ;
-(void)scheduleRecurringActivity;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 hookResponder:(id)arg2 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 ;
-(void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2 ;
-(EDPersistenceDatabase *)database;
-(EDSearchableIndexScheduler *)scheduler;
-(void)setNeedsToScheduleRecurringActivity:(BOOL)arg1 ;
-(BOOL)needsReindex;
-(void)_removeAllItemsFromIndexAndWait:(BOOL)arg1 options:(unsigned long long)arg2 ;
-(void)setNeedsReindex:(BOOL)arg1 ;
-(BOOL)needsToScheduleRecurringActivity;
-(void)_removeItemsForPersistedMessages:(id)arg1 ;
-(void)removeAllItemsFromIndexAndWait:(BOOL)arg1 skipInvalidation:(BOOL)arg2 ;
-(void)setNeedsReindex;
@end

