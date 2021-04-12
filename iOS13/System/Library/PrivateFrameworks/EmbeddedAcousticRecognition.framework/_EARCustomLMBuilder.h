/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARCustomLMBuilder : NSObject {

	unique_ptr<quasar::CustomLMBuilder, std::__1::default_delete<quasar::CustomLMBuilder> >* _customLMBuilder;
	unique_ptr<sdapi::SdapiTokenizer, std::__1::default_delete<sdapi::SdapiTokenizer> >* _tokenizer;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)getFstGrammar:(id)arg1 overrideFolder:(id)arg2 weight:(float)arg3 errorOut:(id*)arg4 ;
@end

