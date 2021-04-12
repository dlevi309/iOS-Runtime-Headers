/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/


@protocol ICDocCamExtractedDocumentControllerDelegate <NSObject>
@optional
-(CGSize*)extractedDocumentControllerImageSizeForDocument:(id)arg1;
-(id)extractedDocumentControllerImageForDocument:(id)arg1;
-(id)extractedDocumentControllerUncroppedImageForDocument:(id)arg1;
-(id)extractedDocumentControllerUndoManager;
-(id)extractedDocumentControllerTitle;
-(void)extractedDocumentControllerDidApplyFilter:(short)arg1 forDocument:(id)arg2;
-(void)extractedDocumentControllerDidTapAddImage;
-(void)extractedDocumentController:(id)arg1 didTapRecrop:(id)arg2 index:(long long)arg3;
-(void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1 scanDataDelegate:(id)arg2;
-(void)extractedDocumentController:(id)arg1 shareDocument:(id)arg2 sender:(id)arg3;
-(void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg1;
-(id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg1;
-(void)extractedDocumentControllerLoadThumbnailForDocument:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3;
-(void)extractedDocumentControllerDidRotateDocument:(id)arg1;
-(void)extractedDocumentControllerDidDeleteDocument:(id)arg1;
-(void)extractedDocumentController:(id)arg1 startMarkupOnDocument:(id)arg2 inkStyle:(unsigned long long)arg3 startPresentBlock:(/*^block*/id)arg4 dismissCompletionBlock:(/*^block*/id)arg5;
-(void)extractedDocumentControllerDidChangeTitle:(id)arg1;
-(void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)arg1 sourceRect:(CGRect)arg2 sourceView:(id)arg3;
-(void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)arg1;
-(void)extractedDocumentControllerDidMovePageFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 forDocument:(id)arg3;
-(void)extractedDocumentControllerDidDismiss;

@required
-(void)extractedDocumentControllerDidTapRetake:(unsigned long long)arg1;
-(void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1;

@end

