/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIObject.h>
#import <libobjc.A.dylib/FxHostPrivateAPI.h>
#import <libobjc.A.dylib/FxRenderModelAPIPrivate.h>

@class NSString;

@interface OZFxPlugHostPrivateAPI : NSObject <PROAPIObject, FxHostPrivateAPI, FxRenderModelAPIPrivate> {

	OZFxPlugSharedBase* _plugin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlugin:(OZFxPlugSharedBase*)arg1 ;
-(float)blendingGamma;
-(BOOL)navigateToTime:(/*function pointer*/void**)arg1 ;
-(BOOL)giveEffectUIFocus;
-(id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundle:(id)arg4 ;
-(id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithIdentifier:(id)arg4 ;
-(id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithURL:(id)arg4 ;
-(void)pluginXPCConnectionBroken:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
@end

