/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)seid;
-(void)setNonce:(NSData *)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(NSData *)hostChallenge;
-(void)setHostChallenge:(NSData *)arg1 ;
-(NSData *)challengeResponse;
-(NSData *)nonce;
-(void)setChallengeResponse:(NSData *)arg1 ;
@end

