/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerSecureTransportDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerControllerPrivate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerController.h>

@protocol HAP2AccessoryServerController <NSObject>
@required
-(id)readAttributeDatabaseWithCompletion:(/*^block*/id)arg1;
-(id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(id)enableNotificationsForCharacteristics:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(id)disableNotificationsForCharacteristics:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(id)removePairing:(id)arg1 cleanupLocalData:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(id)addPairing:(id)arg1 completion:(/*^block*/id)arg2;
-(id)listPairingsWithCompletion:(/*^block*/id)arg1;
-(id)unpairedIdentifyWithCompletion:(/*^block*/id)arg1;
-(void)handleUpdatedMetadataWithOldMetadata:(id)arg1;
-(void)updateMaxRequestTimeout:(double)arg1;

@end


@protocol HAP2AccessoryServerPrivate, HAP2AccessoryServerEncoding, HAP2AccessoryServerSecureTransport, HAP2AccessoryServerAccessoryFactory;
@class NSDate, HAP2AccessoryServerAccessoryCache, HAP2PropertyLock, HAP2SerializedOperationQueue, NSString;

@interface HAP2AccessoryServerController : HAP2LoggingObject <HAP2AccessoryServerSecureTransportDelegate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerController> {

	BOOL _readingAttributeDatabase;
	BOOL _attemptedReReadAttributeDatabase;
	id<HAP2AccessoryServerPrivate> _accessoryServer;
	id<HAP2AccessoryServerEncoding> _encoding;
	id<HAP2AccessoryServerSecureTransport> _transport;
	NSDate* _sessionStartTime;
	unsigned long long _sessionNumber;
	HAP2AccessoryServerAccessoryCache* _accessoryCache;
	HAP2PropertyLock* _propertyLock;
	HAP2SerializedOperationQueue* _operationQueue;
	id<HAP2AccessoryServerAccessoryFactory> _accessoryFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerPrivate> accessoryServer;              //@synthesize accessoryServer=_accessoryServer - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerEncoding> encoding;                         //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerSecureTransport> transport;                 //@synthesize transport=_transport - In the implementation block
+(id)new;
+(id)controllerIdentifier;
-(id<HAP2AccessoryServerSecureTransport>)transport;
-(id)init;
-(id<HAP2AccessoryServerEncoding>)encoding;
-(NSString *)description;
-(void)dealloc;
-(id)initWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3 ;
-(id<HAP2AccessoryServerPrivate>)accessoryServer;
-(id)readAttributeDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)enableNotificationsForCharacteristics:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)disableNotificationsForCharacteristics:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)removePairing:(id)arg1 cleanupLocalData:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)addPairing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)listPairingsWithCompletion:(/*^block*/id)arg1 ;
-(id)unpairedIdentifyWithCompletion:(/*^block*/id)arg1 ;
-(void)handleUpdatedMetadataWithOldMetadata:(id)arg1 ;
-(void)updateMaxRequestTimeout:(double)arg1 ;
-(BOOL)mergeWithNewController:(id)arg1 ;
-(void)setAccessoryServer:(id<HAP2AccessoryServerPrivate>)arg1 ;
-(void)secureTransport:(id)arg1 needsLocalPairingIdentityWithCompletion:(/*^block*/id)arg2 ;
-(void)secureTransport:(id)arg1 needsRemotePairingIdentityForDeviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)secureTransport:(id)arg1 didChangeState:(unsigned long long)arg2 error:(id)arg3 ;
-(void)secureTransport:(id)arg1 didReceiveEvent:(id)arg2 ;
-(id)initWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3 accessoryFactory:(id)arg4 ;
@end

