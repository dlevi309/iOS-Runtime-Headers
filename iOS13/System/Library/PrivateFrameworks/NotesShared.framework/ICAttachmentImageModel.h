/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(id)previewItemTitle;
-(BOOL)hasThumbnailImage;
-(id)saveURL;
-(BOOL)hasPreviews;
-(BOOL)showThumbnailInNoteList;
-(id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2 ;
-(BOOL)canConvertToHTMLForSharing;
-(long long)previewImageOrientation;
-(BOOL)canSaveURL;
-(id)previewImageTypeUTI;
-(CGAffineTransform)previewImageOrientationTransform;
-(void)updateFileBasedAttributes;
-(void)addLocation;
-(BOOL)supportsOCR;
-(BOOL)supportsImageClassification;
-(BOOL)needsFullSizePreview;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg1 ;
-(BOOL)canMarkup;
-(void)updateAttachmentSize;
-(BOOL)shouldCropImage;
-(BOOL)supportsQuickLook;
-(CGSize)sizeByCroppingSize:(CGSize)arg1 ;
@end

