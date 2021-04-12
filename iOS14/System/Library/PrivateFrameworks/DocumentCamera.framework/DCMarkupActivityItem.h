/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@class ICDocCamDocumentInfo, ICDocCamImageCache;

@interface DCMarkupActivityItem : NSObject {

	ICDocCamDocumentInfo* _documentInfo;
	ICDocCamImageCache* _imageCache;

}

@property (nonatomic,retain) ICDocCamDocumentInfo * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                  //@synthesize imageCache=_imageCache - In the implementation block
-(void)setDocumentInfo:(ICDocCamDocumentInfo *)arg1 ;
-(ICDocCamImageCache *)imageCache;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(ICDocCamDocumentInfo *)documentInfo;
-(id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2 ;
@end

