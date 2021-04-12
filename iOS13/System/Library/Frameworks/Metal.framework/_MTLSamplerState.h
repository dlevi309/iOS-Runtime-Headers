/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <libobjc.A.dylib/MTLSamplerStateSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLSamplerState : NSObject <MTLSamplerStateSPI> {

	id<MTLDevice> _device;
	NSString* _label;
	unsigned long long _resourceIndex;

}

@property (readonly) id<MTLDevice> device;                                  //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long resourceIndex;              //@synthesize resourceIndex=_resourceIndex - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(NSString *)label;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2 ;
@end

