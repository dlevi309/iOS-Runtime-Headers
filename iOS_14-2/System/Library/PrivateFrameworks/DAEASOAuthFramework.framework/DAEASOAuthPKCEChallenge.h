/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@class NSString;

@interface DAEASOAuthPKCEChallenge : NSObject {

	long long _codeChallengeMethod;
	NSString* _codeVerifier;
	NSString* _codeChallenge;

}

@property (assign,nonatomic) long long codeChallengeMethod;              //@synthesize codeChallengeMethod=_codeChallengeMethod - In the implementation block
@property (nonatomic,retain) NSString * codeVerifier;                    //@synthesize codeVerifier=_codeVerifier - In the implementation block
@property (nonatomic,retain) NSString * codeChallenge;                   //@synthesize codeChallenge=_codeChallenge - In the implementation block
+(id)newCodeVerifier;
+(id)base64URLEncode:(id)arg1 ;
+(id)convertToString:(long long)arg1 ;
-(void)setCodeChallengeMethod:(long long)arg1 ;
-(void)setCodeVerifier:(NSString *)arg1 ;
-(NSString *)codeVerifier;
-(long long)codeChallengeMethod;
-(id)codeChallengeFromVerifier:(id)arg1 withCodeChallengeMethod:(long long)arg2 ;
-(void)setCodeChallenge:(NSString *)arg1 ;
-(id)initWithCodeChallengeMethod:(long long)arg1 ;
-(NSString *)codeChallenge;
@end

