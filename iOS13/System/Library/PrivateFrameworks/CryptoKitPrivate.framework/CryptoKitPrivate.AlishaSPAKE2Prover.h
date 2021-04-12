/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitPrivate.framework/CryptoKitPrivate
*/


@interface CryptoKitPrivate.AlishaSPAKE2Prover : NSObject {

	 spakeCtxData;
	 aad;
	 X;
	 z0_self;
	 z1_self;

}
-(id)init;
-(id)initWithPassword:(id)arg1 salt:(id)arg2 authenticatedData:(id)arg3 keyDerivationCost:(unsigned long long)arg4 ;
-(id)getX;
-(id)processResponseWithY:(id)arg1 M1:(id)arg2 ;
@end

