/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSString, _INVocabularyStoreManager, _INVocabularyGenerationDocument;

@interface _INSyncTransaction : NSObject {

	NSString* _pathToLatestVocabularyDocument;
	NSString* _pathToStagedVocabularyDocument;
	NSString* _pathToSentVocabularyDocument;
	NSString* _syncSlot;
	_INVocabularyStoreManager* _storeManager;
	BOOL _deleteExistingVocabulary;
	BOOL _vocabularyUpdatesEnabled;
	BOOL _fullResetRequired;
	_INVocabularyGenerationDocument* _latest;
	_INVocabularyGenerationDocument* _sent;

}

@property (nonatomic,readonly) _INVocabularyGenerationDocument * latestVocabularyDocument;              //@synthesize latest=_latest - In the implementation block
@property (nonatomic,readonly) _INVocabularyGenerationDocument * sentVocabularyDocument;                //@synthesize sent=_sent - In the implementation block
@property (assign,nonatomic) BOOL fullResetRequired;                                                    //@synthesize fullResetRequired=_fullResetRequired - In the implementation block
+(id)beginTransactionForBundleID:(id)arg1 bundlePath:(id)arg2 syncSlot:(id)arg3 ;
-(void)_beginTransaction;
-(void)_saveAndCleanup;
-(_INVocabularyGenerationDocument *)sentVocabularyDocument;
-(id)_emptySentDocument;
-(id)_initWithVocabularyManager:(id)arg1 syncSlot:(id)arg2 deleteExistingVocabulary:(BOOL)arg3 ;
-(void)endTransactionWithFinalAnchor:(id)arg1 ;
-(void)_deleteInvalidSavedData;
-(BOOL)_isMissingLatestFileError:(id)arg1 ;
-(_INVocabularyGenerationDocument *)latestVocabularyDocument;
-(BOOL)fullResetRequired;
-(void)setFullResetRequired:(BOOL)arg1 ;
-(id)calculateDiff;
@end

