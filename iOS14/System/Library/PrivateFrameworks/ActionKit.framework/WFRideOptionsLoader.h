/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@protocol WFRideOptionsLoaderDelegate, OS_dispatch_queue;
@class CLPlacemark, NSString, WFRideOptionParameter, WFPaymentMethodParameter, NSArray, NSError, WFIntentExecutor, NSMutableArray, NSObject;

@interface WFRideOptionsLoader : NSObject <WFDynamicEnumerationDataSource, WFActionEventObserver> {

	CLPlacemark* _pickupLocation;
	CLPlacemark* _dropOffLocation;
	NSString* _appBundleIdentifier;
	id<WFRideOptionsLoaderDelegate> _delegate;
	WFRideOptionParameter* _rideOptionParameterParameter;
	WFPaymentMethodParameter* _paymentMethodParameterParameter;
	NSArray* _rideOptions;
	NSArray* _paymentMethods;
	NSError* _loadingOptionsError;
	unsigned long long _loadingState;
	WFIntentExecutor* _executor;
	NSMutableArray* _completionBlocks;
	NSObject*<OS_dispatch_queue> _loadingOptionsQueue;

}

@property (nonatomic,copy) NSArray * rideOptions;                                                     //@synthesize rideOptions=_rideOptions - In the implementation block
@property (nonatomic,copy) NSArray * paymentMethods;                                                  //@synthesize paymentMethods=_paymentMethods - In the implementation block
@property (nonatomic,retain) NSError * loadingOptionsError;                                           //@synthesize loadingOptionsError=_loadingOptionsError - In the implementation block
@property (assign,nonatomic) unsigned long long loadingState;                                         //@synthesize loadingState=_loadingState - In the implementation block
@property (nonatomic,retain) WFIntentExecutor * executor;                                             //@synthesize executor=_executor - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                                     //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> loadingOptionsQueue;                      //@synthesize loadingOptionsQueue=_loadingOptionsQueue - In the implementation block
@property (nonatomic,copy) CLPlacemark * pickupLocation;                                              //@synthesize pickupLocation=_pickupLocation - In the implementation block
@property (nonatomic,copy) CLPlacemark * dropOffLocation;                                             //@synthesize dropOffLocation=_dropOffLocation - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                                            //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<WFRideOptionsLoaderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFRideOptionParameter * rideOptionParameterParameter;                    //@synthesize rideOptionParameterParameter=_rideOptionParameterParameter - In the implementation block
@property (nonatomic,retain) WFPaymentMethodParameter * paymentMethodParameterParameter;              //@synthesize paymentMethodParameterParameter=_paymentMethodParameterParameter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)completionBlocks;
-(id)init;
-(id<WFRideOptionsLoaderDelegate>)delegate;
-(NSString *)appBundleIdentifier;
-(void)setPickupLocation:(CLPlacemark *)arg1 ;
-(CLPlacemark *)dropOffLocation;
-(CLPlacemark *)pickupLocation;
-(void)setDropOffLocation:(CLPlacemark *)arg1 ;
-(void)setDelegate:(id<WFRideOptionsLoaderDelegate>)arg1 ;
-(NSArray *)rideOptions;
-(void)setRideOptions:(NSArray *)arg1 ;
-(WFIntentExecutor *)executor;
-(NSArray *)paymentMethods;
-(void)setPaymentMethods:(NSArray *)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)loadingState;
-(void)setLoadingState:(unsigned long long)arg1 ;
-(void)setExecutor:(WFIntentExecutor *)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(void)setRideOptionParameterParameter:(WFRideOptionParameter *)arg1 ;
-(void)setPaymentMethodParameterParameter:(WFPaymentMethodParameter *)arg1 ;
-(void)loadRideOptionsValueWithCompletion:(/*^block*/id)arg1 ;
-(WFRideOptionParameter *)rideOptionParameterParameter;
-(WFPaymentMethodParameter *)paymentMethodParameterParameter;
-(NSError *)loadingOptionsError;
-(void)setLoadingOptionsError:(NSError *)arg1 ;
-(NSObject*<OS_dispatch_queue>)loadingOptionsQueue;
@end

