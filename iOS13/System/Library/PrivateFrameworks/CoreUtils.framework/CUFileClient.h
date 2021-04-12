/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class RPCompanionLinkClient, NSMutableArray, CUFileQuery, NSNumber, NSObject, NSString;

@interface CUFileClient : NSObject <CUActivatable> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	BOOL _clinkActivated;
	RPCompanionLinkClient* _clinkClient;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned long long _lastRequestTicks;
	NSMutableArray* _queryArray;
	CUFileQuery* _currentQuery;
	NSNumber* _sessionID;
	NSObject*<OS_dispatch_source> _sessionTimer;
	int _state;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _destinationID;
	NSString* _label;
	NSString* _serviceType;

}

@property (nonatomic,copy) NSString * destinationID;                                  //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_run;
-(void)setServiceType:(NSString *)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)performQuery:(id)arg1 ;
-(void)_completeQuery:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_reportError:(id)arg1 where:(const char*)arg2 ;
-(void)_sendKeepAlive:(double)arg1 ;
-(void)_sendSessionStop;
-(void)_sessionTimerFired;
-(void)_runCLinkActivate;
-(void)_runSessionStartRequest;
-(void)_runSessionStartResponse:(id)arg1 error:(id)arg2 ;
-(void)_runPrepare;
-(void)_runQueries;
-(void)_runSendQuery:(id)arg1 ;
-(void)_runQueryResponse:(id)arg1 query:(id)arg2 error:(id)arg3 ;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
@end

