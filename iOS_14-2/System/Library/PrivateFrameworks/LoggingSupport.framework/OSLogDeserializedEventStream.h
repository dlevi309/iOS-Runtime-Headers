/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/OSLogEventStreamBase.h>

@protocol OSLogEventDeserializerDataSourceDelegate;
@class _OSLogEventSerializationMetadata, NSArray, NSEnumerator, NSDate;

@interface OSLogDeserializedEventStream : OSLogEventStreamBase {

	BOOL _hasActivated;
	_OSLogEventSerializationMetadata* _metadata;
	id<OSLogEventDeserializerDataSourceDelegate> _dataSourceDelegate;
	NSArray* _curEventArray;
	NSEnumerator* _eventDictionaryEnumerator;

}

@property (assign,nonatomic) BOOL hasActivated;                                                              //@synthesize hasActivated=_hasActivated - In the implementation block
@property (nonatomic,readonly) _OSLogEventSerializationMetadata * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) id<OSLogEventDeserializerDataSourceDelegate> dataSourceDelegate;              //@synthesize dataSourceDelegate=_dataSourceDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * curEventArray;                                                      //@synthesize curEventArray=_curEventArray - In the implementation block
@property (nonatomic,readonly) NSEnumerator * eventDictionaryEnumerator;                                     //@synthesize eventDictionaryEnumerator=_eventDictionaryEnumerator - In the implementation block
@property (nonatomic,readonly) NSDate * firstDate; 
@property (nonatomic,readonly) NSDate * lastDate; 
-(id)initWithDataSourceDelegate:(id)arg1 ;
-(id)_nextEventDictionary;
-(void)_iterateThroughEventsWithProxy:(id)arg1 filter:(id)arg2 startingDate:(id)arg3 ;
-(id)_eventArrayFromData:(id)arg1 ;
-(void)_updateEventArray;
-(BOOL)hasActivated;
-(void)setHasActivated:(BOOL)arg1 ;
-(id<OSLogEventDeserializerDataSourceDelegate>)dataSourceDelegate;
-(NSArray *)curEventArray;
-(NSEnumerator *)eventDictionaryEnumerator;
-(void)activate;
-(NSDate *)firstDate;
-(void)activateStreamFromDate:(id)arg1 ;
-(_OSLogEventSerializationMetadata *)metadata;
-(NSDate *)lastDate;
@end

