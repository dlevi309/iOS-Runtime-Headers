/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(MTLTextureDescriptor *)descriptor;
-(id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(MTLDebugDevice *)debugDevice;
@end

