/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NURenderNode *)node;
-(NUJSImageProperties *)imageProperties;
-(NUJSImageGeometry *)geometry;
-(NUJSVideoProperties *)videoProperties;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithNode:(id)arg1 context:(id)arg2 ;
@end

