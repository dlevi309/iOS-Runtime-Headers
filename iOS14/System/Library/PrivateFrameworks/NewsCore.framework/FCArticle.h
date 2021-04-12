/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCHeadlineProviding, OS_dispatch_group;
@class NSString, FCArticleContentManifest, NSObject, NSError, FCFetchOperation;

@interface FCArticle : NSObject {

	NSString* _articleID;
	id<FCHeadlineProviding> _headline;
	FCArticleContentManifest* _contentManifest;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSError* _fetchError;
	FCFetchOperation* _headlineFetchOperation;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;                 //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSError * fetchError;                                    //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,retain) FCFetchOperation * headlineFetchOperation;               //@synthesize headlineFetchOperation=_headlineFetchOperation - In the implementation block
@property (nonatomic,retain) id<FCHeadlineProviding> headline;                        //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) FCArticleContentManifest * contentManifest;              //@synthesize contentManifest=_contentManifest - In the implementation block
@property (nonatomic,readonly) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
-(id<FCHeadlineProviding>)headline;
-(id)init;
-(FCArticleContentManifest *)contentManifest;
-(void)setHeadline:(id<FCHeadlineProviding>)arg1 ;
-(NSError *)fetchError;
-(NSString *)articleID;
-(void)performBlockWhenContentManifestIsLoaded:(/*^block*/id)arg1 ;
-(void)performBlockWhenFullyLoaded:(/*^block*/id)arg1 ;
-(void)setFetchError:(NSError *)arg1 ;
-(id)initWithContext:(id)arg1 headline:(id)arg2 ;
-(void)setHeadlineFetchOperation:(FCFetchOperation *)arg1 ;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(void)setContentManifest:(FCArticleContentManifest *)arg1 ;
-(id)initWithContext:(id)arg1 articleID:(id)arg2 forceArticleUpdate:(BOOL)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 ;
-(FCFetchOperation *)headlineFetchOperation;
-(void)dealloc;
@end

