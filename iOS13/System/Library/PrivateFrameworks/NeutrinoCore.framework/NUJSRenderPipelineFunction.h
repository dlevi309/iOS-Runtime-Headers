/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderPipelineFunction.h>

@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {

	NSDictionary* _params;
	NSString* _source;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)evaluate:(id)arg1 error:(out id*)arg2 ;
-(id)initWithParameters:(id)arg1 source:(id)arg2 ;
-(BOOL)isEqualToFunction:(id)arg1 ;
@end

