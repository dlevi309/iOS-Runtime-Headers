/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface _TVRXDeviceAuthenticationChallenge : NSObject {

	/*^block*/id _continuation;
	/*^block*/id _cancellationHandler;
	long long _challengeType;
	long long _challengeAttributes;
	long long _throttleSeconds;
	NSString* _codeToEnterOnDevice;

}

@property (nonatomic,readonly) long long challengeType;                          //@synthesize challengeType=_challengeType - In the implementation block
@property (assign,nonatomic) long long challengeAttributes;                      //@synthesize challengeAttributes=_challengeAttributes - In the implementation block
@property (assign,nonatomic) long long throttleSeconds;                          //@synthesize throttleSeconds=_throttleSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeToEnterOnDevice;              //@synthesize codeToEnterOnDevice=_codeToEnterOnDevice - In the implementation block
+(id)_challengeWithCodeToEnterOnDevice:(id)arg1 cancellationHandler:(/*^block*/id)arg2 ;
+(id)_challengeWithCodeToEnterLocally:(/*^block*/id)arg1 ;
-(id)_init;
-(void)cancel;
-(void)userEnteredCodeLocally:(id)arg1 ;
-(long long)challengeType;
-(long long)challengeAttributes;
-(void)setChallengeAttributes:(long long)arg1 ;
-(long long)throttleSeconds;
-(void)setThrottleSeconds:(long long)arg1 ;
-(NSString *)codeToEnterOnDevice;
@end

