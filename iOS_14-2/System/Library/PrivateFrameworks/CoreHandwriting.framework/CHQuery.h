/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CHQueryDelegate>)delegate;
-(void)start;
-(void)pause;
-(void)setDelegate:(id<CHQueryDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(NSString *)debugName;
-(void)dealloc;
-(id)initWithRecognitionSession:(id)arg1 ;
-(CHRecognitionSession *)recognitionSession;
-(void)waitForPendingUpdates;
-(void)setPreferredUpdatesInterval:(double)arg1 ;
-(id<CHStrokeProviderVersion>)lastProcessedStrokeProviderVersion;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg1 ;
-(double)preferredRecognitionResultUpdatesInterval;
-(void)q_updateQueryResult;
-(id)q_sessionResult;
-(id)strokeIdentifiersForData:(id)arg1 withStrokeProvider:(id)arg2 ;
-(id)encodedStrokeIdentifiers:(id)arg1 withStrokeProvider:(id)arg2 ;
-(void)q_queryResultDidChange;
-(void)q_setNeedsQueryResultUpdating;
-(BOOL)_queryActive;
-(void)set_queryActive:(BOOL)arg1 ;
-(void)_updateForRecognitionSessionResultChangeIfNeeded;
-(double)preferredUpdatesInterval;
-(void)setLastProcessedStrokeProviderVersion:(id<CHStrokeProviderVersion>)arg1 ;
@end

