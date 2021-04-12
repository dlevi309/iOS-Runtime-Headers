/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(void)_updateEndpoints;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_monitorEnsureStopped;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_monitorSetupSocket:(int)arg1 ;
-(void)activate;
-(void)removeEndpoint:(id)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_monitorReadPacket:(int)arg1 ;
-(id)description;
-(void)_updateEndpoint:(id)arg1 state:(int)arg2 ;
-(void)_invalidated;
-(void)_update;
-(void)invalidate;
-(void)_updateARP;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_monitorEnsureStarted;
-(void)addEndpoint:(id)arg1 ;
-(void)_monitorSendPacketToEndpoint:(id)arg1 ;
-(id)invalidationHandler;
-(void)_updateNDP;
-(NSString *)label;
-(void)dealloc;
@end

