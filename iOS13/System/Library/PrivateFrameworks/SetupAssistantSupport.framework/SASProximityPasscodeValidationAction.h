/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(id)responsePayload;
-(id)requestPayload;
-(void)setResponseFromData:(id)arg1 ;
-(void)setPasscodeValid:(BOOL)arg1 ;
-(BOOL)passcodeValid;
@end

