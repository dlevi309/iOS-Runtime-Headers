/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSError, HMBSQLQueryStatement, NSMutableArray, NSNumber;

@interface HMBSQLQueryIterator : NSEnumerator {

	int _sequenceBindOffset;
	NSError* _error;
	HMBSQLQueryStatement* _statement;
	unsigned long long _maximumRowsPerQuery;
	NSMutableArray* _cachedResults;
	NSNumber* _currentSequence;

}

@property (nonatomic,readonly) HMBSQLQueryStatement * statement;                    //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumRowsPerQuery;              //@synthesize maximumRowsPerQuery=_maximumRowsPerQuery - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedResults;                        //@synthesize cachedResults=_cachedResults - In the implementation block
@property (nonatomic,retain) NSNumber * currentSequence;                            //@synthesize currentSequence=_currentSequence - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int sequenceBindOffset;                                //@synthesize sequenceBindOffset=_sequenceBindOffset - In the implementation block
+(unsigned long long)maximumRowsPerSelect;
+(void)setMaximumRowsPerSelect:(unsigned long long)arg1 ;
-(id)nextObject;
-(HMBSQLQueryStatement *)statement;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setCachedResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cachedResults;
-(id)initWithStatement:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(unsigned long long)arg3 error:(id)arg4 ;
-(NSNumber *)currentSequence;
-(void)setCurrentSequence:(NSNumber *)arg1 ;
-(id)fetchRow:(id)arg1 error:(id*)arg2 ;
-(id)initWithStatement:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(unsigned long long)arg3 ;
-(id)fetchRowFromStatement:(sqlite3_stmtRef)arg1 skip:(BOOL*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(unsigned long long)maximumRowsPerQuery;
-(int)sequenceBindOffset;
-(void)setSequenceBindOffset:(int)arg1 ;
@end

