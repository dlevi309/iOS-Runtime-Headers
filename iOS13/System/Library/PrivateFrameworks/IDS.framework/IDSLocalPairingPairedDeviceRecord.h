/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)cbuuid;
-(id)publicIdentityClassA:(id*)arg1 ;
-(id)publicIdentityClassC:(id*)arg1 ;
-(id)publicIdentityClassD:(id*)arg1 ;
-(id)_publicIdenityForDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithCBUUID:(id)arg1 publicIdentityDataClassA:(id)arg2 classC:(id)arg3 classD:(id)arg4 ;
@end

