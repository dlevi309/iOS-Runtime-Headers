/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(void)updateAttachmentSize;
-(BOOL)shouldCropImage;
-(BOOL)supportsQuickLook;
-(BOOL)hasPreviews;
-(BOOL)showThumbnailInNoteList;
-(id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2 ;
-(BOOL)canConvertToHTMLForSharing;
-(CGSize)sizeByCroppingSize:(CGSize)arg1 ;
-(CGAffineTransform)previewImageOrientationTransform;
-(id)saveURL;
-(void)addLocation;
-(BOOL)supportsOCR;
-(BOOL)hasThumbnailImage;
-(id)previewItemTitle;
-(BOOL)supportsImageClassification;
-(long long)previewImageOrientation;
-(BOOL)canSaveURL;
-(void)updateFileBasedAttributes;
-(id)previewImageTypeUTI;
-(BOOL)needsFullSizePreview;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg1 ;
-(BOOL)canMarkup;
@end

