/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@interface FigCaptureMachPortSendRight : NSObject {

	unsigned _port;
	BOOL _invalid;

}

@property (nonatomic,readonly) unsigned port;              //@synthesize port=_port - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(unsigned)port;
-(id)initWithPort:(unsigned)arg1 ;
@end

