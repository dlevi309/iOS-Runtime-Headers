/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol OS_dispatch_queue;
@class NSObject, NSBundle, _INVocabularyValidator, NSString;

@interface _INVocabularyStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSBundle* _appBundle;
	_INVocabularyValidator* _validator;
	NSString* _appBundleID;
	NSString* _baseDirectoryPath;
	NSString* _appBundlePath;

}

@property (nonatomic,copy,readonly) NSString * baseDirectoryPath;              //@synthesize baseDirectoryPath=_baseDirectoryPath - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                             //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy) NSString * appBundlePath;                           //@synthesize appBundlePath=_appBundlePath - In the implementation block
+(id)_customVocabularyDirectory;
+(id)appDatastoreDirectoryForAppBundleID:(id)arg1 bundlePath:(id)arg2 ;
+(id)_globalClassQueue;
+(id)_hashOfAppPath:(id)arg1 ;
+(id)managerForBundleID:(id)arg1 bundlePath:(id)arg2 ;
+(id)_latestVocabularyStringsAt:(id)arg1 ;
+(void)enumerateVocabularyUsingBlock:(/*^block*/id)arg1 ;
+(id)savedCustomVocabularyOverviewDictionary;
+(void)_iterateVocabularyWithSummary:(id)arg1 optionalBlock:(/*^block*/id)arg2 ;
+(void)deleteAllUserVocabularyFromAllAppsAsync;
-(id)init;
-(NSString *)appBundleID;
-(id)_validator;
-(id)_appBundle;
-(id)_documentWithItems:(id)arg1 forIntentSlot:(id)arg2 ;
-(id)_baseDirectoryPathForIntentSlot:(id)arg1 ;
-(id)initWithBaseDirectory:(id)arg1 appBundleID:(id)arg2 appBundlePath:(id)arg3 ;
-(id)deleteVocabularyStoreItemAt:(id)arg1 ;
-(id)deleteIntentSlot:(id)arg1 ;
-(id)getPathToLatestVocabulary:(id*)arg1 pathDuringReading:(id*)arg2 sentVocabulary:(id*)arg3 forIntentSlot:(id)arg4 ;
-(id)deleteEverything;
-(void)_writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)checkIfSyncSlot:(id)arg1 isAllowedWithCompletion:(/*^block*/id)arg2 ;
-(void)writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAppBundleID:(NSString *)arg1 ;
-(NSString *)baseDirectoryPath;
-(NSString *)appBundlePath;
-(void)setAppBundlePath:(NSString *)arg1 ;
@end

