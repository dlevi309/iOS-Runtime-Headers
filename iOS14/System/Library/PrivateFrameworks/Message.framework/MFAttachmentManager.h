/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSLock, MFFileCompressionQueue, NSString;

@interface MFAttachmentManager : NSObject <EFLoggable> {

	NSObject*<OS_dispatch_queue> _arrayAccessQueue;
	NSMutableDictionary* _providers;
	NSMutableDictionary* _attachments;
	NSMutableDictionary* _metadata;
	NSLock* _metaDataLock;
	NSObject*<OS_dispatch_queue> _imageScalingQueue;
	MFFileCompressionQueue* _compressionQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)allManagers;
+(id)supportedDocumentUTIs;
+(id)defaultManager;
-(unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(BOOL)arg2 forContext:(id)arg3 ;
-(void)attachmentForCID:(id)arg1 isDisplayableImage:(/*^block*/id)arg2 ;
-(void)attachmentForCID:(id)arg1 isBasicImage:(/*^block*/id)arg2 ;
-(void)hasAttachmentForCID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)filenameAndURLForAttachmentForCID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)removeProvider:(id)arg1 ;
-(void)addProvider:(id)arg1 forBaseURL:(id)arg2 ;
-(id)metadataForAttachment:(id)arg1 forKey:(id)arg2 ;
-(void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3 ;
-(id)fetchDataForAttachment:(id)arg1 ;
-(void)fetchDataSynchronouslyForAttachment:(id)arg1 ;
-(id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2 ;
-(id)_filePathForAttachment:(id)arg1 ;
-(id)_contentIDForAttachment:(id)arg1 ;
-(void)setContentID:(id)arg1 forAttachment:(id)arg2 ;
-(id)compressionQueue;
-(void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2 ;
-(id)attachmentForURL:(id)arg1 error:(id*)arg2 ;
-(id)attachmentForContentID:(id)arg1 preferredSchemes:(id)arg2 ;
-(id)attachmentForCID:(id)arg1 ;
-(id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5 ;
-(id)attachmentsForContext:(id)arg1 ;
-(id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 request:(id)arg3 syncLock:(id*)arg4 ;
-(id)attachmentForItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5 ;
-(void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2 ;
-(BOOL)updateAttachment:(id)arg1 withNewData:(id)arg2 ;
-(void)removeAttachmentForURL:(id)arg1 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(void)clearMetadataForAttachment:(id)arg1 ;
-(void)removeProviderForBaseURL:(id)arg1 ;
-(id)attachmentForContentID:(id)arg1 ;
-(id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3 ;
-(BOOL)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3 ;
-(void)_cancelFetchForAttachment:(id)arg1 ;
-(id)imageScalingQueue;
-(id)attachmentsForURLs:(id)arg1 error:(id*)arg2 ;
-(id)attachmentForTextAttachment:(id)arg1 error:(id*)arg2 ;
@end

