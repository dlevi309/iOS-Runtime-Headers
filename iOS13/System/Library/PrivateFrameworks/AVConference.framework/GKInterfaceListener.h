/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface GKInterfaceListener : NSObject {

	SCDynamicStoreRef _dynamicStore;
	opaque_pthread_mutex_t _notificationMutex;
	id _interfaceListenerDelegate;
	BOOL _isWifiUp;
	BOOL _isCellUp;
	int _notifyToken;
	BOOL _monitoringAvailable;

}

@property (assign) BOOL _isWifiUp;                                                       //@synthesize isWifiUp=_isWifiUp - In the implementation block
@property (assign) BOOL _isCellUp;                                                       //@synthesize isCellUp=_isCellUp - In the implementation block
@property (assign) id<InterfaceListenerDelegate> interfaceListenerDelegate; 
-(id)init;
-(void)dealloc;
-(void)set_isCellUp:(BOOL)arg1 ;
-(void)set_isWifiUp:(BOOL)arg1 ;
-(id<InterfaceListenerDelegate>)interfaceListenerDelegate;
-(BOOL)_isWifiUp;
-(BOOL)_isCellUp;
-(BOOL)stopChangeListener;
-(void)hasConnectionWithWifi:(BOOL*)arg1 cell:(BOOL*)arg2 ;
-(BOOL)startChangeListener;
-(BOOL)startRoutingChangeListener;
-(void)stopRoutingChangeListener;
-(void)setInterfaceListenerDelegate:(id<InterfaceListenerDelegate>)arg1 ;
@end

