/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRUpdateActiveSystemEndpointRequest;

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage {

	MRUpdateActiveSystemEndpointRequest* _request;

}

@property (nonatomic,readonly) MRUpdateActiveSystemEndpointRequest * request;              //@synthesize request=_request - In the implementation block
-(MRUpdateActiveSystemEndpointRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
@end

