/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLCaptureScope.h>
@class NSString;


@protocol MTLCaptureScope <NSObject>
@property (copy) NSString * label; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@required
-(id<MTLDevice>)device;
-(void)beginScope;
-(void)endScope;
-(void)setLabel:(id)arg1;
-(id<MTLCommandQueue>)commandQueue;
-(NSString *)label;

@end


@protocol MTLDevice, MTLCommandQueue;
@class NSString;

@interface MTLCaptureScope : _MTLObjectWithLabel <MTLCaptureScope> {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (nonatomic,readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)beginScope;
-(void)endScope;
-(id<MTLCommandQueue>)commandQueue;
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 ;
@end

