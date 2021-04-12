/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARCommandTagger : NSObject {

	unique_ptr<quasar::CommandTagger, std::__1::default_delete<quasar::CommandTagger> >* _tagger;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 usage:(long long)arg2 ;
-(id)commandTaggingFromRecognitionResult:(id)arg1 activeCommands:(id)arg2 ;
-(id)parameterTagForIndex:(long long)arg1 ;
-(id)commandPhraseTagForIndex:(long long)arg1 ;
-(BOOL)isParameterTag:(id)arg1 ;
-(BOOL)isCommandPhraseTag:(id)arg1 ;
@end

