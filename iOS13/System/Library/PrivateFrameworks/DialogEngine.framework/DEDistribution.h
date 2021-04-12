/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString;

@interface DEDistribution : NSObject {

	NSString* _name;
	NSString* _publicationURL;
	NSString* _downloadURLPrefix;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * publicationURL;                 //@synthesize publicationURL=_publicationURL - In the implementation block
@property (nonatomic,retain) NSString * downloadURLPrefix;              //@synthesize downloadURLPrefix=_downloadURLPrefix - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)publicationURL;
-(void)setPublicationURL:(NSString *)arg1 ;
-(NSString *)downloadURLPrefix;
-(void)setDownloadURLPrefix:(NSString *)arg1 ;
@end

