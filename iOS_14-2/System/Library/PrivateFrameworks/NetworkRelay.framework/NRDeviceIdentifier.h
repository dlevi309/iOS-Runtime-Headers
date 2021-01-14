/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface NRDeviceIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _nrDeviceIdentifier;

}

@property (nonatomic,copy) NSUUID * nrDeviceIdentifier;              //@synthesize nrDeviceIdentifier=_nrDeviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newDeviceIdentifierWithBluetoothUUID:(id)arg1 ;
+(id)copyBestTestingDeviceIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(NSUUID *)nrDeviceIdentifier;
-(void)setNrDeviceIdentifier:(NSUUID *)arg1 ;
@end

