/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface TVRCDeviceAuthenticationChallenge : NSObject {

	long long _challengeType;
	long long _challengeAttributes;
	long long _throttleSeconds;
	NSString* _codeToEnterOnDevice;
	NSString* _deviceIdentifier;

}

@property (nonatomic,copy) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) long long challengeType;                          //@synthesize challengeType=_challengeType - In the implementation block
@property (assign,nonatomic) long long challengeAttributes;                      //@synthesize challengeAttributes=_challengeAttributes - In the implementation block
@property (assign,nonatomic) long long throttleSeconds;                          //@synthesize throttleSeconds=_throttleSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeToEnterOnDevice;              //@synthesize codeToEnterOnDevice=_codeToEnterOnDevice - In the implementation block
-(void)cancel;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)userEnteredCodeLocally:(id)arg1 ;
-(long long)challengeAttributes;
-(long long)throttleSeconds;
-(long long)challengeType;
-(NSString *)codeToEnterOnDevice;
-(id)_initWithDeviceIdentifier:(id)arg1 challengeType:(long long)arg2 codeToEnterOnDevice:(id)arg3 ;
-(void)setChallengeAttributes:(long long)arg1 ;
-(void)setThrottleSeconds:(long long)arg1 ;
@end

