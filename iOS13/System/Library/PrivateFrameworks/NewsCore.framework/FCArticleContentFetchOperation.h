/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCContentContext, FCFlintHelper;
@class NSString, FCInterestToken, FCHeldRecords, NTPBArticleRecord, FCArticleContentManifest, NSArray;

@interface FCArticleContentFetchOperation : FCMultiStepFetchOperation {

	id<FCContentContext> _context;
	id<FCFlintHelper> _flintHelper;
	NSString* _articleID;
	FCInterestToken* _webArchiveInterestToken;
	FCHeldRecords* _heldArticleRecords;
	NTPBArticleRecord* _articleRecord;
	FCArticleContentManifest* _contentManifest;
	NSArray* _flintResources;

}

@property (nonatomic,retain) id<FCContentContext> context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFlintHelper> flintHelper;                           //@synthesize flintHelper=_flintHelper - In the implementation block
@property (nonatomic,retain) NSString * articleID;                                    //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) FCInterestToken * webArchiveInterestToken;               //@synthesize webArchiveInterestToken=_webArchiveInterestToken - In the implementation block
@property (nonatomic,retain) FCHeldRecords * heldArticleRecords;                      //@synthesize heldArticleRecords=_heldArticleRecords - In the implementation block
@property (nonatomic,retain) NTPBArticleRecord * articleRecord;                       //@synthesize articleRecord=_articleRecord - In the implementation block
@property (nonatomic,retain) FCArticleContentManifest * contentManifest;              //@synthesize contentManifest=_contentManifest - In the implementation block
@property (nonatomic,retain) NSArray * flintResources;                                //@synthesize flintResources=_flintResources - In the implementation block
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id<FCFlintHelper>)flintHelper;
-(void)setFlintHelper:(id<FCFlintHelper>)arg1 ;
-(NTPBArticleRecord *)articleRecord;
-(id)completeFetchOperation;
-(id)fetchContentManifestWithCompletion:(/*^block*/id)arg1 ;
-(void)setHeldArticleRecords:(FCHeldRecords *)arg1 ;
-(FCHeldRecords *)heldArticleRecords;
-(void)setArticleRecord:(NTPBArticleRecord *)arg1 ;
-(void)setContentManifest:(FCArticleContentManifest *)arg1 ;
-(FCArticleContentManifest *)contentManifest;
-(id)fetchWebExcerptWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchWebArchiveWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchFlintDocumentWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchFlintResourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)setWebArchiveInterestToken:(FCInterestToken *)arg1 ;
-(void)setFlintResources:(NSArray *)arg1 ;
-(FCInterestToken *)webArchiveInterestToken;
-(NSArray *)flintResources;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleID:(id)arg3 ;
@end

