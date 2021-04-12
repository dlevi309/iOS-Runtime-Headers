/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSURL *)baseURL;
-(NSURL *)URL;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id<FCWebArchiveSource>)webArchiveSource;
-(void)setWebArchiveSource:(id<FCWebArchiveSource>)arg1 ;
-(FCAssetHandle *)excerptAssetHandle;
-(id)initWithArticleID:(id)arg1 sourceURL:(id)arg2 webArchiveSource:(id)arg3 excerptAssetHandle:(id)arg4 ;
-(void)setExcerptAssetHandle:(FCAssetHandle *)arg1 ;
-(FCInterestToken *)webArchiveHoldToken;
-(void)setWebArchiveHoldToken:(FCInterestToken *)arg1 ;
@end

