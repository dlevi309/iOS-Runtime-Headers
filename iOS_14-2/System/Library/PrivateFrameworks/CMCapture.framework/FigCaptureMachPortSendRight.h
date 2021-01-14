/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@interface FigCaptureMachPortSendRight : NSObject {

	unsigned _port;
	BOOL _invalid;

}

@property (nonatomic,readonly) unsigned port;              //@synthesize port=_port - In the implementation block
-(unsigned)port;
-(id)initWithPort:(unsigned)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

