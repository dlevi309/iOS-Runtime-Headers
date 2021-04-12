/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHImportAssetDataRequest, NSURL;

@interface PHImportAssetDataResponse : NSObject {

	PHImportAssetDataRequest* _request;
	/*^block*/id _completionHandler;
	NSURL* _fileURL;

}

@property (nonatomic,retain) PHImportAssetDataRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                 //@synthesize fileURL=_fileURL - In the implementation block
+(id)responseWithDataRequest:(id)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setRequest:(PHImportAssetDataRequest *)arg1 ;
-(PHImportAssetDataRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
@end

