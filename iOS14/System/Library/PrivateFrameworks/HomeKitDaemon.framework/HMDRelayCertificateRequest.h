/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

@interface HMDRelayCertificateRequest : HMFObject {

	NSData* _publicKey;
	NSString* _challengeIdentifier;
	NSData* _challengeResponse;
	NSData* _challengeCertificate;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                          //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * challengeIdentifier;              //@synthesize challengeIdentifier=_challengeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * challengeResponse;                  //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy,readonly) NSData * challengeCertificate;               //@synthesize challengeCertificate=_challengeCertificate - In the implementation block
+(id)shortDescription;
-(NSData *)publicKey;
-(id)init;
-(id)shortDescription;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSData *)challengeResponse;
-(NSString *)challengeIdentifier;
-(id)initWithPublicKey:(id)arg1 challengeIdentifier:(id)arg2 challengeResponse:(id)arg3 challengeCertificate:(id)arg4 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSData *)challengeCertificate;
@end

