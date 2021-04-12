/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSData;

@interface ASTAuthInfoResult : ASTSealablePayload {

	NSData* _attestation;

}

@property (nonatomic,retain) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
+(id)sealedAuthInfoResultWithPayload:(id)arg1 signature:(id)arg2 ;
+(id)authInfoResultWithAttestation:(id)arg1 ;
-(NSData *)attestation;
-(void)setAttestation:(NSData *)arg1 ;
-(id)generatePayload;
@end

