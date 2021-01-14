/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSData * credential;                 //@synthesize credential=_credential - In the implementation block
+(id)responseWithResult:(long long)arg1 ;
+(id)responseWithResult:(long long)arg1 biometricMatch:(BOOL)arg2 credential:(id)arg3 ;
-(NSData *)credential;
-(BOOL)biometricMatch;
-(void)setKextBlacklistVersion:(NSString *)arg1 ;
-(NSString *)kextBlacklistVersion;
-(long long)result;
@end

