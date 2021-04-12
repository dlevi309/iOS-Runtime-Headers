/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/


@interface DOCThumbnailRequest : NSObject {

	/*^block*/id _thumbnailGenerationRequiresDownloadHandler;

}

@property (nonatomic,copy) id thumbnailGenerationRequiresDownloadHandler;              //@synthesize thumbnailGenerationRequiresDownloadHandler=_thumbnailGenerationRequiresDownloadHandler - In the implementation block
+(id)iconRequestForURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
+(id)iconRequestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
+(id)requestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
-(void)cancel;
-(void)setThumbnailGenerationRequiresDownloadHandler:(id)arg1 ;
-(void)generateThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)thumbnailGenerationRequiresDownloadHandler;
@end

