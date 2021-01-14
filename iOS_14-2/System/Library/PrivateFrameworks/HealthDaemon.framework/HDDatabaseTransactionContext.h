/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)contextForReading;
+(id)contextForReadingProtectedData;
+(id)_cachedContextForOptions:(unsigned long long)arg1 ;
+(id)highPriorityContext;
+(id)contextForWriting;
+(id)contextForWritingProtectedData;
-(long long)cacheScope;
-(id)mergedContextWithContext:(id)arg1 error:(id*)arg2 ;
-(long long)journalType;
-(BOOL)skipJournalMerge;
-(BOOL)requiresProtectedData;
-(BOOL)requiresWrite;
-(id)copyForWriting;
-(id)_initWithOptions:(unsigned long long)arg1 ;
-(id)copyForReadingProtectedData;
-(void)_applyOptions:(unsigned long long)arg1 enable:(BOOL)arg2 ;
-(id)init;
-(HDDatabaseTransactionContextStatistics *)statistics;
-(BOOL)containsContext:(id)arg1 error:(id*)arg2 ;
-(id)copyForWritingProtectedData;
-(BOOL)requiresNewDatabaseConnection;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSSet *)accessibilityAssertions;
-(id)description;
-(BOOL)highPriority;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(id)_initWithOptions:(unsigned long long)arg1 journalType:(long long)arg2 cacheScope:(long long)arg3 assertions:(id)arg4 statistics:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

