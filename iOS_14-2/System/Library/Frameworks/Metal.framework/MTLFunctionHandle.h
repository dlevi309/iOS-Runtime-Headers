/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSString;


@protocol MTLFunctionHandle <NSObject>
@property (readonly) unsigned long long functionType; 
@property (readonly) NSString * name; 
@property (readonly) id<MTLDevice> device; 
@required
-(unsigned long long)functionType;
-(id<MTLDevice>)device;
-(NSString *)name;

@end

