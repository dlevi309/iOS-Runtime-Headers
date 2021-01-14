/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <libobjc.A.dylib/MTLDepthStencilStateSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilStateSPI> {

	id<MTLDevice> _device;
	NSString* _label;

}

@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (readonly) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (readonly) BOOL readsDepth; 
@property (readonly) BOOL writesDepth; 
@property (readonly) BOOL readsStencil; 
@property (readonly) BOOL writesStencil; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(NSString *)description;
-(BOOL)readsDepth;
-(BOOL)writesDepth;
-(BOOL)readsStencil;
-(BOOL)writesStencil;
-(id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2 ;
-(NSString *)label;
-(void)dealloc;
@end

