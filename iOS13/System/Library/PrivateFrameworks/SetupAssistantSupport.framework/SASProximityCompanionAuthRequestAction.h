/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class AKDevice, ACAccount;

@interface SASProximityCompanionAuthRequestAction : SASProximityAction {

	AKDevice* _companionDevice;
	ACAccount* _account;

}

@property (retain) AKDevice * companionDevice;              //@synthesize companionDevice=_companionDevice - In the implementation block
@property (retain) ACAccount * account;                     //@synthesize account=_account - In the implementation block
+(unsigned long long)actionID;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(BOOL)hasResponse;
-(AKDevice *)companionDevice;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg1 ;
-(id)idmsAccountForiCloud;
@end

