/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CLLocationManager, NSTimer, NSObject, PKSecureElement, PKPaymentDeviceConfigurationData, NSMutableArray, NSString;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSTimer* _timer;
	NSObject*<OS_dispatch_source> _locationFixTimeout;
	PKSecureElement* _secureElement;
	PKPaymentDeviceConfigurationData* _configurationData;
	NSMutableArray* _metdataFetchTasks;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _skipLocationCheck;

}

@property (assign,nonatomic) BOOL skipLocationCheck;                //@synthesize skipLocationCheck=_skipLocationCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInfoHTTPHeader;
+(id)clientHardwarePlatformInfoHTTPHeader;
-(id)primarySecureElementIdentifier;
-(void)_finishLocationFixWithLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)registrationDataWithAuthToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSkipLocationCheck:(BOOL)arg1 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_executeDeviceMetadataFetchTasksCompletionHandlers;
-(void)rewrapDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)configurationData;
-(BOOL)hasRegistrationRegionMap;
-(id)initWithCallbackQueue:(id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)trustedDeviceEnrollmentInfo;
-(void)configurationDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)skipLocationCheck;
-(void)setRegistrationRegionMap:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)provisioningDataIncludingDeviceMetadata:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)signatureForAuthToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentDeviceMetadataFields:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteApplicationWithAID:(id)arg1 ;
-(void)_populateDeviceMetadata:(id)arg1 withFields:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)SEPParingInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

