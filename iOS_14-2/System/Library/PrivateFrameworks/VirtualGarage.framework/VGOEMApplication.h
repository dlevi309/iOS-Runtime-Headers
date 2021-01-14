/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/

#import <libobjc.A.dylib/INIntentResponseObserver.h>
#import <libobjc.A.dylib/VGOEMApplication.h>
@class NSString, LSApplicationRecord;


@protocol VGOEMApplication <NSObject,VGVehicleStateProviding>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) LSApplicationRecord * applicationRecord; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic,__weak) id<VGOEMAppSOCStreaming> chargeStreamingDelegate; 
@required
+(id)new;
-(id)init;
-(void)setEnabled:(BOOL)arg1;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(void)setChargeStreamingDelegate:(id)arg1;
-(void)startSendingChargeUpdatesForVehicle:(id)arg1;
-(void)stopSendingChargeUpdatesForVehicle:(id)arg1;
-(id)initWithIdentifier:(id)arg1 applicationRecord:(id)arg2;
-(LSApplicationRecord *)applicationRecord;
-(id<VGOEMAppSOCStreaming>)chargeStreamingDelegate;

@end


@protocol OS_dispatch_queue, VGOEMAppSOCStreaming;
@class NSString, LSApplicationRecord, NSObject, INCExtensionConnection, NSArray;

@interface VGOEMApplication : NSObject <INIntentResponseObserver, VGOEMApplication> {

	NSObject*<OS_dispatch_queue> _queue;
	INCExtensionConnection* _chargeStreamingConnection;
	BOOL _enabled;
	LSApplicationRecord* _applicationRecord;
	id<VGOEMAppSOCStreaming> _chargeStreamingDelegate;
	NSString* _identifier;
	NSArray* _allowedFormulaIDs;

}

@property (nonatomic,retain) NSArray * allowedFormulaIDs;                                          //@synthesize allowedFormulaIDs=_allowedFormulaIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) LSApplicationRecord * applicationRecord;                            //@synthesize applicationRecord=_applicationRecord - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<VGOEMAppSOCStreaming> chargeStreamingDelegate;              //@synthesize chargeStreamingDelegate=_chargeStreamingDelegate - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2 ;
-(void)listCarsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(void)getStateOfChargeForVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setChargeStreamingDelegate:(id<VGOEMAppSOCStreaming>)arg1 ;
-(void)startSendingChargeUpdatesForVehicle:(id)arg1 ;
-(void)stopSendingChargeUpdatesForVehicle:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 applicationRecord:(id)arg2 ;
-(void)setAllowedFormulaIDs:(NSArray *)arg1 ;
-(NSArray *)allowedFormulaIDs;
-(unsigned long long)_VGChargingConnectorTypeOptionFromINCarChargingConnectorType:(id)arg1 ;
-(unsigned long long)_VGChargingConnectorTypeOptionsFromINCarChargingConnectorTypes:(id)arg1 ;
-(id)_powerByConnectorDictionaryFromCar:(id)arg1 ;
-(id)_connectionWithIntent:(id)arg1 ;
-(id)_vehiclesFromListCarsIntentResponse:(id)arg1 ;
-(BOOL)_isValidConsumptionModelForResponse:(id)arg1 ;
-(id)_vehicleStateFromResponse:(id)arg1 error:(id*)arg2 ;
-(void)_createChargeStreamingConnectionIfNeededForVehicle:(id)arg1 ;
-(LSApplicationRecord *)applicationRecord;
-(id<VGOEMAppSOCStreaming>)chargeStreamingDelegate;
@end

