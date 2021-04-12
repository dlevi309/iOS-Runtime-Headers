/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sharingSessionIdentifier;
-(NSData *)subCaAttestation;
-(NSData *)casd;
-(NSData *)rsaCertData;
-(id)initWithSharingSessionIdentifier:(id)arg1 subCaAttestation:(id)arg2 casd:(id)arg3 rsaCertData:(id)arg4 ;
@end

