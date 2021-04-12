/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUDevice.h>

@class NURenderer;

@interface NUDevice_iOS : NUDevice {

	NURenderer* _renderer;

}
-(id)debugDescription;
-(unsigned long long)family;
-(id)initWithName:(id)arg1 ;
-(BOOL)hasOpenGLSupport;
-(long long)_defaultSampleMode;
-(long long)_openGLVirtualScreen;
-(id)_newRenderer:(out id*)arg1 ;
-(id)_lowPriorityRenderer:(out id*)arg1 ;
-(id)_newNoIntermediatesRenderer:(out id*)arg1 ;
-(id)_newLowPriorityNoIntermediatesRenderer:(out id*)arg1 ;
-(id)_newRendererWithOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_newMetalRendererWithOptions:(id)arg1 ;
-(id)_newOpenGLRendererWithOptions:(id)arg1 error:(out id*)arg2 ;
@end

