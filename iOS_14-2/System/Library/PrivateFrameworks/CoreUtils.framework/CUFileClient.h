/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_run;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_completeQuery:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_reportError:(id)arg1 where:(const char*)arg2 ;
-(void)_sendKeepAlive:(double)arg1 ;
-(void)_sendSessionStop;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
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
-(void)setServiceType:(NSString *)arg1 ;
-(void)performQuery:(id)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
@end

