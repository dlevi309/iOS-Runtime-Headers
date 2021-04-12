/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SASActivationRequest.h>

@interface SASButtonActvationRequest : SASActivationRequest {

	long long _buttonIdentifier;

}

@property (assign,nonatomic) long long buttonIdentifier;              //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
-(long long)buttonIdentifier;
-(BOOL)isButtonRequest;
-(BOOL)isTestingRequest;
-(BOOL)isVoiceRequest;
-(void)setButtonIdentifier:(long long)arg1 ;
-(BOOL)isDeviceButtonRequest;
-(BOOL)isHoldToTalkSource;
@end

