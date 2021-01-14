/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@protocol PMLMultiLabelClassifierProtocol;
@class SGQuickResponsesTransformerInstance;

@interface SGQuickResponsesModel : NSObject {

	id<PMLMultiLabelClassifierProtocol> _model;
	SGQuickResponsesTransformerInstance* _transformer;

}
+(BOOL)shouldSampleForLabel:(id)arg1 inLanguage:(id)arg2 isDynamicLabel:(BOOL)arg3 ;
+(id)labelOf:(id)arg1 inLanguage:(id)arg2 ;
+(id)transformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 ;
+(id)modelForLanguage:(id)arg1 mode:(unsigned long long)arg2 chunkPath:(id)arg3 plistPath:(id)arg4 ;
+(id)transformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
+(id)labelOf:(id)arg1 withLabeler:(id)arg2 ;
+(id)featuresOf:(id)arg1 withFeaturizer:(id)arg2 source:(id)arg3 ;
+(id)configForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
+(id)featuresOf:(id)arg1 inLanguage:(id)arg2 andMode:(unsigned long long)arg3 ;
+(id)modelForEntity:(id)arg1 type:(id)arg2 mode:(unsigned long long)arg3 language:(id)arg4 class:(Class)arg5 chunkPath:(id)arg6 plistPath:(id)arg7 ;
+(id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
+(void)setGlobalTransformerForTesting:(id)arg1 ;
-(id)config;
-(void)setTransformer:(id)arg1 ;
-(id)predict:(id)arg1 ;
-(id)featuresOf:(id)arg1 ;
-(id)labelOf:(id)arg1 ;
-(BOOL)shouldSampleForLabel:(id)arg1 isDynamicLabel:(BOOL)arg2 ;
-(id)initWithLazyMultiLabelModel:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 plistPath:(id)arg4 ;
@end

