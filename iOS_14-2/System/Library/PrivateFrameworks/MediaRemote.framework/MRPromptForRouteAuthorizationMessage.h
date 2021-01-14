/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage {

	MRAVOutputDevice* _route;

}

@property (nonatomic,readonly) MRAVOutputDevice * route; 
@property (nonatomic,readonly) long long inputType; 
-(MRAVOutputDevice *)route;
-(long long)inputType;
-(id)initWithRoute:(id)arg1 inputType:(long long)arg2 ;
-(unsigned long long)type;
@end

