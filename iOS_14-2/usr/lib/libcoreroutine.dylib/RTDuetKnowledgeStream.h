/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class _DKEventStream, RTDuetKnowledgeStore;

@interface RTDuetKnowledgeStream : NSObject {

	long long _streamType;
	_DKEventStream* _eventStream;
	RTDuetKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,retain) _DKEventStream * eventStream;                       //@synthesize eventStream=_eventStream - In the implementation block
@property (nonatomic,retain) RTDuetKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) long long streamType;                             //@synthesize streamType=_streamType - In the implementation block
+(id)duetKnowledgeStreamTypeToDuetEventStream:(long long)arg1 ;
+(id)streamTypeToString:(long long)arg1 ;
-(_DKEventStream *)eventStream;
-(id)init;
-(long long)streamType;
-(void)setKnowledgeStore:(RTDuetKnowledgeStore *)arg1 ;
-(RTDuetKnowledgeStore *)knowledgeStore;
-(void)setEventStream:(_DKEventStream *)arg1 ;
-(void)purge;
-(void)dealloc;
-(id)initWithDuetKnowledgeStore:(id)arg1 streamType:(long long)arg2 ;
-(void)enumerateEventsWithinDateInterval:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithStreamType:(long long)arg1 knowledgeStore:(id)arg2 ;
-(id)_convertDuetEvent:(id)arg1 ;
@end

