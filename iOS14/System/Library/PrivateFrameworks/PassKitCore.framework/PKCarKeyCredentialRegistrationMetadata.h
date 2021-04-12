/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKCredentialRegistrationMetadata.h>

@class NSString;

@interface PKCarKeyCredentialRegistrationMetadata : PKCredentialRegistrationMetadata {

	NSString* _make;
	NSString* _model;
	long long _keyType;

}

@property (nonatomic,readonly) NSString * make;                //@synthesize make=_make - In the implementation block
@property (nonatomic,readonly) NSString * model;               //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long keyType;              //@synthesize keyType=_keyType - In the implementation block
-(NSString *)make;
-(NSString *)model;
-(id)initWithMake:(id)arg1 model:(id)arg2 keyType:(long long)arg3 ;
-(long long)keyType;
@end

