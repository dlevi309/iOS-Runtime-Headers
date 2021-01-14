/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage {

	MRAVOutputDevice* _route;

}

@property (nonatomic,readonly) MRAVOutputDevice * route; 
@property (nonatomic,readonly) int status; 
-(MRAVOutputDevice *)route;
-(id)initWithRoute:(id)arg1 status:(int)arg2 ;
-(unsigned long long)type;
-(int)status;
@end

