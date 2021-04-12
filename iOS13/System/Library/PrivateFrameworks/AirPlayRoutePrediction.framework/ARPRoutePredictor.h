/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@protocol OS_dispatch_queue, _DKKnowledgeQuerying;
@class NSSet, NSObject, NSString, _DKEvent, NSArray;

@interface ARPRoutePredictor : NSObject {

	int _token;
	NSSet* _knownOutputDeviceIDs;
	/*^block*/id _longFormVideoFilter;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _file;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_DKEvent* _latestMicroLocationEvent;
	NSArray* _sessions;
	double _routingSessionTimeout;
	double _microLocationSimilarityThreshold;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) int token;                                            //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSString * file;                                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) _DKEvent * latestMicroLocationEvent;                    //@synthesize latestMicroLocationEvent=_latestMicroLocationEvent - In the implementation block
@property (retain) NSArray * sessions;                                               //@synthesize sessions=_sessions - In the implementation block
@property (assign) double routingSessionTimeout;                                     //@synthesize routingSessionTimeout=_routingSessionTimeout - In the implementation block
@property (retain) NSSet * knownOutputDeviceIDs;                                     //@synthesize knownOutputDeviceIDs=_knownOutputDeviceIDs - In the implementation block
@property (nonatomic,readonly) double microLocationSimilarityThreshold;              //@synthesize microLocationSimilarityThreshold=_microLocationSimilarityThreshold - In the implementation block
@property (nonatomic,copy) id longFormVideoFilter;                                   //@synthesize longFormVideoFilter=_longFormVideoFilter - In the implementation block
+(id)routePredictor;
+(double)defaultMicroLocationSimilarityThreshold;
+(id)defaultFile;
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)token;
-(NSString *)file;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(NSArray *)sessions;
-(double)microLocationSimilarityThreshold;
-(id)predictionsWithCurrentContext:(id*)arg1 ;
-(void)setSessions:(NSArray *)arg1 ;
-(double)routingSessionTimeout;
-(id)initWithmicroLocationSimilarityThreshold:(double)arg1 file:(id)arg2 knowledgeStore:(id)arg3 ;
-(void)_reloadPersistedSessions;
-(void)_reloadLatestMicroLocationEvent;
-(void)setLatestMicroLocationEvent:(_DKEvent *)arg1 ;
-(void)setRoutingSessionTimeout:(double)arg1 ;
-(NSSet *)knownOutputDeviceIDs;
-(void)setKnownOutputDeviceIDs:(NSSet *)arg1 ;
-(_DKEvent *)latestMicroLocationEvent;
-(id)predictionsForContext:(id)arg1 ;
-(id)predictionsForCurrentContext;
-(id)longFormVideoFilter;
-(void)setLongFormVideoFilter:(id)arg1 ;
@end

