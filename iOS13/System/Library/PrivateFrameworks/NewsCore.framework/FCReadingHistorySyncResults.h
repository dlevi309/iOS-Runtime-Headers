/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray;

@interface FCReadingHistorySyncResults : NSObject {

	NSArray* _modifiedArticleIDs;
	NSArray* _deletedArticleIDs;
	NSArray* _newlyCreatedArticleIDs;

}

@property (nonatomic,retain) NSArray * modifiedArticleIDs;                  //@synthesize modifiedArticleIDs=_modifiedArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * deletedArticleIDs;                   //@synthesize deletedArticleIDs=_deletedArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * newlyCreatedArticleIDs;              //@synthesize newlyCreatedArticleIDs=_newlyCreatedArticleIDs - In the implementation block
-(id)initWithModifiedArticleIDs:(id)arg1 deletedArticleIDs:(id)arg2 newArticleIDs:(id)arg3 ;
-(NSArray *)modifiedArticleIDs;
-(void)setModifiedArticleIDs:(NSArray *)arg1 ;
-(NSArray *)deletedArticleIDs;
-(void)setDeletedArticleIDs:(NSArray *)arg1 ;
-(NSArray *)newlyCreatedArticleIDs;
-(void)setNewlyCreatedArticleIDs:(NSArray *)arg1 ;
@end

