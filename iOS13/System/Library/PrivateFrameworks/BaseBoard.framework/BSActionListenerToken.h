/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSActionListenerToken : NSObject {

	unsigned _port;
	NSObject*<OS_xpc_object> _endpoint;

}

@property (assign,nonatomic) unsigned port;                                  //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(void)dealloc;
-(unsigned)port;
-(void)setPort:(unsigned)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithPort:(unsigned)arg1 endpoint:(id)arg2 ;
@end

