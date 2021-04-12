/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSDictionary, NSArray, FCHeldRecords;

@interface FCWidgetConfigDataOperation : FCOperation {

	id<FCContentContext> _context;
	NSDictionary* _widgetConfiguration;
	/*^block*/id _widgetConfigDataCompletionHandler;
	NSArray* _recordSources;
	NSDictionary* _recordSourcesByRecordType;
	FCHeldRecords* _cachedRecords;
	NSDictionary* _resultWidgetSectionConfigDictionary;
	NSArray* _resultArticleIDs;
	NSArray* _resultArticleListIDs;
	NSDictionary* _resultHeldRecordsByType;

}

@property (nonatomic,retain) NSArray * recordSources;                                         //@synthesize recordSources=_recordSources - In the implementation block
@property (nonatomic,retain) NSDictionary * recordSourcesByRecordType;                        //@synthesize recordSourcesByRecordType=_recordSourcesByRecordType - In the implementation block
@property (nonatomic,retain) FCHeldRecords * cachedRecords;                                   //@synthesize cachedRecords=_cachedRecords - In the implementation block
@property (nonatomic,retain) NSDictionary * resultWidgetSectionConfigDictionary;              //@synthesize resultWidgetSectionConfigDictionary=_resultWidgetSectionConfigDictionary - In the implementation block
@property (nonatomic,retain) NSArray * resultArticleIDs;                                      //@synthesize resultArticleIDs=_resultArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultArticleListIDs;                                  //@synthesize resultArticleListIDs=_resultArticleListIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;                          //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSDictionary * widgetConfiguration;                                //@synthesize widgetConfiguration=_widgetConfiguration - In the implementation block
@property (nonatomic,copy) id widgetConfigDataCompletionHandler;                              //@synthesize widgetConfigDataCompletionHandler=_widgetConfigDataCompletionHandler - In the implementation block
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)performOperation;
-(FCHeldRecords *)cachedRecords;
-(void)setCachedRecords:(FCHeldRecords *)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(NSArray *)recordSources;
-(void)setRecordSources:(NSArray *)arg1 ;
-(void)setRecordSourcesByRecordType:(NSDictionary *)arg1 ;
-(NSDictionary *)resultHeldRecordsByType;
-(id)_recordSourceForRecordType:(id)arg1 ;
-(void)_finalizeResultFromCachedRecords;
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(NSDictionary *)recordSourcesByRecordType;
-(NSDictionary *)widgetConfiguration;
-(void)setWidgetConfiguration:(NSDictionary *)arg1 ;
-(void)setWidgetConfigDataCompletionHandler:(id)arg1 ;
-(id)widgetConfigDataCompletionHandler;
-(void)_collectRecordsFromWidgetConfigDictionary:(id)arg1 ;
-(NSDictionary *)resultWidgetSectionConfigDictionary;
-(NSArray *)resultArticleIDs;
-(NSArray *)resultArticleListIDs;
-(void)setResultWidgetSectionConfigDictionary:(NSDictionary *)arg1 ;
-(void)setResultArticleListIDs:(NSArray *)arg1 ;
-(void)setResultArticleIDs:(NSArray *)arg1 ;
@end

