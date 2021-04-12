/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction {

	SASProximityHandshake* _handshake;

}

@property (retain) SASProximityHandshake * handshake;              //@synthesize handshake=_handshake - In the implementation block
+(unsigned long long)actionID;
-(BOOL)hasResponse;
-(id)init;
-(SASProximityHandshake *)handshake;
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
-(void)setHandshake:(SASProximityHandshake *)arg1 ;
@end

