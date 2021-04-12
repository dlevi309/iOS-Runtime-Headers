/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class _EARTokenizer;

@interface _EARTextNormalization : NSObject {

	_EARTokenizer* _tokenizer;
	unique_ptr<quasar::Munger, std::__1::default_delete<quasar::Munger> >* _munger;

}
-(id)init;
-(id)munge:(id)arg1 ;
-(id)tokenize:(id)arg1 ;
-(id)initWithNcsRoot:(id)arg1 ;
-(id)initWithNcsRoot:(id)arg1 mungeRuleFile:(id)arg2 ;
-(id)initWithNcsRoot:(id)arg1 mungeRules:(id)arg2 ;
-(id)initWithMungeRules:(id)arg1 ;
-(id)normalize:(id)arg1 ;
@end

