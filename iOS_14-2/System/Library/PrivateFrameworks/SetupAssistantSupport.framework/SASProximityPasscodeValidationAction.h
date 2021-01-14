/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction {

	BOOL _passcodeValid;
	NSString* _passcode;

}

@property (retain) NSString * passcode;              //@synthesize passcode=_passcode - In the implementation block
@property (assign) BOOL passcodeValid;               //@synthesize passcodeValid=_passcodeValid - In the implementation block
+(unsigned long long)actionID;
+(id)actionFromDictionary:(id)arg1 ;
-(BOOL)hasResponse;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
-(id)requestPayload;
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
-(void)setPasscodeValid:(BOOL)arg1 ;
-(BOOL)passcodeValid;
@end

