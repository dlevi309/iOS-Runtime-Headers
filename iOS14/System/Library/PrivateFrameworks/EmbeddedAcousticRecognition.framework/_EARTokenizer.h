/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARTokenizer : NSObject {

	BasicTextSanitizer* _sanitizer;
	shared_ptr<quasar::TextTokenizer>* _tokenizer;

}
+(unique_ptr<quasar::TextTokenizer, std::__1::default_delete<quasar::TextTokenizer> >*)tokenizerWithNcsRoot:(id)arg1 ;
-(id)tokenize:(id)arg1 ;
-(id)initWithNcsRoot:(id)arg1 ;
@end

