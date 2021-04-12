/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLFence.h>

@protocol MTLDevice;
@class NSString, MTLIOAccelDevice;

@interface MTLIOAccelFence : _MTLObjectWithLabel <MTLFence> {

	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned _fenceIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 fenceIndex:(unsigned)arg2 ;
@end

