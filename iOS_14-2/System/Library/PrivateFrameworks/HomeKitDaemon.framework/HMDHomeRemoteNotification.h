/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDHomeRemoteNotification : HMFObject <HMFLogging> {

	NSString* _updateIdentifier;
	id _value;
	NSString* _accessoryUUID;
	NSString* _serviceInstanceID;
	NSString* _characteristicInstanceID;

}

@property (nonatomic,readonly) NSString * accessoryUUID;                         //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSString * serviceInstanceID;                     //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,readonly) NSString * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,readonly) NSString * updateIdentifier;                      //@synthesize updateIdentifier=_updateIdentifier - In the implementation block
@property (nonatomic,readonly) id value;                                         //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)accessoryUUID;
-(id)logIdentifier;
-(NSString *)updateIdentifier;
-(NSString *)description;
-(id)value;
-(NSString *)characteristicInstanceID;
-(NSString *)serviceInstanceID;
-(BOOL)matchesCharacterisitic:(id)arg1 ;
-(BOOL)matchesAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 ;
-(id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 updateIdentifier:(id)arg4 value:(id)arg5 ;
@end

