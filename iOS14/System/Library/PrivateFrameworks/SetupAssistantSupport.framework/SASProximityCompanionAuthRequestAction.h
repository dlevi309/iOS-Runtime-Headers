/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
-(id)idmsAccountForiCloud;
@end

