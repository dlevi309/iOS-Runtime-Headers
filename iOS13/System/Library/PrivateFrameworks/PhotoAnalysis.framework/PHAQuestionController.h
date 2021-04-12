/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol OS_os_log;
@class PGManager, NSObject, NSUbiquitousKeyValueStore;

@interface PHAQuestionController : NSObject {

	PGManager* _graphManager;
	NSObject*<OS_os_log> _loggingConnection;
	NSUbiquitousKeyValueStore* _store;

}

@property (nonatomic,retain) PGManager * graphManager;                              //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,retain) NSUbiquitousKeyValueStore * store;                     //@synthesize store=_store - In the implementation block
-(NSUbiquitousKeyValueStore *)store;
-(void)setStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(PGManager *)graphManager;
-(void)setGraphManager:(PGManager *)arg1 ;
-(id)initWithGraphManager:(id)arg1 ;
-(BOOL)generateQuestionsWithOptions:(long long)arg1 limit:(unsigned long long)arg2 progress:(/*^block*/id)arg3 ;
-(id)selectedQuestionsFromSortedQuestionsByQuestionFactory:(id)arg1 withLimit:(unsigned long long)arg2 ;
-(void)assignScoreToQuestions:(id)arg1 ;
-(BOOL)persistQuestions:(id)arg1 ;
-(double)importanceOfFactory:(Class)arg1 ;
-(id)questionFactoriesForOptions:(long long)arg1 ;
-(id)allQuestionFactories;
-(void)_syncAnsweredQuestions;
-(void)_handleKVSQuestionsUpdateIfNeeded;
-(id)currentQuestionsKVSData;
-(void)removeCurrentKVSData;
-(NSObject*<OS_os_log>)loggingConnection;
@end

