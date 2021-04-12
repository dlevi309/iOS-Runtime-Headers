/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

