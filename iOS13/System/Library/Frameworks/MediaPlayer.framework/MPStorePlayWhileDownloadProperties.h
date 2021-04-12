/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSArray, NSURL;

@interface MPStorePlayWhileDownloadProperties : NSObject {

	unsigned long long _downloadToken;
	NSString* _localFilePath;
	NSArray* _sinfs;
	NSURL* _sourceURL;

}

@property (assign,nonatomic) unsigned long long downloadToken;              //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,copy) NSString * localFilePath;                        //@synthesize localFilePath=_localFilePath - In the implementation block
@property (nonatomic,copy) NSArray * sinfs;                                 //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                               //@synthesize sourceURL=_sourceURL - In the implementation block
-(unsigned long long)downloadToken;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(void)setSinfs:(NSArray *)arg1 ;
-(NSArray *)sinfs;
-(NSString *)localFilePath;
-(void)setLocalFilePath:(NSString *)arg1 ;
@end

