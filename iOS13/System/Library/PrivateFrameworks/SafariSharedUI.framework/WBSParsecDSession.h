/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/PARSessionDelegate.h>
#import <libobjc.A.dylib/WBSParsecSearchSession.h>

@protocol OS_dispatch_queue, WBSParsecSearchSessionDelegate;
@class WBSCompletionQuery, WBSParsecABGroupManager, NSObject, WBSParsecDFeedbackDispatcher, GEOUserSessionEntity, PARSession, NSString;

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession> {

	NSObject*<OS_dispatch_queue> _requestProcessingQueue;
	WBSParsecDFeedbackDispatcher* _feedbackDispatcher;
	GEOUserSessionEntity* _threadUnsafeGEOUserSessionEntity;
	os_unfair_lock_s _geoUserSessionLock;
	BOOL _skipAutoFillDataUpdates;
	double _threadUnsafeUIScale;
	WBSCompletionQuery* _threadUnsafeCurrentQuery;
	WBSParsecABGroupManager* _abGroupManager;
	id<WBSParsecSearchSessionDelegate> _threadUnsafeDelegate;
	PARSession* _threadUnsafeParsecdSession;
	unsigned long long _currentQueryID;

}

@property (assign) unsigned long long currentQueryID;                                           //@synthesize currentQueryID=_currentQueryID - In the implementation block
@property (nonatomic,readonly) BOOL skipAutoFillDataUpdates;                                    //@synthesize skipAutoFillDataUpdates=_skipAutoFillDataUpdates - In the implementation block
@property (nonatomic,retain) PARSession * parsecdSession;                                       //@synthesize threadUnsafeParsecdSession=_threadUnsafeParsecdSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate;                //@synthesize threadUnsafeDelegate=_threadUnsafeDelegate - In the implementation block
@property (nonatomic,retain) WBSCompletionQuery * currentQuery;                                 //@synthesize threadUnsafeCurrentQuery=_threadUnsafeCurrentQuery - In the implementation block
@property (assign,setter=setUIScale:,nonatomic) double uiScale;                                 //@synthesize threadUnsafeUIScale=_threadUnsafeUIScale - In the implementation block
@property (nonatomic,readonly) id<WBSParsecFeedbackDispatcher> feedbackDispatcher; 
@property (nonatomic,readonly) WBSParsecABGroupManager * abGroupManager;                        //@synthesize abGroupManager=_abGroupManager - In the implementation block
@property (getter=isABTestingEnabled,nonatomic,readonly) BOOL abTestingEnabled; 
+(void)_updateAutoFillTLDsIfNeededForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)sharedDomainPolicyProvider;
+(id)sharedCorrectionsProcessor;
+(id)sharedPARSession;
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(void)setDelegate:(id<WBSParsecSearchSessionDelegate>)arg1 ;
-(WBSCompletionQuery *)currentQuery;
-(void)setCurrentQuery:(WBSCompletionQuery *)arg1 ;
-(double)uiScale;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(unsigned long long)currentQueryID;
-(void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg1 ;
-(WBSParsecABGroupManager *)abGroupManager;
-(BOOL)_isABTestingEnabledOnProcessingQueue;
-(void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4 ;
-(void)setCurrentQueryID:(unsigned long long)arg1 ;
-(PARSession *)parsecdSession;
-(void)setUIScale:(double)arg1 ;
-(id<WBSParsecFeedbackDispatcher>)feedbackDispatcher;
-(BOOL)isABTestingEnabled;
-(id)initWithParsecdSession:(id)arg1 skipAutoFillDataUpdates:(BOOL)arg2 ;
-(void)setParsecdSession:(PARSession *)arg1 ;
-(BOOL)skipAutoFillDataUpdates;
@end

