/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderPipelineFunction.h>

@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {

	NSDictionary* _params;
	NSString* _source;

}
-(id)init;
-(id)description;
-(id)evaluate:(id)arg1 error:(out id*)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithParameters:(id)arg1 source:(id)arg2 ;
-(BOOL)isEqualToFunction:(id)arg1 ;
@end

