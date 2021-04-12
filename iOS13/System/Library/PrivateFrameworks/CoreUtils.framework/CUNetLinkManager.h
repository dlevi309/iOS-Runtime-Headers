/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableSet, NSObject, NSString;

@interface CUNetLinkManager : NSObject {

	NSMutableSet* _endpoints;
	unsigned _endpointChanges;
	BOOL _hasIPv4Endpoint;
	BOOL _hasIPv6Endpoint;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _pollTimer;
	int _probeSocketV4;
	NSObject*<OS_dispatch_source> _probeSourceV4;
	int _probeSocketV6;
	NSObject*<OS_dispatch_source> _probeSourceV6;
	unsigned _reReachableCount;
	unsigned _rxCount;
	unsigned _txCount;
	unsigned _txErrors;
	LogCategory* _ucat;
	unsigned _unreachableCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidated;
-(void)activate;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)addEndpoint:(id)arg1 ;
-(void)removeEndpoint:(id)arg1 ;
-(void)_updateEndpoints;
-(void)_updateARP;
-(void)_updateNDP;
-(void)_updateEndpoint:(id)arg1 state:(int)arg2 ;
-(void)_monitorEnsureStarted;
-(void)_monitorEnsureStopped;
-(void)_monitorSetupSocket:(int)arg1 ;
-(void)_monitorReadPacket:(int)arg1 ;
-(void)_monitorSendPacketToEndpoint:(id)arg1 ;
@end

