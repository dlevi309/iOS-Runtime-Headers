/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction {

	SASProximityInformation* _information;

}

@property (retain) SASProximityInformation * information;              //@synthesize information=_information - In the implementation block
+(unsigned long long)actionID;
-(id)init;
-(BOOL)hasResponse;
-(void)setInformation:(SASProximityInformation *)arg1 ;
-(SASProximityInformation *)information;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg1 ;
@end

