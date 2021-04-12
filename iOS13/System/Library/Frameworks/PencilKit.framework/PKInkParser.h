/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKInkParser : NSObject
+(id)dictionaryForInk:(id)arg1 name:(id)arg2 ;
+(CGImageRef)imageRefForTextureName:(id)arg1 ;
+(id)inkBehaviorsWithIdentifer:(id)arg1 version:(unsigned long long)arg2 ;
+(id)inkRenderingDescriptorWithDictionary:(id)arg1 ;
+(id)inkBehaviorVariantWithDictionary:(id)arg1 renderingDescriptor:(id)arg2 variant:(id)arg3 ;
+(id)plistDictionaryForInk:(id)arg1 ;
+(void)validateRenderingDescriptorDictionary:(id)arg1 ;
+(unique_ptr<PKFunction, std::__1::default_delete<PKFunction> >*)loadFunction:(id)arg1 ;
+(void)validateBehaviorVariantDictionary:(id)arg1 ;
+(vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> >*)loadOutput:(id)arg1 forBehavior:(id)arg2 ;
+(void)verifyParameters:(id)arg1 ;
+(void)validateFunctionDictionary:(id)arg1 ;
+(void)validatePiecewiseBezierFunction:(PKFunctionPiecewiseBezier*)arg1 ;
+(id)controlPointArrayForInkFunction:(id)arg1 ;
+(void)addFunctionsIfNecessaryForInk:(id)arg1 property:(unsigned long long)arg2 forDictionary:(id)arg3 ;
+(id)dictionaryForInkFunction:(id)arg1 ;
+(id)stringForInkInput:(unsigned long long)arg1 ;
+(id)stringForFunctionMask:(id)arg1 ;
+(id)inkBehaviorFromDictionary:(id)arg1 identifier:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 ;
+(id)inkBehaviorsWithIdentifer:(id)arg1 ;
@end

