/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
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
-(ICDocCamImageCache *)imageCache;
-(BOOL)_canShowWhileLocked;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(ICDocCamDocumentInfoCollection *)documentInfoCollection;
-(void)setDocumentInfoCollection:(ICDocCamDocumentInfoCollection *)arg1 ;
-(BOOL)inhibitPDFGenerationForActivityType:(id)arg1 ;
-(BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg1 documentInfoCollection:(id)arg2 ;
-(BOOL)ignoreAttachmentsForCopyToPasteboard;
-(id)activityTypesThatInhibitPDFGeneration;
-(void)setIgnoreAttachmentsForCopyToPasteboard:(BOOL)arg1 ;
@end

