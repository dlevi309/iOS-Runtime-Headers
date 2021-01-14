/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSLocalPairingRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord <NSSecureCoding> {

	NSUUID* _cbuuid;

}

@property (nonatomic,readonly) NSUUID * cbuuid;              //@synthesize cbuuid=_cbuuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)publicIdentityClassA:(id*)arg1 ;
-(id)publicIdentityClassC:(id*)arg1 ;
-(id)publicIdentityClassD:(id*)arg1 ;
-(id)_publicIdenityForDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithCBUUID:(id)arg1 publicIdentityDataClassA:(id)arg2 classC:(id)arg3 classD:(id)arg4 ;
-(NSUUID *)cbuuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

