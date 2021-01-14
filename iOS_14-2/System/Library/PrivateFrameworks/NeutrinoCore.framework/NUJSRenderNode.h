/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSRenderNodeExport.h>

@class NUJSImageGeometry, NUJSImageProperties, NUJSVideoProperties, NURenderNode;

@interface NUJSRenderNode : NUJSProxy <NUJSRenderNodeExport>

@property (readonly) NURenderNode * node; 
@property (readonly) NUJSImageGeometry * geometry; 
@property (readonly) NUJSImageProperties * imageProperties; 
@property (readonly) NUJSVideoProperties * videoProperties; 
-(NUJSImageGeometry *)geometry;
-(NURenderNode *)node;
-(NUJSImageProperties *)imageProperties;
-(NUJSVideoProperties *)videoProperties;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithNode:(id)arg1 context:(id)arg2 ;
@end

