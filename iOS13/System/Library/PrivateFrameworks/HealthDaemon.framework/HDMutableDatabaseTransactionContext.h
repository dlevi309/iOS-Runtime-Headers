/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDatabaseTransactionContext.h>

@class HDDatabaseTransactionContextStatistics;

@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext

@property (assign,nonatomic) BOOL skipJournalMerge; 
@property (assign,nonatomic) BOOL requiresNewDatabaseConnection; 
@property (assign,nonatomic) long long journalType; 
@property (assign,nonatomic) long long cacheScope; 
@property (assign,nonatomic) BOOL requiresWrite; 
@property (assign,nonatomic) BOOL requiresProtectedData; 
@property (assign,nonatomic) BOOL highPriority; 
@property (nonatomic,retain) HDDatabaseTransactionContextStatistics * statistics; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatistics:(HDDatabaseTransactionContextStatistics *)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)setRequiresProtectedData:(BOOL)arg1 ;
-(void)setCacheScope:(long long)arg1 ;
-(void)addAccessibilityAssertion:(id)arg1 ;
-(void)setRequiresWrite:(BOOL)arg1 ;
-(void)setJournalType:(long long)arg1 ;
-(void)setRequiresNewDatabaseConnection:(BOOL)arg1 ;
-(void)setSkipJournalMerge:(BOOL)arg1 ;
@end

