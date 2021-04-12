/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)pairingProtocolVersion;
-(void)setPairingProtocolVersion:(unsigned long long)arg1 ;
@end

