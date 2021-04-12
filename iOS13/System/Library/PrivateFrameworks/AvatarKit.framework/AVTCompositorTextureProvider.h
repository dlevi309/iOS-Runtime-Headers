/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <libobjc.A.dylib/SCNMaterialPropertyTextureProvider.h>

@class AVTMemoji, AVTCompositor_GPU, AVTCompositorPipeline, NSString, NSMutableSet;

@interface AVTCompositorTextureProvider : NSObject <SCNMaterialPropertyTextureProvider> {

	AVTMemoji* _memoji;
	AVTCompositor_GPU* _compositor;
	AVTCompositorPipeline* _pipeline;
	NSString* _propertyName;
	BOOL _skinIsDirty;
	long long _componentDirtyMask;
	NSMutableSet* _helperTokens;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)newTextureForDevice:(id)arg1 ;
-(void)renderToTexture:(id)arg1 computeCommandHandler:(/*^block*/id)arg2 blitCommandHandler:(/*^block*/id)arg3 helper:(id)arg4 ;
-(id)initWithCompositor:(id)arg1 memoji:(id)arg2 propertyName:(id)arg3 ;
-(void)skinColorDidChange;
-(void)componentDidChangeForType:(long long)arg1 ;
@end

