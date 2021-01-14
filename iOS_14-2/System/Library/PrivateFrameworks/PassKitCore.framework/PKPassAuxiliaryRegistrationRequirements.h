/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPassAuxiliaryRegistrationSignatureCSRMetadata, PKPassAuxiliaryRegistrationDecryptionCSRMetadata;

@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding> {

	PKPassAuxiliaryRegistrationSignatureCSRMetadata* _deviceSignatureCSRMetadata;
	PKPassAuxiliaryRegistrationDecryptionCSRMetadata* _deviceDecryptionCSRMetadata;

}

@property (nonatomic,readonly) PKPassAuxiliaryRegistrationSignatureCSRMetadata * deviceSignatureCSRMetadata;                //@synthesize deviceSignatureCSRMetadata=_deviceSignatureCSRMetadata - In the implementation block
@property (nonatomic,readonly) PKPassAuxiliaryRegistrationDecryptionCSRMetadata * deviceDecryptionCSRMetadata;              //@synthesize deviceDecryptionCSRMetadata=_deviceDecryptionCSRMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPassAuxiliaryRegistrationSignatureCSRMetadata *)deviceSignatureCSRMetadata;
-(PKPassAuxiliaryRegistrationDecryptionCSRMetadata *)deviceDecryptionCSRMetadata;
@end

