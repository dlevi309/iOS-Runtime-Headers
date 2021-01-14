/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCWebArchiveSource;
@class FCAssetHandle, NSString, NSURL, FCInterestToken;

@interface FCWebManifest : NSObject {

	FCAssetHandle* _excerptAssetHandle;
	NSString* _articleID;
	NSURL* _sourceURL;
	id<FCWebArchiveSource> _webArchiveSource;
	FCInterestToken* _webArchiveHoldToken;

}

@property (nonatomic,copy) NSString * articleID;                                   //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                    //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) id<FCWebArchiveSource> webArchiveSource;              //@synthesize webArchiveSource=_webArchiveSource - In the implementation block
@property (nonatomic,retain) FCAssetHandle * excerptAssetHandle;                   //@synthesize excerptAssetHandle=_excerptAssetHandle - In the implementation block
@property (nonatomic,retain) FCInterestToken * webArchiveHoldToken;                //@synthesize webArchiveHoldToken=_webArchiveHoldToken - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURL * baseURL; 
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSURL *)baseURL;
-(id)init;
-(id)initWithArticleID:(id)arg1 sourceURL:(id)arg2 webArchiveSource:(id)arg3 excerptAssetHandle:(id)arg4 ;
-(NSString *)articleID;
-(FCAssetHandle *)excerptAssetHandle;
-(void)setExcerptAssetHandle:(FCAssetHandle *)arg1 ;
-(FCInterestToken *)webArchiveHoldToken;
-(void)setWebArchiveHoldToken:(FCInterestToken *)arg1 ;
-(void)setWebArchiveSource:(id<FCWebArchiveSource>)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(NSURL *)URL;
-(id<FCWebArchiveSource>)webArchiveSource;
@end

