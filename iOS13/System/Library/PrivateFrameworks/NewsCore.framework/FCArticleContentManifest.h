/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contentType;
-(void)setContentType:(unsigned long long)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id)initWithArticleID:(id)arg1 flintManifest:(id)arg2 ;
-(id)initWithContext:(id)arg1 articleRecord:(id)arg2 ;
-(FCWebManifest *)webManifest;
-(FCFlintManifest *)flintManifest;
-(id)initWithArticleID:(id)arg1 webManifest:(id)arg2 ;
-(id)initWithArticleID:(id)arg1 videoManifest:(id)arg2 ;
-(id)initWithArticleID:(id)arg1 contentType:(unsigned long long)arg2 ;
-(void)setWebManifest:(FCWebManifest *)arg1 ;
-(void)setFlintManifest:(FCFlintManifest *)arg1 ;
-(FCVideoManifest *)videoManifest;
-(void)setVideoManifest:(FCVideoManifest *)arg1 ;
@end

