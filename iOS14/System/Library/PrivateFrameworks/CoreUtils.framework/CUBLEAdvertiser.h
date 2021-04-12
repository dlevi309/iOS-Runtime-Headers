/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, CBPeripheralManager, CURetrier, NSData, NSObject, NSString;

@interface CUBLEAdvertiser : NSObject <CBPeripheralManagerDelegate> {

	BOOL _activateCalled;
	NSDictionary* _advertiseParametersCurrent;
	BOOL _changesPending;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CBPeripheralManager* _peripheralManager;
	CURetrier* _retrier;
	BOOL _startAdvertisingCalled;
	LogCategory* _ucat;
	unsigned _advertiseFlags;
	NSData* _appleManufacturerData;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSData* _lgBTAddress;
	NSData* _lgDeviceID;
	NSString* _label;

}

@property (nonatomic,copy) NSData * appleManufacturerData;                            //@synthesize appleManufacturerData=_appleManufacturerData - In the implementation block
@property (assign,nonatomic) unsigned advertiseFlags;                                 //@synthesize advertiseFlags=_advertiseFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSData * lgBTAddress;                                      //@synthesize lgBTAddress=_lgBTAddress - In the implementation block
@property (nonatomic,copy) NSData * lgDeviceID;                                       //@synthesize lgDeviceID=_lgDeviceID - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)_invalidate;
-(id)init;
-(void)_ensureStarted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(unsigned)advertiseFlags;
-(void)setAdvertiseFlags:(unsigned)arg1 ;
-(NSData *)appleManufacturerData;
-(void)setAppleManufacturerData:(NSData *)arg1 ;
-(NSData *)lgDeviceID;
-(void)setLgBTAddress:(NSData *)arg1 ;
-(void)setLgDeviceID:(NSData *)arg1 ;
-(id)_advertiseParameters;
-(void)_advertiseParametersAddLGWake:(id)arg1 ;
-(void)_advertiseParametersAddOSR;
-(id)_advertiseParametersSummary:(id)arg1 ;
-(NSData *)lgBTAddress;
-(void)_invalidated;
-(void)invalidate;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
-(void)_ensureStopped;
@end

