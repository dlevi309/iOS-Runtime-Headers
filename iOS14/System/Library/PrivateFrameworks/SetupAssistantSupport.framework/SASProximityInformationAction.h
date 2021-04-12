/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction {

	SASProximityInformation* _information;

}

@property (retain) SASProximityInformation * information;              //@synthesize information=_information - In the implementation block
+(unsigned long long)actionID;
-(BOOL)hasResponse;
-(id)init;
-(void)setInformation:(SASProximityInformation *)arg1 ;
-(SASProximityInformation *)information;
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
@end

