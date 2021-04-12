/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction {

	SASProximityHandshake* _handshake;

}

@property (retain) SASProximityHandshake * handshake;              //@synthesize handshake=_handshake - In the implementation block
+(unsigned long long)actionID;
-(id)init;
-(BOOL)hasResponse;
-(SASProximityHandshake *)handshake;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg1 ;
-(void)setHandshake:(SASProximityHandshake *)arg1 ;
@end

