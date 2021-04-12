/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol MTLDevice, MTLLibrary;
@class NSArray, NSMutableDictionary;

@interface ARUIBlurRenderState : NSObject {

	NSArray* _supportedRadii;
	NSMutableDictionary* _renderStates;
	id<MTLDevice> _device;
	id<MTLLibrary> _library;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)renderPipelineDescriptorFromLibrary:(id)arg1 forRadius:(long long)arg2 ;
-(id)renderPipelineStateForBlurRadius:(long long)arg1 error:(long long*)arg2 ;
-(id)_renderPipelineStateForKey:(id)arg1 ;
@end

