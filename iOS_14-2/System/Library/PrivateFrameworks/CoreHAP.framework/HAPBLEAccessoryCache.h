/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, HAPBLEPeripheralInfo, NSMutableArray;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding> {

	NSNumber* _metadataVersion;
	NSString* _pairingIdentifier;
	HAPBLEPeripheralInfo* _peripheralInfo;
	NSMutableArray* _cachedServices;

}

@property (nonatomic,retain) HAPBLEPeripheralInfo * peripheralInfo;              //@synthesize peripheralInfo=_peripheralInfo - In the implementation block
@property (nonatomic,readonly) NSNumber * metadataVersion;                       //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (nonatomic,readonly) NSString * pairingIdentifier;                     //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cachedServices;                  //@synthesize cachedServices=_cachedServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)pairingIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)metadataVersion;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)updateWithService:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HAPBLEPeripheralInfo *)peripheralInfo;
-(void)setPeripheralInfo:(HAPBLEPeripheralInfo *)arg1 ;
-(NSMutableArray *)cachedServices;
-(id)initWithPairingIdentifier:(id)arg1 ;
-(void)updateWithPeripheralInfo:(id)arg1 ;
-(id)getCachedServiceWithUUID:(id)arg1 ;
@end

