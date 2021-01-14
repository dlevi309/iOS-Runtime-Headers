/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLDevice;
@interface MTLMessageFilter : NSObject {

	id<MTLDevice> _device;
	unsigned long long _messageType;

}

@property (retain,readonly) id<MTLDevice> device;                 //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long messageType;              //@synthesize messageType=_messageType - In the implementation block
+(id)filter:(unsigned long long)arg1 device:(id)arg2 ;
-(unsigned long long)messageType;
-(id<MTLDevice>)device;
-(id)init:(unsigned long long)arg1 device:(id)arg2 ;
-(void)setDevice:(id<MTLDevice>)arg1 ;
@end

