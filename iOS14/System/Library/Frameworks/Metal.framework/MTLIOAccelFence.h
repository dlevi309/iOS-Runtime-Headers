/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLFence.h>
#import <libobjc.A.dylib/MTLFenceSPI.h>

@protocol MTLDevice;
@class MTLIOAccelDevice, NSString;

@interface MTLIOAccelFence : _MTLFence <MTLFenceSPI> {

	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned _fenceIndex;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 fenceIndex:(unsigned)arg2 ;
-(id<MTLDevice>)device;
-(void)dealloc;
@end

