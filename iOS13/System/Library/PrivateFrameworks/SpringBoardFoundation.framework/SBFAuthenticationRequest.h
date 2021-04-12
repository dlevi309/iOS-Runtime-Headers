/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSString;

@interface SBFAuthenticationRequest : NSObject {

	unsigned long long _type;
	long long _source;
	/*^block*/id _handler;
	NSString* _passcode;

}

@property (nonatomic,readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long source;                      //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * passcode;              //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,copy,readonly) id handler;                       //@synthesize handler=_handler - In the implementation block
-(id)description;
-(id)handler;
-(unsigned long long)type;
-(long long)source;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)passcode;
-(id)publicDescription;
-(id)_initWithType:(unsigned long long)arg1 source:(long long)arg2 passcode:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initForPasscode:(id)arg1 source:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initForBiometricAuthenticationWithSource:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initForPasscode:(id)arg1 source:(long long)arg2 ;
-(id)initForBiometricAuthenticationWithSource:(long long)arg1 ;
@end

