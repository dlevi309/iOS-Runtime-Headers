/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <libobjc.A.dylib/SCNMaterialPropertyTextureProvider.h>

@class AVTMemoji, AVTCompositor, AVTCompositorPipeline, NSString, NSMutableSet;

@interface AVTCompositorTextureProvider : NSObject <SCNMaterialPropertyTextureProvider> {

	AVTMemoji* _memoji;
	AVTCompositor* _compositor;
	AVTCompositorPipeline* _pipeline;
	NSString* _propertyName;
	BOOL _skinIsDirty;
	unsigned long long _componentDirtyMask;
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
-(void)componentDidChangeForTypes:(unsigned long long)arg1 ;
@end

