/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPredicate, NSArray, NSSet;

@interface _DKEventQuery : _DKQuery <_DKExecutableQuery, NSCopying> {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	BOOL _readMetadata;
	BOOL _deduplicateValues;
	BOOL _returnsDistinctResults;
	NSPredicate* _predicate;
	NSArray* _eventStreams;
	NSArray* _sortDescriptors;
	unsigned long long _limit;
	unsigned long long _offset;
	NSSet* _deviceIDs;
	long long _resultType;
	NSArray* _groupByProperties;
	/*^block*/id _resultsHandler;
	NSArray* _excludedMetadataKeys;

}

@property (assign) long long resultType;                        //@synthesize resultType=_resultType - In the implementation block
@property (retain) NSArray * groupByProperties;                 //@synthesize groupByProperties=_groupByProperties - In the implementation block
@property (copy) id resultsHandler;                             //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (assign) BOOL returnsDistinctResults;                 //@synthesize returnsDistinctResults=_returnsDistinctResults - In the implementation block
@property (retain) NSArray * excludedMetadataKeys;              //@synthesize excludedMetadataKeys=_excludedMetadataKeys - In the implementation block
@property (retain) NSPredicate * predicate;                     //@synthesize predicate=_predicate - In the implementation block
@property (retain) NSArray * eventStreams;                      //@synthesize eventStreams=_eventStreams - In the implementation block
@property (retain) NSArray * sortDescriptors;                   //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
@property (assign) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign) BOOL readMetadata;                           //@synthesize readMetadata=_readMetadata - In the implementation block
@property (assign) BOOL deduplicateValues;                      //@synthesize deduplicateValues=_deduplicateValues - In the implementation block
@property (retain) NSSet * deviceIDs;                           //@synthesize deviceIDs=_deviceIDs - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 ;
+(id)expressionForEventDuration;
+(id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)predicateForEventsOfMinimumDuration:(double)arg1 ;
+(id)predicateForEventsOfMaximumDuration:(double)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setReadMetadata:(BOOL)arg1 ;
-(void)setResultType:(long long)arg1 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(void)setExcludedMetadataKeys:(NSArray *)arg1 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)limit;
-(id)constructFetchRequestPredicate;
-(NSPredicate *)predicate;
-(id)init;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)resultType;
-(id)initWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(NSArray *)sortDescriptors;
-(BOOL)returnsDistinctResults;
-(BOOL)deduplicateValues;
-(unsigned long long)offset;
-(void)setDeduplicateValues:(BOOL)arg1 ;
-(id)description;
-(NSArray *)eventStreams;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setEventStreams:(NSArray *)arg1 ;
-(NSArray *)groupByProperties;
-(id)resultsHandler;
-(BOOL)readMetadata;
-(void)setOffset:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setReturnsDistinctResults:(BOOL)arg1 ;
-(void)setResultsHandler:(id)arg1 ;
-(void)setDeviceIDs:(NSSet *)arg1 ;
-(void)setGroupByProperties:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)deviceIDs;
-(NSArray *)excludedMetadataKeys;
@end

