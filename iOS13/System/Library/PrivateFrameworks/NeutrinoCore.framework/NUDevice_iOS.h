/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUDevice.h>

@class NURenderer;

@interface NUDevice_iOS : NUDevice {

	NURenderer* _renderer;

}
-(id)debugDescription;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)family;
-(BOOL)hasOpenGLSupport;
-(long long)_defaultSampleMode;
-(long long)_openGLVirtualScreen;
-(id)_newRenderer:(out id*)arg1 ;
-(id)_lowPriorityRenderer:(out id*)arg1 ;
-(id)_newRendererWithOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_newMetalRendererWithOptions:(id)arg1 ;
-(id)_newOpenGLRendererWithOptions:(id)arg1 error:(out id*)arg2 ;
@end

