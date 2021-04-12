/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountAttestationRequest.h>

@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest {

	NSData* _subCASEResidencyAttestation;
	NSData* _sharingToken;

}

@property (nonatomic,copy) NSData * subCASEResidencyAttestation;              //@synthesize subCASEResidencyAttestation=_subCASEResidencyAttestation - In the implementation block
@property (nonatomic,copy) NSData * sharingToken;                             //@synthesize sharingToken=_sharingToken - In the implementation block
-(NSData *)subCASEResidencyAttestation;
-(NSData *)sharingToken;
-(id)initWithRequestData:(id)arg1 ;
-(void)setSubCASEResidencyAttestation:(NSData *)arg1 ;
-(void)setSharingToken:(NSData *)arg1 ;
@end

