/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsTextureLayout.h>

@class MTLDebugDevice, MTLTextureDescriptor;

@interface MTLDebugTextureLayout : MTLToolsTextureLayout {

	MTLDebugDevice* _debugDevice;
	MTLTextureDescriptor* _descriptor;

}

@property (nonatomic,readonly) MTLDebugDevice * debugDevice;                        //@synthesize debugDevice=_debugDevice - In the implementation block
@property (nonatomic,copy,readonly) MTLTextureDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(MTLTextureDescriptor *)descriptor;
-(void)dealloc;
-(id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(MTLDebugDevice *)debugDevice;
@end

