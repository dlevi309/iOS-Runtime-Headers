/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) BOOL ignoreDocumentSupport; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
@optional
-(id<NSFilePresenter>)filePresenter;
-(void)addPersistenceWarnings:(id)arg1;
-(BOOL)areExternalReferencesToDataAllowedAtURL:(id)arg1;
-(BOOL)areNewExternalReferencesToDataAllowed;
-(BOOL)ignoreDocumentSupport;
-(BOOL)isDocumentSupportTemporary;
-(id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3;
-(void)presentPersistenceError:(id)arg1;
-(void)makeDocumentReadOnly;
-(BOOL)retrievePassphraseWithConsumer:(id)arg1;
-(void)decryptedDocumentWithKey:(id)arg1;
-(id)packageDataForWrite;
-(id)additionalDocumentPropertiesForWrite;
-(void)context:(id)arg1 didDownloadDocumentResources:(id)arg2 failedOrCancelledDocumentResources:(id)arg3 error:(id)arg4;

@end

