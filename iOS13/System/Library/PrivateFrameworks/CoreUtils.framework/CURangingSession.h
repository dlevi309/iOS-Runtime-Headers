/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/PRSharingSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, PRContactWhitelist, PRSharingSession, NSObject, NSString;

@interface CURangingSession : NSObject <PRSharingSessionDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _peersChanged;
	NSArray* _peersRanging;
	PRContactWhitelist* _prResponder;
	int _prRangingInitiated;
	PRSharingSession* _prRangingSession;
	LogCategory* _ucat;
	unsigned _flags;
	unsigned _statusFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _measurementHandler;
	/*^block*/id _measurementHandlerEx;
	NSArray* _peers;
	/*^block*/id _statusChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id measurementHandler;                                     //@synthesize measurementHandler=_measurementHandler - In the implementation block
@property (nonatomic,copy) id measurementHandlerEx;                                   //@synthesize measurementHandlerEx=_measurementHandlerEx - In the implementation block
@property (nonatomic,copy) NSArray * peers;                                           //@synthesize peers=_peers - In the implementation block
@property (nonatomic,copy) id statusChangedHandler;                                   //@synthesize statusChangedHandler=_statusChangedHandler - In the implementation block
@property (nonatomic,readonly) unsigned statusFlags;                                  //@synthesize statusFlags=_statusFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(unsigned)flags;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)statusFlags;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)activate;
-(void)addSample:(id)arg1 ;
-(NSArray *)peers;
-(void)session:(id)arg1 didChangeProximitySensorState:(unsigned long long)arg2 ;
-(void)session:(id)arg1 didEstimateScores:(id)arg2 ;
-(void)session:(id)arg1 didFailwithError:(id)arg2 ;
-(void)setPeers:(NSArray *)arg1 ;
-(void)_updateInitiator;
-(void)_updateResponder;
-(void)_updatePeers;
-(id)measurementHandler;
-(void)setMeasurementHandler:(id)arg1 ;
-(id)measurementHandlerEx;
-(void)setMeasurementHandlerEx:(id)arg1 ;
-(id)statusChangedHandler;
-(void)setStatusChangedHandler:(id)arg1 ;
@end

