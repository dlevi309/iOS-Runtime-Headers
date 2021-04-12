/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICDrawingVersionedDocument, ICDrawing;

@interface ICAttachmentDrawingModel : ICAttachmentModel {

	ICDrawingVersionedDocument* _drawingDocument;
	BOOL _observingAttachment;

}

@property (assign,nonatomic) BOOL observingAttachment;              //@synthesize observingAttachment=_observingAttachment - In the implementation block
@property (nonatomic,readonly) ICDrawing * drawing; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)attachmentIsDeallocating:(id)arg1 ;
-(BOOL)supportsQuickLook;
-(void)startObservingAttachment;
-(void)stopObservingAttachment:(id)arg1 ;
-(BOOL)observingAttachment;
-(id)drawingDocument;
-(BOOL)hasPreviews;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)preferLocalPreviewImages;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg1 ;
-(BOOL)showThumbnailInNoteList;
-(void)setObservingAttachment:(BOOL)arg1 ;
-(void)drawingPreviewIsUpToDate;
-(CGAffineTransform)previewImageOrientationTransform;
-(id)previewImageURL;
-(ICDrawing *)drawing;
-(id)saveURL;
-(id)initWithAttachment:(id)arg1 ;
-(id)previewItemTitle;
-(id)previewItemURL;
-(long long)previewImageOrientation;
-(BOOL)canSaveURL;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(void)dealloc;
@end

