/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableSet, HDDatabaseTransactionContextStatistics, NSSet;

@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying> {

	long long _journalType;
	long long _cacheScope;
	unsigned long long _options;
	NSMutableSet* _accessibilityAssertions;
	HDDatabaseTransactionContextStatistics* _statistics;

}

@property (nonatomic,readonly) BOOL skipJournalMerge; 
@property (nonatomic,readonly) BOOL requiresNewDatabaseConnection; 
@property (nonatomic,copy,readonly) NSSet * accessibilityAssertions; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long journalType;                                            //@synthesize journalType=_journalType - In the implementation block
@property (nonatomic,readonly) long long cacheScope;                                             //@synthesize cacheScope=_cacheScope - In the implementation block
@property (nonatomic,readonly) BOOL requiresWrite; 
@property (nonatomic,readonly) BOOL requiresProtectedData; 
@property (nonatomic,readonly) BOOL highPriority; 
@property (nonatomic,readonly) HDDatabaseTransactionContextStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
+(id)contextForReadingProtectedData;
+(id)contextForWritingProtectedData;
+(id)contextForWriting;
+(id)_cachedContextForOptions:(unsigned long long)arg1 ;
+(id)contextForReading;
+(id)highPriorityContext;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(HDDatabaseTransactionContextStatistics *)statistics;
-(id)_initWithOptions:(unsigned long long)arg1 ;
-(BOOL)highPriority;
-(BOOL)requiresProtectedData;
-(id)copyForReadingProtectedData;
-(id)copyForWritingProtectedData;
-(long long)cacheScope;
-(BOOL)skipJournalMerge;
-(BOOL)requiresWrite;
-(id)mergedContextWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)containsContext:(id)arg1 error:(id*)arg2 ;
-(long long)journalType;
-(BOOL)requiresNewDatabaseConnection;
-(NSSet *)accessibilityAssertions;
-(id)_initWithOptions:(unsigned long long)arg1 journalType:(long long)arg2 cacheScope:(long long)arg3 assertions:(id)arg4 statistics:(id)arg5 ;
-(id)copyForWriting;
-(void)_applyOptions:(unsigned long long)arg1 enable:(BOOL)arg2 ;
@end

