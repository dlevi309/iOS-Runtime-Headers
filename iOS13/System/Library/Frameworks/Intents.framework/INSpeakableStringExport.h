/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)spokenPhrase;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(id)arg1;
-(NSString *)vocabularyIdentifier;
-(void)setVocabularyIdentifier:(id)arg1;
-(void)setSpokenPhrase:(id)arg1;

@end

