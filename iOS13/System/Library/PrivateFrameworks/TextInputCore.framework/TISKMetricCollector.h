/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TITypingSessionAggregatedEventObserver.h>

@protocol OS_dispatch_queue, TISensorWriterWrapper;
@class TIInputMode, NSString, NSMutableDictionary, NSMutableArray, NSArray, TIKeyboardInput, TIUserModelDataStore, NSObject, TITypingSession;

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver> {

	TIInputMode* _inputMode;
	NSString* _wordSeparator;
	NSMutableDictionary* _touchToEventMap;
	NSMutableArray* _events;
	NSArray* _sortedEvents;
	NSMutableArray* _touches;
	NSMutableArray* _layoutIDs;
	NSMutableArray* _taps;
	long long _wordPosition;
	TIKeyboardInput* _lastInput;
	long long _currentWordPosition;
	long long _eventOrder;
	NSMutableArray* _currentSessionSamplesArray;
	unsigned long long _aggregatedWordThreshold;
	BOOL _isLoaded;
	TIUserModelDataStore* _userModelDataStore;
	BOOL _accentedLanguage;
	NSMutableArray* _accentedLayoutsMap;
	NSString* _idenitifer;
	NSObject*<OS_dispatch_queue> _workQueue;
	int _tccNotifyToken;
	BOOL _isTCCAuthorized;
	BOOL _skipTCCAuthorization;
	unsigned long long _wordAccumulationThreshold;
	id<TISensorWriterWrapper> _dataWriter;
	NSMutableArray* _savedSessionSamplesArray;
	TITypingSession* _typingSession;

}

@property (assign,nonatomic) unsigned long long wordAccumulationThreshold;              //@synthesize wordAccumulationThreshold=_wordAccumulationThreshold - In the implementation block
@property (nonatomic,retain) id<TISensorWriterWrapper> dataWriter;                      //@synthesize dataWriter=_dataWriter - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedSessionSamplesArray;                 //@synthesize savedSessionSamplesArray=_savedSessionSamplesArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSessionSamplesArray;               //@synthesize currentSessionSamplesArray=_currentSessionSamplesArray - In the implementation block
@property (nonatomic,retain) TITypingSession * typingSession;                           //@synthesize typingSession=_typingSession - In the implementation block
@property (assign,nonatomic) BOOL isLoaded;                                             //@synthesize isLoaded=_isLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeMetricCollector:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 isTesting:(BOOL)arg4 ;
-(void)dealloc;
-(BOOL)isLoaded;
-(void)_clear;
-(void)setIsLoaded:(BOOL)arg1 ;
-(id)init:(id)arg1 ;
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2 ;
-(id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 ;
-(id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 accentedLanguage:(BOOL)arg4 ;
-(id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 accentedLanguage:(BOOL)arg4 skipTCCAuthorization:(BOOL)arg5 ;
-(void)testTCCAuthorization;
-(void)_setupTCCAuthNotification;
-(id)consumeTypingSession:(id)arg1 ;
-(void)_resetConsumeState;
-(id)_findSessionWithLayoutOfSameDimentions:(id)arg1 layout:(id)arg2 ;
-(void)setupSessionSamplesForLayouts;
-(id)_consumeTypingSession:(id)arg1 ;
-(void)_consumeUserAction:(id)arg1 ;
-(void)_consumeWordEntry:(id)arg1 ;
-(void)_processEvents;
-(void)_haltSessionTypingTimer:(id)arg1 event:(id)arg2 ;
-(void)_metricWalk;
-(void)_mapTapsToEvents;
-(id)_mapIDToLayout:(unsigned long long)arg1 ;
-(void)_coalesceTaps;
-(id)eventsDescription;
-(id)eventsDescription:(BOOL)arg1 ;
-(double)totalTimeSpan;
-(double)totalTimeSpanFromLastTap;
-(void)_mergeStats:(id)arg1 ;
-(void)_reportRipeBuckets;
-(void)handleTypingSession:(id)arg1 ;
-(void)_loadStatsFromDataStore;
-(id)_retrieveSavedSessionSampleArray;
-(void)_persistSavedSessionSampleArray;
-(unsigned long long)wordAccumulationThreshold;
-(void)setWordAccumulationThreshold:(unsigned long long)arg1 ;
-(id<TISensorWriterWrapper>)dataWriter;
-(void)setDataWriter:(id<TISensorWriterWrapper>)arg1 ;
-(NSMutableArray *)savedSessionSamplesArray;
-(void)setSavedSessionSamplesArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentSessionSamplesArray;
-(void)setCurrentSessionSamplesArray:(NSMutableArray *)arg1 ;
-(TITypingSession *)typingSession;
-(void)setTypingSession:(TITypingSession *)arg1 ;
-(void)placeTaskOnWorkQueue:(/*^block*/id)arg1 ;
@end

