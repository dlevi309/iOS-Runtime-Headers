/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface DAKeyBindingAttestationRequestData : NSObject <NSSecureCoding> {

	NSUUID* _sharingSessionIdentifier;
	NSData* _subCaAttestation;
	NSData* _casd;
	NSData* _rsaCertData;

}

@property (nonatomic,readonly) NSUUID * sharingSessionIdentifier;              //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * subCaAttestation;                      //@synthesize subCaAttestation=_subCaAttestation - In the implementation block
@property (nonatomic,readonly) NSData * casd;                                  //@synthesize casd=_casd - In the implementation block
@property (nonatomic,readonly) NSData * rsaCertData;                           //@synthesize rsaCertData=_rsaCertData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)casd;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)subCaAttestation;
-(NSData *)rsaCertData;
-(id)description;
-(NSUUID *)sharingSessionIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSharingSessionIdentifier:(id)arg1 subCaAttestation:(id)arg2 casd:(id)arg3 rsaCertData:(id)arg4 ;
@end

