/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, FCWebManifest, FCFlintManifest, FCVideoManifest;

@interface FCArticleContentManifest : NSObject {

	NSString* _articleID;
	unsigned long long _contentType;
	FCWebManifest* _webManifest;
	FCFlintManifest* _flintManifest;
	FCVideoManifest* _videoManifest;

}

@property (nonatomic,copy) NSString * articleID;                           //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;               //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) FCWebManifest * webManifest;                  //@synthesize webManifest=_webManifest - In the implementation block
@property (nonatomic,retain) FCFlintManifest * flintManifest;              //@synthesize flintManifest=_flintManifest - In the implementation block
@property (nonatomic,retain) FCVideoManifest * videoManifest;              //@synthesize videoManifest=_videoManifest - In the implementation block
-(FCVideoManifest *)videoManifest;
-(unsigned long long)contentType;
-(void)setWebManifest:(FCWebManifest *)arg1 ;
-(id)initWithArticleID:(id)arg1 webManifest:(id)arg2 ;
-(void)setVideoManifest:(FCVideoManifest *)arg1 ;
-(NSString *)articleID;
-(id)initWithArticleID:(id)arg1 flintManifest:(id)arg2 ;
-(void)setArticleID:(NSString *)arg1 ;
-(id)initWithArticleID:(id)arg1 videoManifest:(id)arg2 ;
-(unsigned long long)hash;
-(void)setContentType:(unsigned long long)arg1 ;
-(id)initWithArticleID:(id)arg1 contentType:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 articleRecord:(id)arg2 ;
-(void)setFlintManifest:(FCFlintManifest *)arg1 ;
-(FCFlintManifest *)flintManifest;
-(FCWebManifest *)webManifest;
-(BOOL)isEqual:(id)arg1 ;
@end

