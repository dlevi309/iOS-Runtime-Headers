/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@interface _INVocabularyValidator : NSObject
+(void)initialize;
-(void)determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_validatedItemsFromVocabularyObject:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 withItemFactory:(/*^block*/id)arg4 ;
-(void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(long long)arg2 ;
-(unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)arg1 ;
-(id)_intentsUsingVocabularyType:(long long)arg1 ;
-(id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 ;
-(void)_determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)validatedItemsFromVocabularySpeakables:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 ;
@end

