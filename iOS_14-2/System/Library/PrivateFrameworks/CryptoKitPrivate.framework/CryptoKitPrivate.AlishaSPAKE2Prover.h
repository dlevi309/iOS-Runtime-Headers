/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)getX;
-(id)initWithPassword:(id)arg1 salt:(id)arg2 authenticatedData:(id)arg3 keyDerivationCost:(unsigned long long)arg4 ;
-(id)processResponseWithY:(id)arg1 M1:(id)arg2 ;
@end

