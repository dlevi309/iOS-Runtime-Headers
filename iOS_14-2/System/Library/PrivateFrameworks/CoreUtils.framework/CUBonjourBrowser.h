/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableDictionary, NSObject, NSString, NSArray;

@interface CUBonjourBrowser : NSObject {

	BOOL _activateCalled;
	BOOL _activated;
	BonjourBrowserRef _bonjourBrowser;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _deviceMap;
	LogCategory* _ucat;
	BOOL _browseFlagsChanged;
	unsigned _changeFlags;
	unsigned _controlFlags;
	unsigned long long _browseFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _domain;
	NSString* _interfaceName;
	NSString* _label;
	NSString* _serviceType;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) unsigned long long browseFlags;                          //@synthesize browseFlags=_browseFlags - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned controlFlags;                                   //@synthesize controlFlags=_controlFlags - In the implementation block
@property (copy,readonly) NSArray * devices; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * domain;                                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                  //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(unsigned)controlFlags;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)_lostAllDevices;
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(unsigned)changeFlags;
-(NSArray *)devices;
-(void)_bonjourHandleRemoveDevice:(id)arg1 ;
-(void)_updateLocked;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setBrowseFlags:(unsigned long long)arg1 ;
-(NSString *)interfaceName;
-(void)setServiceType:(NSString *)arg1 ;
-(void)activate;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)update;
-(id)description;
-(void)_bonjourHandleEventType:(unsigned)arg1 info:(id)arg2 ;
-(unsigned long long)browseFlags;
-(void)_interrupted;
-(int)_bonjourStart;
-(void)_invalidated;
-(void)_update;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(void)setControlFlags:(unsigned)arg1 ;
-(id)invalidationHandler;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)label;
-(id)interruptionHandler;
-(void)_bonjourHandleAddOrUpdateDevice:(id)arg1 ;
-(void)dealloc;
@end

