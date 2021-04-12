/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HAPBLEPeripheralInfo, NSMutableArray;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding> {

	NSString* _pairingIdentifier;
	HAPBLEPeripheralInfo* _peripheralInfo;
	NSMutableArray* _cachedServices;

}

@property (nonatomic,retain) HAPBLEPeripheralInfo * peripheralInfo;              //@synthesize peripheralInfo=_peripheralInfo - In the implementation block
@property (nonatomic,readonly) NSString * pairingIdentifier;                     //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cachedServices;                  //@synthesize cachedServices=_cachedServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateWithService:(id)arg1 ;
-(NSString *)pairingIdentifier;
-(HAPBLEPeripheralInfo *)peripheralInfo;
-(void)setPeripheralInfo:(HAPBLEPeripheralInfo *)arg1 ;
-(NSMutableArray *)cachedServices;
-(id)initWithPairingIdentifier:(id)arg1 ;
-(void)updateWithPeripheralInfo:(id)arg1 ;
-(id)getCachedServiceWithUUID:(id)arg1 ;
@end

