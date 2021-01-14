/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLDevice>)device;
-(void)endScope;
-(void)setLabel:(id)arg1;
-(void)beginScope;
-(NSString *)label;

@end


@protocol MTLDevice, MTLCommandQueue;
@class NSString;

@interface MTLCaptureScope : _MTLObjectWithLabel <MTLCaptureScope> {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;

}

@property (copy) NSString * label; 
@property (nonatomic,readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLDevice>)device;
-(void)endScope;
-(void)beginScope;
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 ;
-(void)dealloc;
@end

