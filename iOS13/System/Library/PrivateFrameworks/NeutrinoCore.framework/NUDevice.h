/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NUDevice.h>

@protocol NUDevice <NSObject>
@property (getter=isSplitScreen,nonatomic,readonly) BOOL splitScreen; 
@required
-(BOOL)isSplitScreen;

@end


@protocol OS_dispatch_queue, MTLDevice;
@class NURenderer, NSObject, NSString;

@interface NUDevice : NSObject <NUDevice> {

	NURenderer* _renderer;
	NURenderer* _lowPriorityRenderer;
	NSObject*<OS_dispatch_queue> _queue;
	long long _defaultSampleMode;
	NSString* _name;
	NSString* _model;
	id<MTLDevice> _metalDevice;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasMetalSupport; 
@property (nonatomic,readonly) BOOL hasOpenGLSupport; 
@property (nonatomic,readonly) long long openGLVirtualScreen; 
@property (nonatomic,readonly) id<NURenderer> renderer;                         //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<NURenderer> lowPriorityRenderer;              //@synthesize lowPriorityRenderer=_lowPriorityRenderer - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> metalDevice;                       //@synthesize metalDevice=_metalDevice - In the implementation block
@property (nonatomic,readonly) BOOL shouldRenderUsingMetal; 
@property (nonatomic,readonly) BOOL shouldRenderUsingOpenGL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long family; 
@property (nonatomic,readonly) long long defaultSampleMode; 
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(void)clearCaches;
-(NSString *)model;
-(unsigned long long)family;
-(id<MTLDevice>)metalDevice;
-(id<NURenderer>)renderer;
-(long long)_preferredSampleMode;
-(id)renderer:(out id*)arg1 ;
-(id)lowPriorityRenderer:(out id*)arg1 ;
-(BOOL)hasMetalSupport;
-(BOOL)hasOpenGLSupport;
-(long long)openGLVirtualScreen;
-(long long)defaultSampleMode;
-(long long)_defaultSampleMode;
-(id)initWithName:(id)arg1 model:(id)arg2 metalDevice:(id)arg3 ;
-(long long)_openGLVirtualScreen;
-(long long)_computeDefaultSampleMode;
-(BOOL)shouldRenderUsingMetal;
-(BOOL)shouldRenderUsingOpenGL;
-(id)_renderer:(out id*)arg1 ;
-(BOOL)shouldLogRendererUsed;
-(id)_newRenderer:(out id*)arg1 ;
-(id)_lowPriorityRenderer:(out id*)arg1 ;
-(id)_newLowPriorityRenderer:(out id*)arg1 ;
-(id<NURenderer>)lowPriorityRenderer;
@end

