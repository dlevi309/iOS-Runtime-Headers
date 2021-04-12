/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/_INVocabularyConnection.h>

@interface INVocabularyUpdater : _INVocabularyConnection
+(id)_sharedAppInstance;
+(void)clearAllCustomVocabulary;
-(void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(/*^block*/id)arg3 ;
-(void)setCustomPhotoAlbumNames:(id)arg1 ;
@end

