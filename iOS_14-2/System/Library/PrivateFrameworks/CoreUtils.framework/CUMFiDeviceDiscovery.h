/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class EAAccessoryManager, NSObject, NSString;

@interface CUMFiDeviceDiscovery : NSObject {

	EAAccessoryManager* _eaManager;
	LogCategory* _ucat;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)_invalidate;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_eaAccessoryDidConnect:(id)arg1 ;
-(void)_eaAccessoryDidDisconnect:(id)arg1 ;
-(void)_activate;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(id)interruptionHandler;
-(void)dealloc;
@end

