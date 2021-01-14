/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRDeviceProperties : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _pairingProtocolVersion;

}

@property (assign,nonatomic) unsigned long long pairingProtocolVersion;              //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pairingProtocolVersion;
-(void)setPairingProtocolVersion:(unsigned long long)arg1 ;
@end

