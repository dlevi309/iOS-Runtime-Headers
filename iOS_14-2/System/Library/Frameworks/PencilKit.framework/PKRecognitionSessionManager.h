/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHRecognitionSessionDataSource.h>
#import <libobjc.A.dylib/CHRecognitionSessionObserver.h>
#import <libobjc.A.dylib/PKDataDetectorQueryDelegate.h>

@protocol OS_dispatch_queue, PKRecognitionSessionManagerDelegate;
@class NSObject, PKDrawing, CHRecognitionSession, NSDate, NSArray, PKRecognitionQueryController, NSHashTable, NSString;

@interface PKRecognitionSessionManager : NSObject <CHRecognitionSessionDataSource, CHRecognitionSessionObserver, PKDataDetectorQueryDelegate> {

	Aq _stateAtomic;
	NSObject*<OS_dispatch_queue> _recognitionSessionQueue;
	PKDrawing* _drawingForGetter;
	PKDrawing* q_drawing;
	CHRecognitionSession* q_session;
	NSDate* q_previousTime;
	NSArray* q_visibleOnscreenStrokes;
	BOOL q_wantsGrouping;
	BOOL q_wantsDataDetection;
	BOOL q_wantsTranscription;
	PKRecognitionQueryController* q_queryController;
	NSHashTable* q_listeners;
	id<PKRecognitionSessionManagerDelegate> _delegate;

}

@property (assign,nonatomic) long long state; 
@property (nonatomic,readonly) CHRecognitionSession * session; 
@property (nonatomic,copy) PKDrawing * drawing; 
@property (assign,nonatomic,__weak) id<PKRecognitionSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)enabledLocales;
-(void)addListener:(id)arg1 ;
-(id)listeners;
-(id)init;
-(id<PKRecognitionSessionManagerDelegate>)delegate;
-(CHRecognitionSession *)session;
-(void)_teardownSession;
-(void)setDelegate:(id<PKRecognitionSessionManagerDelegate>)arg1 ;
-(PKDrawing *)drawing;
-(void)removeListener:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)textInputDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(long long)contentTypeForIntersectedStrokes:(id)arg1 ;
-(void)setWantsDataDetection:(BOOL)arg1 ;
-(void)setDrawing:(id)arg1 withVisibleOnscreenStrokes:(id)arg2 ;
-(void)fetchIntersectedStrokesAtPoint:(CGPoint)arg1 selectionType:(long long)arg2 inputType:(long long)arg3 visibleOnscreenStrokes:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchIntersectedStrokesBetweenTopPoint:(CGPoint)arg1 bottomPoint:(CGPoint)arg2 liveScrollOffset:(CGPoint)arg3 isRTL:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)_firstStrokesInSelectedStrokes:(id)arg1 isRTL:(BOOL)arg2 ;
-(id)_lastStrokesInSelectedStrokes:(id)arg1 isRTL:(BOOL)arg2 ;
-(void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanupSessionIfNecessary;
-(void)dataDetectorQuery:(id)arg1 foundItems:(id)arg2 ;
-(void)setVisibleOnscreenStrokes:(id)arg1 ;
-(id)fetchTranscriptionForStrokes:(id)arg1 cancelBlock:(/*^block*/id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)strokeProviderSnapshot;
-(id)transcriptionQuery;
-(void)q_teardownSession;
-(void)_dispatchSyncToRecognitionThreadIfNecessary:(/*^block*/id)arg1 ;
-(void)q_createRecognitionSessionIfNecessary;
-(void)q_needRecognitionUpdateWithCancel:(BOOL)arg1 ;
-(void)q_flushQueries;
-(void)q_updateRecognitionStateWithFinishedResult:(BOOL)arg1 ;
-(long long)q_nextRecognitionStateForRecognitionUpdate:(BOOL)arg1 ;
-(void)q_setupDrawingQueriesAndClearVisibleQueries;
-(id)q_groupQuery;
-(id)groupQuery;
-(void)setWantsTranscription:(BOOL)arg1 ;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg1 ;
-(void)setWantsGrouping:(BOOL)arg1 ;
@end

