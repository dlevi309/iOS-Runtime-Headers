/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)predicateForEventsOfMinimumDuration:(double)arg1 ;
+(id)expressionForEventDuration;
+(id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)predicateForEventsOfMaximumDuration:(double)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(long long)resultType;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setResultType:(long long)arg1 ;
-(void)setEventStreams:(NSArray *)arg1 ;
-(void)setReadMetadata:(BOOL)arg1 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(void)setDeduplicateValues:(BOOL)arg1 ;
-(id)constructFetchRequestPredicate;
-(unsigned long long)offset;
-(NSArray *)eventStreams;
-(void)setGroupByProperties:(NSArray *)arg1 ;
-(BOOL)readMetadata;
-(NSArray *)excludedMetadataKeys;
-(BOOL)deduplicateValues;
-(void)setExcludedMetadataKeys:(NSArray *)arg1 ;
-(id)initWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(NSArray *)groupByProperties;
-(void)setDeviceIDs:(NSSet *)arg1 ;
-(NSSet *)deviceIDs;
-(id)resultsHandler;
-(void)setResultsHandler:(id)arg1 ;
@end

