/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <libobjc.A.dylib/TFDataAggregatorDelegate.h>

@protocol TFFeedbackSessionDelegate, TFFeedbackSubmissionService;
@class NSString, TFFeedbackDataContainer, TFDataAggregator, TFFeedbackFormViewController;

@interface TFFeedbackSession : NSObject <TFDataAggregatorDelegate> {

	BOOL _forcePrefilledEmailViewVariant;
	BOOL _didSnapshot;
	BOOL _waitingOnAggregatorForSubmission;
	unsigned long long _context;
	NSString* _bundleIdentifier;
	id<TFFeedbackSessionDelegate> _delegate;
	NSString* _logKey;
	unsigned long long _currentPhase;
	TFFeedbackDataContainer* _dataContainer;
	TFDataAggregator* _aggregator;
	id<TFFeedbackSubmissionService> _submissionService;
	TFFeedbackFormViewController* _activeFormViewController;

}

@property (nonatomic,copy,readonly) NSString * logKey;                                                                     //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic) BOOL didSnapshot;                                                                             //@synthesize didSnapshot=_didSnapshot - In the implementation block
@property (assign,getter=isWaitingOnAggregatorForSubmission,nonatomic) BOOL waitingOnAggregatorForSubmission;              //@synthesize waitingOnAggregatorForSubmission=_waitingOnAggregatorForSubmission - In the implementation block
@property (assign,nonatomic) unsigned long long currentPhase;                                                              //@synthesize currentPhase=_currentPhase - In the implementation block
@property (nonatomic,readonly) TFFeedbackDataContainer * dataContainer;                                                    //@synthesize dataContainer=_dataContainer - In the implementation block
@property (nonatomic,readonly) TFDataAggregator * aggregator;                                                              //@synthesize aggregator=_aggregator - In the implementation block
@property (nonatomic,readonly) id<TFFeedbackSubmissionService> submissionService;                                          //@synthesize submissionService=_submissionService - In the implementation block
@property (assign,nonatomic,__weak) TFFeedbackFormViewController * activeFormViewController;                               //@synthesize activeFormViewController=_activeFormViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                                                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<TFFeedbackSessionDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL forcePrefilledEmailViewVariant;                                                          //@synthesize forcePrefilledEmailViewVariant=_forcePrefilledEmailViewVariant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TFDataAggregator *)aggregator;
-(id<TFFeedbackSessionDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(unsigned long long)context;
-(void)setCurrentPhase:(unsigned long long)arg1 ;
-(void)setDelegate:(id<TFFeedbackSessionDelegate>)arg1 ;
-(unsigned long long)currentPhase;
-(BOOL)didSnapshot;
-(NSString *)logKey;
-(void)dataAggregator:(id)arg1 didCompleteTasks:(id)arg2 ;
-(TFFeedbackDataContainer *)dataContainer;
-(void)submitFeedbackForActiveFormViewController;
-(void)setDidSnapshot:(BOOL)arg1 ;
-(void)initiateFeedbackSnapshot;
-(id)_generateFormForCurrentState;
-(TFFeedbackFormViewController *)activeFormViewController;
-(void)setActiveFormViewController:(TFFeedbackFormViewController *)arg1 ;
-(void)_beginFeedbackSubmisionForViewController:(id)arg1 ;
-(void)_associateEmail:(id)arg1 ;
-(void)setWaitingOnAggregatorForSubmission:(BOOL)arg1 ;
-(id<TFFeedbackSubmissionService>)submissionService;
-(void)_abortFeedbackSubmissionForViewController:(id)arg1 withError:(id)arg2 ;
-(void)_finishFeedbackSubmissionForViewController:(id)arg1 ;
-(id)_displayableErrorMessageFromService:(id)arg1 submissionError:(id)arg2 ;
-(BOOL)isWaitingOnAggregatorForSubmission;
-(id)initForContext:(unsigned long long)arg1 betaApplicationIdentifier:(id)arg2 ;
-(void)associateIncidentId:(id)arg1 ;
-(void)associateScreenshotImages:(id)arg1 ;
-(id)createFeedbackViewControllerForCurrentState;
-(id)initWithBetaApplicationIdentifier:(id)arg1 ;
-(BOOL)forcePrefilledEmailViewVariant;
-(void)setForcePrefilledEmailViewVariant:(BOOL)arg1 ;
@end

