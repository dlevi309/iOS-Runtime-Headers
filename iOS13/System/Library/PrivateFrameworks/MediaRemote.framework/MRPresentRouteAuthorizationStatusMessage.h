/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage {

	MRAVOutputDevice* _route;

}

@property (nonatomic,readonly) MRAVOutputDevice * route; 
@property (nonatomic,readonly) int status; 
-(unsigned long long)type;
-(int)status;
-(MRAVOutputDevice *)route;
-(id)initWithRoute:(id)arg1 status:(int)arg2 ;
@end

