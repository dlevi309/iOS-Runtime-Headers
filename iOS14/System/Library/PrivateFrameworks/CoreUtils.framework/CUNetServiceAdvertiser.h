/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class CUBonjourAdvertiser, NSMutableDictionary, SFDeviceDiscovery, CUNANPublisher, NSSet, NSObject, NSString, NSDictionary;

@interface CUNetServiceAdvertiser : NSObject {

	BOOL _activated;
	CUBonjourAdvertiser* _awdlBonjourAdvertiser;
	NSMutableDictionary* _bleDevices;
	SFDeviceDiscovery* _bleDiscovery;
	unsigned long long _bleDiscoveryFlags;
	CUBonjourAdvertiser* _infraBonjourAdvertiser;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CUNANPublisher* _nanPublisher;
	LogCategory* _ucat;
	BOOL _updatePending;
	BOOL _blePeerFilterChanged;
	BOOL _portChanged;
	BOOL _serviceInfoChanged;
	BOOL _serviceTypeChanged;
	int _awdlControl;
	int _infraControl;
	int _nanControl;
	int _port;
	NSSet* _blePeerFilter;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSDictionary* _serviceInfo;
	NSString* _serviceType;

}

@property (assign,nonatomic) int awdlControl;                                         //@synthesize awdlControl=_awdlControl - In the implementation block
@property (nonatomic,copy) NSSet * blePeerFilter;                                     //@synthesize blePeerFilter=_blePeerFilter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) int infraControl;                                        //@synthesize infraControl=_infraControl - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int nanControl;                                          //@synthesize nanControl=_nanControl - In the implementation block
@property (assign,nonatomic) int port;                                                //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSDictionary * serviceInfo;                                //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
-(void)setPort:(int)arg1 ;
-(int)port;
-(NSDictionary *)serviceInfo;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(void)_updateLocked;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setServiceType:(NSString *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(void)_invalidated;
-(int)nanControl;
-(void)setAwdlControl:(int)arg1 ;
-(void)setBlePeerFilter:(NSSet *)arg1 ;
-(void)setInfraControl:(int)arg1 ;
-(void)setNanControl:(int)arg1 ;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(int)awdlControl;
-(void)_awdlBonjourAdvertiserEnsureStarted;
-(void)_awdlBonjourAdvertiserEnsureStopped;
-(void)_bleTriggerEnsureStarted;
-(void)_bleTriggerEnsureStopped;
-(int)infraControl;
-(void)_bleTriggerDeviceFound:(id)arg1 ;
-(void)_bleTriggerDeviceLost:(id)arg1 ;
-(void)_infraBonjourAdvertiserEnsureStarted;
-(void)_infraBonjourAdvertiserEnsureStopped;
-(NSSet *)blePeerFilter;
-(void)_nanAdvertiserEnsureStarted;
-(void)_nanAdvertiserEnsureStopped;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
@end

