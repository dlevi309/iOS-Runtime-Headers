/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id<MTLDevice>)device;
-(NSString *)label;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)readsDepth;
-(BOOL)writesDepth;
-(BOOL)readsStencil;
-(BOOL)writesStencil;
-(id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2 ;
@end

