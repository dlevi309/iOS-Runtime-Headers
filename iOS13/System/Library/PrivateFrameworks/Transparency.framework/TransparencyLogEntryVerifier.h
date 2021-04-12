/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class TransparencyTrustedKeyStore;

@interface TransparencyLogEntryVerifier : NSObject {

	TransparencyTrustedKeyStore* _trustedKeyStore;

}

@property (retain) TransparencyTrustedKeyStore * trustedKeyStore;              //@synthesize trustedKeyStore=_trustedKeyStore - In the implementation block
-(TransparencyTrustedKeyStore *)trustedKeyStore;
-(id)initWithTrustedKeyStore:(id)arg1 ;
-(void)setTrustedKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(BOOL)verifyLogEntryWithLogLeaf:(id)arg1 position:(unsigned long long)arg2 hashesToRoot:(id)arg3 signedLogHead:(id)arg4 error:(id*)arg5 ;
-(BOOL)verifyInclusionOfLogLeaf:(id)arg1 position:(unsigned long long)arg2 treeSize:(unsigned long long)arg3 treeHead:(id)arg4 hashPath:(id)arg5 error:(id*)arg6 ;
@end

