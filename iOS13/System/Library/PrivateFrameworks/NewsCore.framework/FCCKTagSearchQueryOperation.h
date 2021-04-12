/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSString, CKQueryCursor, NSArray, NSError;

@interface FCCKTagSearchQueryOperation : FCOperation {

	FCCKContentDatabase* _database;
	unsigned long long _resultsLimit;
	NSString* _searchString;
	long long _tagType;
	CKQueryCursor* _cursor;
	NSArray* _desiredKeys;
	NSString* _locale;
	/*^block*/id _queryCompletionHandler;
	NSString* _tagTypeString;
	NSArray* _resultRecords;
	CKQueryCursor* _resultCursor;
	NSError* _resultError;

}

@property (nonatomic,retain) NSString * tagTypeString;                     //@synthesize tagTypeString=_tagTypeString - In the implementation block
@property (nonatomic,retain) NSArray * resultRecords;                      //@synthesize resultRecords=_resultRecords - In the implementation block
@property (nonatomic,retain) CKQueryCursor * resultCursor;                 //@synthesize resultCursor=_resultCursor - In the implementation block
@property (nonatomic,retain) NSError * resultError;                        //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;               //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString * searchString;                        //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) long long tagType;                            //@synthesize tagType=_tagType - In the implementation block
@property (nonatomic,retain) CKQueryCursor * cursor;                       //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                          //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) NSString * locale;                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                      //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(CKQueryCursor *)cursor;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSString *)searchString;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(unsigned long long)resultsLimit;
-(NSArray *)desiredKeys;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(id)queryCompletionHandler;
-(void)performOperation;
-(NSError *)resultError;
-(void)setTagType:(long long)arg1 ;
-(long long)tagType;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(void)resetForRetry;
-(void)setResultError:(NSError *)arg1 ;
-(void)setResultCursor:(CKQueryCursor *)arg1 ;
-(void)setTagTypeString:(NSString *)arg1 ;
-(id)_constructTagSearchQuery;
-(void)setResultRecords:(NSArray *)arg1 ;
-(NSArray *)resultRecords;
-(CKQueryCursor *)resultCursor;
-(NSString *)tagTypeString;
@end

