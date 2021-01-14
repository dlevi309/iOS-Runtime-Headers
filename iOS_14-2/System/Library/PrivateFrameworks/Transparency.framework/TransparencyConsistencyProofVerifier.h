/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class TransparencyTrustedKeyStore;

@interface TransparencyConsistencyProofVerifier : NSObject {

	TransparencyTrustedKeyStore* _trustedKeyStore;

}

@property (retain) TransparencyTrustedKeyStore * trustedKeyStore;              //@synthesize trustedKeyStore=_trustedKeyStore - In the implementation block
-(TransparencyTrustedKeyStore *)trustedKeyStore;
-(unsigned long long)verifyConsistencyProof:(id)arg1 startLogHead:(id)arg2 endLogHead:(id)arg3 error:(id*)arg4 ;
-(BOOL)verifyConsistencyProof:(id)arg1 startHash:(id)arg2 startSize:(unsigned long long)arg3 endHash:(id)arg4 endSize:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)initWithTrustedKeyStore:(id)arg1 ;
-(void)setTrustedKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
@end

