/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id)initWithArticleID:(id)arg1 videoURL:(id)arg2 ;
@end

