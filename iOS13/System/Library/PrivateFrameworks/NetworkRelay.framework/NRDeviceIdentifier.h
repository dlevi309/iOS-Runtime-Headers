/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(NSUUID *)nrDeviceIdentifier;
-(void)setNrDeviceIdentifier:(NSUUID *)arg1 ;
@end

