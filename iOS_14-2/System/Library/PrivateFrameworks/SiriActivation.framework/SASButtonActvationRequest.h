/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SASActivationRequest.h>

@interface SASButtonActvationRequest : SASActivationRequest {

	long long _buttonIdentifier;

}

@property (assign,nonatomic) long long buttonIdentifier;              //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
-(long long)buttonIdentifier;
-(void)setButtonIdentifier:(long long)arg1 ;
-(BOOL)isButtonRequest;
-(BOOL)isTestingRequest;
-(BOOL)isVoiceRequest;
-(BOOL)isDeviceButtonRequest;
-(BOOL)isHoldToTalkSource;
@end

