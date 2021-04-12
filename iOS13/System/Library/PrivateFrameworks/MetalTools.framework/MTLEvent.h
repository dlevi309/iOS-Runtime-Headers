/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class NSString;


@protocol MTLEvent <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@required
-(id<MTLDevice>)device;
-(void)setLabel:(id)arg1;
-(NSString *)label;

@end

