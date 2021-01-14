/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSURL;

@interface DEUpdaterURLParams : NSObject {

	NSString* _distribution;
	NSString* _publicationURLSrc;
	NSURL* _publicationURL;
	NSURL* _downloadURLPrefix;

}

@property (nonatomic,retain) NSString * distribution;                   //@synthesize distribution=_distribution - In the implementation block
@property (nonatomic,retain) NSString * publicationURLSrc;              //@synthesize publicationURLSrc=_publicationURLSrc - In the implementation block
@property (nonatomic,retain) NSURL * publicationURL;                    //@synthesize publicationURL=_publicationURL - In the implementation block
@property (nonatomic,retain) NSURL * downloadURLPrefix;                 //@synthesize downloadURLPrefix=_downloadURLPrefix - In the implementation block
-(void)setDistribution:(NSString *)arg1 ;
-(NSString *)distribution;
-(NSString *)publicationURLSrc;
-(void)setPublicationURLSrc:(NSString *)arg1 ;
-(NSURL *)publicationURL;
-(void)setPublicationURL:(NSURL *)arg1 ;
-(NSURL *)downloadURLPrefix;
-(void)setDownloadURLPrefix:(NSURL *)arg1 ;
@end

