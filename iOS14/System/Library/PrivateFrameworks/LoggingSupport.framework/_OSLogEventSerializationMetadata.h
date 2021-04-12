/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class NSMutableDictionary, NSPredicate, NSDate;

@interface _OSLogEventSerializationMetadata : NSObject {

	NSMutableDictionary* _indexToStringMapping;
	NSMutableDictionary* _stringToIndexMapping;
	unsigned long long _flags;
	NSPredicate* _filterPredicate;
	unsigned long long _maxLogEventBatchSize;
	unsigned long long _serializedEventCount;
	NSDate* _firstDate;
	NSDate* _lastDate;

}

@property (nonatomic,readonly) NSMutableDictionary * stringToIndexMapping;              //@synthesize stringToIndexMapping=_stringToIndexMapping - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * indexToStringMapping;              //@synthesize indexToStringMapping=_indexToStringMapping - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSPredicate * filterPredicate;                             //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long maxLogEventBatchSize;                   //@synthesize maxLogEventBatchSize=_maxLogEventBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long serializedEventCount;                   //@synthesize serializedEventCount=_serializedEventCount - In the implementation block
@property (nonatomic,retain) NSDate * firstDate;                                        //@synthesize firstDate=_firstDate - In the implementation block
@property (nonatomic,retain) NSDate * lastDate;                                         //@synthesize lastDate=_lastDate - In the implementation block
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)filterPredicate;
-(id)dataRepresentation;
-(id)init;
-(unsigned long long)flags;
-(id)indexForString:(id)arg1 ;
-(id)stringForIndex:(id)arg1 ;
-(NSMutableDictionary *)indexToStringMapping;
-(NSMutableDictionary *)stringToIndexMapping;
-(unsigned long long)maxLogEventBatchSize;
-(void)setMaxLogEventBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)serializedEventCount;
-(void)setSerializedEventCount:(unsigned long long)arg1 ;
-(void)setFirstDate:(NSDate *)arg1 ;
-(void)setLastDate:(NSDate *)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSDate *)firstDate;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSDate *)lastDate;
@end

