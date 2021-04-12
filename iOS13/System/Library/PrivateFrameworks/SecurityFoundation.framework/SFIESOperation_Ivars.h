/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

