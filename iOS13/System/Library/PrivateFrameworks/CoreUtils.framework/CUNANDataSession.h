/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/WiFiAwareDataSessionDelegate.h>

@protocol OS_dispatch_queue;
@class WiFiAwareDataSession, NSObject, NSString, CUNANEndpoint, WiFiAwarePublisher, WiFiAwarePublisherDataSessionHandle;

@interface CUNANDataSession : NSObject <WiFiAwareDataSessionDelegate> {

	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	WiFiAwareDataSession* _wfaDataSessionClient;
	unsigned _localInterfaceIndex;
	unsigned _trafficFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _identifier;
	NSString* _label;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	CUNANEndpoint* _peerEndpoint;
	WiFiAwarePublisher* _publisher;
	WiFiAwarePublisherDataSessionHandle* _wfaDataSessionServer;
	SCD_Union_CU21 _peerAddress;

}

@property (nonatomic,copy) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned localInterfaceIndex;                                            //@synthesize localInterfaceIndex=_localInterfaceIndex - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* peerAddress;                                   //@synthesize peerAddress=_peerAddress - In the implementation block
@property (nonatomic,retain) WiFiAwarePublisher * publisher;                                          //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) WiFiAwarePublisherDataSessionHandle * wfaDataSessionServer;              //@synthesize wfaDataSessionServer=_wfaDataSessionServer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * label;                                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) CUNANEndpoint * peerEndpoint;                                            //@synthesize peerEndpoint=_peerEndpoint - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                                                   //@synthesize trafficFlags=_trafficFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
-(NSString *)identifier;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)setPeerEndpoint:(CUNANEndpoint *)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(CUNANEndpoint *)peerEndpoint;
-(/*function pointer*/void*)peerAddress;
-(unsigned)localInterfaceIndex;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)dataSessionRequestStarted:(id)arg1 ;
-(void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2 ;
-(void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3 ;
-(void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2 ;
-(void)_terminateServerDataSession;
-(BOOL)_dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3 error:(id*)arg4 ;
-(void)setLocalInterfaceIndex:(unsigned)arg1 ;
-(void)setPeerAddress:(/*function pointer*/void*)arg1 ;
-(unsigned)trafficFlags;
-(WiFiAwarePublisher *)publisher;
-(void)setPublisher:(WiFiAwarePublisher *)arg1 ;
-(WiFiAwarePublisherDataSessionHandle *)wfaDataSessionServer;
-(void)setWfaDataSessionServer:(WiFiAwarePublisherDataSessionHandle *)arg1 ;
@end

