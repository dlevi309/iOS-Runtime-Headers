/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@interface ICDocCamPDFGenerator : NSObject
+(id)fileManager;
+(id)fileQueue;
+(id)rootPDFFolderPath;
+(id)rootPDFFolderPathForPWAttachments;
+(id)folderPathForAttachmentIdentifier:(id)arg1 passwordProtected:(BOOL)arg2 ;
+(id)folderPathForAttachment:(id)arg1 ;
+(id)versionFolderPathForAttachment:(id)arg1 ;
+(id)versionPDFPathForAttachment:(id)arg1 ;
+(void)deletePDFFolderIfExistsForAttachment:(id)arg1 ;
+(id)pdfURLForAttachment:(id)arg1 ;
+(id)blockingGeneratePDFURLForAttachment:(id)arg1 withProgress:(id)arg2 error:(id*)arg3 ;
+(id)syncGeneratorQueue;
+(void)deletePDFForAttachmentIfExists:(id)arg1 ;
+(void)performPDFGenerationWithGenerator:(id)arg1 galleryModel:(id)arg2 progress:(id)arg3 ;
+(void)createEmptyPDFFileAtURLIFNecessaryForAttachment:(id)arg1 ;
+(void)deleteAllDocCamPDFs;
+(void)deleteAllDocCamPasswordProtectedPDFs;
+(void)generatePDFsIfNecessaryForGalleryAttachments:(id)arg1 displayWindow:(id)arg2 presentingViewController:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)blockingGeneratePDFDataForAttachment:(id)arg1 withProgress:(id)arg2 queue:(id)arg3 error:(id*)arg4 ;
@end

