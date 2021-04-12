/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
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

