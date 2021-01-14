/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString;


@protocol INSpeakableStringExport <NSObject,JSExport>
@property (nonatomic,retain) NSString * spokenPhrase; 
@property (nonatomic,retain) NSString * pronunciationHint; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * vocabularyIdentifier; 
@required
-(id)init;
-(NSString *)pronunciationHint;
-(void)setVocabularyIdentifier:(id)arg1;
-(NSString *)spokenPhrase;
-(void)setPronunciationHint:(id)arg1;
-(void)setSpokenPhrase:(id)arg1;
-(NSString *)vocabularyIdentifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)identifier;

@end

