/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/


@class ICDocCamDocumentInfo, ICDocCamImageCache;

@interface DCMarkupActivityItem : NSObject {

	ICDocCamDocumentInfo* _documentInfo;
	ICDocCamImageCache* _imageCache;

}

@property (nonatomic,retain) ICDocCamDocumentInfo * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                  //@synthesize imageCache=_imageCache - In the implementation block
-(ICDocCamImageCache *)imageCache;
-(ICDocCamDocumentInfo *)documentInfo;
-(void)setDocumentInfo:(ICDocCamDocumentInfo *)arg1 ;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2 ;
@end

