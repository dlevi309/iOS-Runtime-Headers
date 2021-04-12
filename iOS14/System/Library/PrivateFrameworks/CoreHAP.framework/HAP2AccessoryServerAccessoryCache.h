/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPBLEPeripheralInfo, NSDictionary, NSNumber;

@interface HAP2AccessoryServerAccessoryCache : HAP2LoggingObject <NSSecureCoding> {

	HAPBLEPeripheralInfo* _peripheralInfo;
	NSDictionary* _accessoryCache;
	NSNumber* _sleepInterval;
	NSNumber* _metadataVersion;

}

@property (nonatomic,retain) HAPBLEPeripheralInfo * peripheralInfo;              //@synthesize peripheralInfo=_peripheralInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * accessoryCache;                      //@synthesize accessoryCache=_accessoryCache - In the implementation block
@property (nonatomic,retain) NSNumber * sleepInterval;                           //@synthesize sleepInterval=_sleepInterval - In the implementation block
@property (nonatomic,readonly) NSNumber * metadataVersion;                       //@synthesize metadataVersion=_metadataVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)peripheralInfoFromMetadata:(id)arg1 ;
+(id)accessoryCacheForAccessories:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)metadataVersion;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)sleepInterval;
-(void)setSleepInterval:(NSNumber *)arg1 ;
-(HAPBLEPeripheralInfo *)peripheralInfo;
-(void)setPeripheralInfo:(HAPBLEPeripheralInfo *)arg1 ;
-(id)initWithBLEPeripheralInfo:(id)arg1 cachedAccessories:(id)arg2 sleepInterval:(id)arg3 metadataVersion:(id)arg4 ;
-(void)setAccessoryCache:(NSDictionary *)arg1 ;
-(NSDictionary *)accessoryCache;
-(id)initWithMetadata:(id)arg1 discoveredAccessories:(id)arg2 sleepInterval:(id)arg3 ;
-(void)updateWithMetadata:(id)arg1 discoveredAccessories:(id)arg2 ;
-(void)invalidateAccessoryCache;
@end

