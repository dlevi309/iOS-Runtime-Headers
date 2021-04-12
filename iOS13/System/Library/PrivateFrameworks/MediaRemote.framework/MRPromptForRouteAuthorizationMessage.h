/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage {

	MRAVOutputDevice* _route;

}

@property (nonatomic,readonly) MRAVOutputDevice * route; 
@property (nonatomic,readonly) long long inputType; 
-(unsigned long long)type;
-(MRAVOutputDevice *)route;
-(long long)inputType;
-(id)initWithRoute:(id)arg1 inputType:(long long)arg2 ;
@end

