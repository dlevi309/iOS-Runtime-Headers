/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountAttestationRequest.h>

@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest {

	NSData* _subCASEResidencyAttestation;
	NSData* _sharingTokenHash;

}

@property (nonatomic,copy) NSData * subCASEResidencyAttestation;              //@synthesize subCASEResidencyAttestation=_subCASEResidencyAttestation - In the implementation block
@property (nonatomic,copy) NSData * sharingTokenHash;                         //@synthesize sharingTokenHash=_sharingTokenHash - In the implementation block
-(void)setSubCASEResidencyAttestation:(NSData *)arg1 ;
-(void)setSharingTokenHash:(NSData *)arg1 ;
-(id)initWithRequestData:(id)arg1 ;
-(NSData *)subCASEResidencyAttestation;
-(NSData *)sharingTokenHash;
@end

