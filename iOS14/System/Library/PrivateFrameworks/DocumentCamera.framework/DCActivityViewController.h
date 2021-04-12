/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <ShareSheet/UIActivityViewController.h>

@class ICDocCamDocumentInfoCollection, ICDocCamImageCache;

@interface DCActivityViewController : UIActivityViewController {

	BOOL _ignoreAttachmentsForCopyToPasteboard;
	ICDocCamDocumentInfoCollection* _documentInfoCollection;
	ICDocCamImageCache* _imageCache;

}

@property (nonatomic,retain) ICDocCamDocumentInfoCollection * documentInfoCollection;              //@synthesize documentInfoCollection=_documentInfoCollection - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                                      //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard;                            //@synthesize ignoreAttachmentsForCopyToPasteboard=_ignoreAttachmentsForCopyToPasteboard - In the implementation block
-(void)_performActivity:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(ICDocCamImageCache *)imageCache;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(ICDocCamDocumentInfoCollection *)documentInfoCollection;
-(void)setDocumentInfoCollection:(ICDocCamDocumentInfoCollection *)arg1 ;
-(BOOL)inhibitPDFGenerationForActivityType:(id)arg1 ;
-(BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg1 documentInfoCollection:(id)arg2 ;
-(BOOL)ignoreAttachmentsForCopyToPasteboard;
-(id)activityTypesThatInhibitPDFGeneration;
-(void)setIgnoreAttachmentsForCopyToPasteboard:(BOOL)arg1 ;
@end

