/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSImageTransformExport.h>

@class NUImageTransform;

@interface NUJSImageTransform : NUJSProxy <NUJSImageTransformExport>

@property (readonly) NUImageTransform * transform; 
-(id)description;
-(NUImageTransform *)transform;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)transformByScaleX:(double)arg1 scaleY:(double)arg2 ;
-(id)transformByTranslateX:(double)arg1 translateY:(double)arg2 ;
-(id)transformByRotateZ:(double)arg1 ;
-(id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
-(id)initWithImageTransform:(id)arg1 context:(id)arg2 ;
@end

