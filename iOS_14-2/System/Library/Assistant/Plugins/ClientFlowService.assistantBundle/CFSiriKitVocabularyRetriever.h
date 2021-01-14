/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface CFSiriKitVocabularyRetriever : NSObject {

	int _siriKitVocabNotificationToken;
	NSDictionary* _appContactVocabularyDictionary;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (assign) int siriKitVocabNotificationToken;                          //@synthesize siriKitVocabNotificationToken=_siriKitVocabNotificationToken - In the implementation block
@property (retain) NSDictionary * appContactVocabularyDictionary;              //@synthesize appContactVocabularyDictionary=_appContactVocabularyDictionary - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serialQueue;                   //@synthesize serialQueue=_serialQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)vocabularyStringsForAppBundleId:(id)arg1 vocabularyType:(long long)arg2 query:(id)arg3 ;
-(void)fetchContactVocabularyEntities;
-(BOOL)isValidInputString:(id)arg1 ;
-(NSDictionary *)appContactVocabularyDictionary;
-(void)setAppContactVocabularyDictionary:(NSDictionary *)arg1 ;
-(id)vocabularyEntryWithContactNamed:(id)arg1 forApp:(id)arg2 ;
-(int)siriKitVocabNotificationToken;
-(void)setSiriKitVocabNotificationToken:(int)arg1 ;
@end

