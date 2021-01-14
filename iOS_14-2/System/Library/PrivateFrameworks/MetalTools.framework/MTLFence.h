/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class NSString;


@protocol MTLFence <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@required
-(id<MTLDevice>)device;
-(void)setLabel:(id)arg1;
-(NSString *)label;

@end

