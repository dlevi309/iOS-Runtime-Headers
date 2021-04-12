/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(BOOL)shouldShowInContentInfoText;
-(BOOL)hasPreviews;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)preferLocalPreviewImages;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg1 ;
-(BOOL)showThumbnailInNoteList;
-(BOOL)providesStandaloneTitleForNote;
-(id)standaloneTitleForNote;
-(id)additionalIndexableTextContentInNote;
-(id)searchableTextContentInNote;
-(id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2 ;
-(BOOL)canConvertToHTMLForSharing;
-(id)correctedHardlinkURLFileExtensionForExtention:(id)arg1 ;
@end

