/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, CoreTelephonyClient, NSObject, NSArray, NSString;

@interface SUNetworkMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientCarrierBundleDelegate> {

	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	BOOL _roaming;
	CoreTelephonyClient* _ctClient;
	NSObject*<OS_dispatch_queue> _ctQueue;
	NSArray* _subscriptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setHoldsWiFiAssertion:(BOOL)arg1 ;
+(BOOL)holdsWiFiAssertion;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2 ;
-(void)carrierBundleChange:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(void)setCellularRoaming:(BOOL)arg1 ;
-(void)_initNetworkObservation;
-(int)currentNetworkType;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
-(BOOL)isCellularRoaming;
-(BOOL)isCellularDataRoamingEnabled;
-(void)_resetCtClient;
-(int)_queue_currentNetworkType;
-(BOOL)_isCurrentlyRoaming;
-(void)setSubscriptions;
-(int)_networkTypeFromCurrentCellularData;
-(int)_networkTypeFromCurrentCellularDataWithError:(id*)arg1 ;
-(void)_operatorBundleChanged;
-(void)_carrierBundleChanged;
-(BOOL)isNetworkTypeCellular:(int)arg1 ;
@end

