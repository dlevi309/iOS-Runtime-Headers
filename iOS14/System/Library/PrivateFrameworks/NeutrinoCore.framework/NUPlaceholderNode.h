/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderNode.h>

@interface NUPlaceholderNode : NURenderNode
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithInputs:(id)arg1 ;
-(BOOL)isPlaceholderNode;
@end

