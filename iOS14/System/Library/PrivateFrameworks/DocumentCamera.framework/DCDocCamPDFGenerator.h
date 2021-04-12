/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@interface DCDocCamPDFGenerator : NSObject
+(id)fileManager;
+(void)initialize;
+(id)fileQueue;
+(void)applicationWillTerminate:(id)arg1 ;
+(id)rootPDFFolderPath;
+(id)syncGeneratorQueue;
+(void)deleteAllDocCamPDFs;
+(id)folderPathForDocumentInfoCollectionIdentifier:(id)arg1 ;
+(id)folderPathForDocumentInfoCollection:(id)arg1 ;
+(id)versionfolderPathForDocumentInfoCollection:(id)arg1 ;
+(id)versionPDFPathForDocumentInfoCollection:(id)arg1 ;
+(void)createTmpDirectory:(id)arg1 ;
+(void)deletePDFFolderIfExistsForDocumentInfoCollection:(id)arg1 ;
+(id)blockingGeneratepdfURLForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 withProgress:(id)arg3 error:(id*)arg4 ;
+(id)pdfURLForDocumentInfoCollection:(id)arg1 ;
+(void)deletePDFForDocumentInfoCollectionIfExists:(id)arg1 ;
+(void)performPDFGenerationWithGenerator:(id)arg1 docInfoCollection:(id)arg2 imageCache:(id)arg3 progress:(id)arg4 ;
+(void)createEmptyPDFFileAtURLIFNecessaryForDocumentInfoCollection:(id)arg1 ;
+(void)generatePDFsIfNecessaryForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 displayWindow:(id)arg3 presentingViewController:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

