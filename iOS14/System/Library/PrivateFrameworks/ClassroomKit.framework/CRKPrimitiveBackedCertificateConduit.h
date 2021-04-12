/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKCertificateConduit.h>

@protocol CRKIDSPrimitives, CRKIDSAddressTranslator;
@class CATOperationQueue;

@interface CRKPrimitiveBackedCertificateConduit : NSObject <CRKCertificateConduit> {

	id<CRKIDSPrimitives> _IDSPrimitives;
	id<CRKIDSAddressTranslator> _addressTranslator;
	CATOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) id<CRKIDSPrimitives> IDSPrimitives;                         //@synthesize IDSPrimitives=_IDSPrimitives - In the implementation block
@property (nonatomic,readonly) id<CRKIDSAddressTranslator> addressTranslator;              //@synthesize addressTranslator=_addressTranslator - In the implementation block
@property (nonatomic,readonly) CATOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
-(CATOperationQueue *)operationQueue;
-(id<CRKIDSPrimitives>)IDSPrimitives;
-(id<CRKIDSAddressTranslator>)addressTranslator;
-(id)operationToFetchCertificateForDestinationAppleID:(id)arg1 sourceAppleID:(id)arg2 destinationDeviceIdentifier:(id)arg3 controlGroupIdentifier:(id)arg4 sourceRole:(long long)arg5 destinationRole:(long long)arg6 requesterCertificate:(id)arg7 timeout:(double)arg8 ;
-(id)initWithIDSPrimitives:(id)arg1 addressTranslator:(id)arg2 operationQueue:(id)arg3 ;
@end

