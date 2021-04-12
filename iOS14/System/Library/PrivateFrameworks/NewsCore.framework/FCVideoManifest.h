/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSURL, NSString;

@interface FCVideoManifest : NSObject {

	NSURL* _videoURL;
	NSString* _articleID;

}

@property (nonatomic,copy) NSString * articleID;              //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                //@synthesize videoURL=_videoURL - In the implementation block
-(id)init;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(NSURL *)videoURL;
-(id)initWithArticleID:(id)arg1 videoURL:(id)arg2 ;
@end

