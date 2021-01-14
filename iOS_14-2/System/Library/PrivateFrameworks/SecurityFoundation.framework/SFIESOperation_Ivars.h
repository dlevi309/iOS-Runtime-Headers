/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@protocol SFDigestOperation;
@class _SFECDHOperation, SFSymmetricEncryptionOperation;

@interface SFIESOperation_Ivars : NSObject {

	long long curve;
	_SFECDHOperation* diffieHellmanOperation;
	SFSymmetricEncryptionOperation* encryptionOperation;
	id<SFDigestOperation> digestOperation;

}
@end

