/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCContentContext, FCFlintHelper;
@class NSString, FCHeadline;

@interface FCOfflineArticleFetchOperation : FCMultiStepFetchOperation {

	id<FCContentContext> _context;
	id<FCFlintHelper> _flintHelper;
	NSString* _articleID;
	FCHeadline* _headline;
	id _thumbnailFetchedObject;
	id _contentFetchedObject;
	id _audioFetchedObject;

}

@property (nonatomic,retain) id<FCContentContext> context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFlintHelper> flintHelper;              //@synthesize flintHelper=_flintHelper - In the implementation block
@property (nonatomic,copy) NSString * articleID;                         //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) FCHeadline * headline;                      //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) id thumbnailFetchedObject;                  //@synthesize thumbnailFetchedObject=_thumbnailFetchedObject - In the implementation block
@property (nonatomic,retain) id contentFetchedObject;                    //@synthesize contentFetchedObject=_contentFetchedObject - In the implementation block
@property (nonatomic,retain) id audioFetchedObject;                      //@synthesize audioFetchedObject=_audioFetchedObject - In the implementation block
-(FCHeadline *)headline;
-(void)setHeadline:(FCHeadline *)arg1 ;
-(id<FCContentContext>)context;
-(NSString *)articleID;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleID:(id)arg3 ;
-(void)setFlintHelper:(id<FCFlintHelper>)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(id<FCFlintHelper>)flintHelper;
-(id)completeFetchOperation;
-(id)fetchHeadlineWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchThumbnailWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchContentWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchNarrativeTrackWithCompletion:(/*^block*/id)arg1 ;
-(void)setAudioFetchedObject:(id)arg1 ;
-(void)setThumbnailFetchedObject:(id)arg1 ;
-(void)setContentFetchedObject:(id)arg1 ;
-(id)thumbnailFetchedObject;
-(id)contentFetchedObject;
-(id)audioFetchedObject;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

