/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSData, NSString;

@interface FZf7GLuluME5TMqw : NSObject {

	NSData* _hostChallenge;
	NSData* _challengeResponse;
	NSString* _seid;
	NSData* _nonce;

}

@property (nonatomic,copy) NSData * hostChallenge;                  //@synthesize hostChallenge=_hostChallenge - In the implementation block
@property (nonatomic,copy) NSData * challengeResponse;              //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy) NSString * seid;                         //@synthesize seid=_seid - In the implementation block
@property (nonatomic,copy) NSData * nonce;                          //@synthesize nonce=_nonce - In the implementation block
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(void)setHostChallenge:(NSData *)arg1 ;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(NSString *)seid;
-(NSData *)challengeResponse;
-(NSData *)hostChallenge;
@end

