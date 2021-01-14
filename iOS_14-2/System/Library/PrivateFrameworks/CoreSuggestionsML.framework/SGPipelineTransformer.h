/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSArray, NSString;

@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol> {

	NSArray* _transformers;

}

@property (retain) NSArray * transformers;                          //@synthesize transformers=_transformers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withTransformers:(id)arg1 ;
-(NSArray *)transformers;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)transform:(id)arg1 stopAfterTransformerWithIndex:(unsigned long long)arg2 ;
-(id)initWithTransformers:(id)arg1 ;
-(BOOL)isEqualToPipelineTransformer:(id)arg1 ;
-(void)setTransformers:(NSArray *)arg1 ;
@end

