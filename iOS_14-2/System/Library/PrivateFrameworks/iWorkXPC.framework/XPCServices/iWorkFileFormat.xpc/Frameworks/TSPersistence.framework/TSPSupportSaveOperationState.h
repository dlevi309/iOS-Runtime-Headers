/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSUUID, NSURL, TSUSafeSaveAssistant;

@interface TSPSupportSaveOperationState : NSObject {

	BOOL _didWriteSupportBundleSuccessfuly;
	BOOL _shouldLeavePendingEndSave;
	NSUUID* _originalDocumentUUID;
	NSUUID* _originalVersionUUID;
	NSURL* _originalURL;
	long long _updateType;
	TSUSafeSaveAssistant* _safeSaveAssistant;
	NSUUID* _documentUUID;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSUUID * originalDocumentUUID;                       //@synthesize originalDocumentUUID=_originalDocumentUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * originalVersionUUID;                        //@synthesize originalVersionUUID=_originalVersionUUID - In the implementation block
@property (nonatomic,copy) NSURL * originalURL;                                     //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldUpdate; 
@property (nonatomic,readonly) BOOL isSavingCurrentDocument; 
@property (nonatomic,readonly) BOOL isSameDocumentUpdate; 
@property (nonatomic,readonly) long long updateType;                                //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,retain) TSUSafeSaveAssistant * safeSaveAssistant;              //@synthesize safeSaveAssistant=_safeSaveAssistant - In the implementation block
@property (nonatomic,copy) NSUUID * documentUUID;                                   //@synthesize documentUUID=_documentUUID - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                             //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) BOOL didWriteSupportBundleSuccessfuly;                 //@synthesize didWriteSupportBundleSuccessfuly=_didWriteSupportBundleSuccessfuly - In the implementation block
@property (assign,nonatomic) BOOL shouldLeavePendingEndSave;                        //@synthesize shouldLeavePendingEndSave=_shouldLeavePendingEndSave - In the implementation block
-(NSURL *)originalURL;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(long long)updateType;
-(BOOL)shouldUpdate;
-(NSURL *)URL;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(NSUUID *)documentUUID;
-(void)setDocumentUUID:(NSUUID *)arg1 ;
-(BOOL)isSavingCurrentDocument;
-(void)setShouldLeavePendingEndSave:(BOOL)arg1 ;
-(BOOL)shouldLeavePendingEndSave;
-(id)initWithOriginalDocumentUUID:(id)arg1 originalVersionUUID:(id)arg2 originalURL:(id)arg3 updateType:(long long)arg4 ;
-(void)setSafeSaveAssistant:(TSUSafeSaveAssistant *)arg1 ;
-(TSUSafeSaveAssistant *)safeSaveAssistant;
-(void)setDidWriteSupportBundleSuccessfuly:(BOOL)arg1 ;
-(BOOL)didWriteSupportBundleSuccessfuly;
-(NSUUID *)originalDocumentUUID;
-(BOOL)isSameDocumentUpdate;
-(NSUUID *)originalVersionUUID;
@end

