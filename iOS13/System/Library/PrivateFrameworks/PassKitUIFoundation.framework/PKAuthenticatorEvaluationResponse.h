/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


@class NSString, NSData;

@interface PKAuthenticatorEvaluationResponse : NSObject {

	BOOL _biometricMatch;
	long long _result;
	NSString* _kextBlacklistVersion;
	NSData* _credential;

}

@property (nonatomic,copy) NSString * kextBlacklistVersion;              //@synthesize kextBlacklistVersion=_kextBlacklistVersion - In the implementation block
@property (nonatomic,readonly) long long result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL biometricMatch;                      //@synthesize biometricMatch=_biometricMatch - In the implementation block
@property (nonatomic,readonly) NSData * credential;                      //@synthesize credential=_credential - In the implementation block
+(id)responseWithResult:(long long)arg1 ;
+(id)responseWithResult:(long long)arg1 biometricMatch:(BOOL)arg2 credential:(id)arg3 ;
-(long long)result;
-(NSData *)credential;
-(void)setKextBlacklistVersion:(NSString *)arg1 ;
-(NSString *)kextBlacklistVersion;
-(BOOL)biometricMatch;
@end

