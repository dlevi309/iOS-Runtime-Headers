/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <libobjc.A.dylib/MTLFunctionHandle.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLFunctionHandle : NSObject <MTLFunctionHandle> {

	unsigned long long _functionType;
	NSString* _name;
	id<MTLDevice> _device;

}

@property (readonly) unsigned long long functionType; 
@property (readonly) NSString * name; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)functionType;
-(id<MTLDevice>)device;
-(NSString *)name;
-(id)initWithFunctionType:(unsigned long long)arg1 name:(id)arg2 device:(id)arg3 ;
-(void)dealloc;
@end

