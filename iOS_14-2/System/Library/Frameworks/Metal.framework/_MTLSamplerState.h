/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <libobjc.A.dylib/MTLSamplerStateSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLSamplerState : NSObject <MTLSamplerStateSPI> {

	id<MTLDevice> _device;
	NSString* _label;
	unsigned long long _pixelFormat;
	unsigned long long _resourceIndex;
	unsigned long long _gpuAddress;

}

@property (readonly) id<MTLDevice> device;                                    //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long pixelFormat;                //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long resourceIndex;              //@synthesize resourceIndex=_resourceIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long gpuAddress;                 //@synthesize gpuAddress=_gpuAddress - In the implementation block
@property (readonly) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)resourceIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(NSString *)description;
-(id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2 ;
-(unsigned long long)gpuAddress;
-(NSString *)label;
-(void)dealloc;
@end

