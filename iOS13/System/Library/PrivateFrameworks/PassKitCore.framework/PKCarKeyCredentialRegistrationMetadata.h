/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)model;
-(long long)keyType;
-(NSString *)make;
-(id)initWithMake:(id)arg1 model:(id)arg2 keyType:(long long)arg3 ;
@end

