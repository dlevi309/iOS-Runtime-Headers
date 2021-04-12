/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

