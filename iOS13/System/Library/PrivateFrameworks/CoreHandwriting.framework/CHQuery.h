/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <libobjc.A.dylib/CHRecognitionSessionObserver.h>

@protocol OS_dispatch_queue, CHQueryDelegate, CHStrokeProviderVersion;
@class NSObject, CHRecognitionSessionResult, CHRecognitionSession, NSString;

@interface CHQuery : NSObject <CHRecognitionSessionObserver> {

	NSObject*<OS_dispatch_queue> _processingQueue;
	CHRecognitionSessionResult* _currentProcessingSessionResult;
	double _lastProcessedTime;
	BOOL __queryActive;
	id<CHQueryDelegate> _delegate;
	CHRecognitionSession* _recognitionSession;
	id<CHStrokeProviderVersion> _lastProcessedStrokeProviderVersion;
	double _preferredUpdatesInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> processingQueue; 
@property (nonatomic,retain,readonly) NSString * debugName; 
@property (assign,nonatomic) BOOL _queryActive;                                                  //@synthesize _queryActive=__queryActive - In the implementation block
@property (copy) id<CHStrokeProviderVersion> lastProcessedStrokeProviderVersion;                 //@synthesize lastProcessedStrokeProviderVersion=_lastProcessedStrokeProviderVersion - In the implementation block
@property (assign,nonatomic) id<CHQueryDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) CHRecognitionSession * recognitionSession;                 //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (assign,nonatomic) double preferredUpdatesInterval;                                    //@synthesize preferredUpdatesInterval=_preferredUpdatesInterval - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CHQueryDelegate>)delegate;
-(void)setDelegate:(id<CHQueryDelegate>)arg1 ;
-(void)pause;
-(void)start;
-(NSString *)debugName;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(CHRecognitionSession *)recognitionSession;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)waitForPendingUpdates;
-(void)q_updateQueryResult;
-(id)q_sessionResult;
-(void)q_queryResultDidChange;
-(void)setPreferredUpdatesInterval:(double)arg1 ;
-(void)q_setNeedsQueryResultUpdating;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg1 ;
-(double)preferredRecognitionResultUpdatesInterval;
-(BOOL)_queryActive;
-(void)set_queryActive:(BOOL)arg1 ;
-(void)_updateForRecognitionSessionResultChangeIfNeeded;
-(double)preferredUpdatesInterval;
-(id<CHStrokeProviderVersion>)lastProcessedStrokeProviderVersion;
-(void)setLastProcessedStrokeProviderVersion:(id<CHStrokeProviderVersion>)arg1 ;
@end

