/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


@class NSData;

@interface TPRecoveryKeyPair : NSObject {

	NSData* _signingSPKI;
	NSData* _encryptionSPKI;

}

@property (retain,readonly) NSData * signingSPKI;                 //@synthesize signingSPKI=_signingSPKI - In the implementation block
@property (retain,readonly) NSData * encryptionSPKI;              //@synthesize encryptionSPKI=_encryptionSPKI - In the implementation block
-(id)initWithSigningSPKI:(id)arg1 encryptionSPKI:(id)arg2 ;
-(id)initWithStableInfo:(id)arg1 ;
-(NSData *)signingSPKI;
-(NSData *)encryptionSPKI;
@end

