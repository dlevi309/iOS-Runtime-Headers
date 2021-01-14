/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

@class NSString;


@protocol MTLCommandEncoder <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@required
-(void)pushDebugGroup:(id)arg1;
-(id<MTLDevice>)device;
-(void)popDebugGroup;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg1;
-(void)setLabel:(id)arg1;
-(NSString *)label;

@end

