/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/ICAttachmentModelUI.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, ICAttachment;

@interface ICAttachmentModel : NSObject <ICAttachmentModelUI, QLPreviewItem> {

	BOOL _previewGenerationOperationCancelled;
	BOOL _mergeableDataDirty;
	ICAttachment* _attachment;

}

@property (assign) BOOL previewGenerationOperationCancelled;                                   //@synthesize previewGenerationOperationCancelled=_previewGenerationOperationCancelled - In the implementation block
@property (nonatomic,__weak,readonly) ICAttachment * attachment;                               //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) CGSize intrinsicContentSize; 
@property (assign,getter=isMergeableDataDirty,nonatomic) BOOL mergeableDataDirty;              //@synthesize mergeableDataDirty=_mergeableDataDirty - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviews; 
@property (nonatomic,readonly) BOOL previewsSupportMultipleAppearances; 
@property (nonatomic,readonly) BOOL preferLocalPreviewImages; 
@property (nonatomic,readonly) BOOL needsFullSizePreview; 
@property (nonatomic,readonly) BOOL requiresPostProcessing; 
@property (nonatomic,readonly) BOOL supportsOCR; 
@property (nonatomic,readonly) BOOL supportsImageClassification; 
@property (nonatomic,readonly) NSString * previewImageTypeUTI; 
@property (nonatomic,readonly) NSString * hardLinkVersion; 
@property (nonatomic,readonly) BOOL hasThumbnailImage; 
@property (nonatomic,readonly) BOOL showThumbnailInNoteList; 
@property (nonatomic,readonly) BOOL canMarkup; 
@property (nonatomic,readonly) BOOL supportsQuickLook; 
@property (nonatomic,readonly) NSURL * saveURL; 
@property (nonatomic,readonly) BOOL canSaveURL; 
@property (nonatomic,readonly) BOOL canSaveURLWithOtherAttachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
+(void)deletePreviewItemHardLinkURLs;
-(CGSize)intrinsicContentSize;
-(void)regenerateTextContentInNote;
-(void)attachmentIsDeallocating:(id)arg1 ;
-(void)updateAttachmentSize;
-(BOOL)shouldCropImage;
-(void)deleteSubAttachments;
-(void)willMarkAttachmentForDeletion;
-(BOOL)isReadyToPresent;
-(id)localizedFallbackSubtitleIOS;
-(id)localizedFallbackSubtitleMac;
-(id)generateTemporaryURLWithExtension:(id)arg1 ;
-(BOOL)supportsQuickLook;
-(id)dataForQuickLook;
-(BOOL)previewGenerationOperationCancelled;
-(void)setPreviewGenerationOperationCancelled:(BOOL)arg1 ;
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
-(BOOL)providesTextContentInNote;
-(id)textContentInNote;
-(BOOL)canConvertToHTMLForSharing;
-(id)correctedHardlinkURLFileExtensionForExtention:(id)arg1 ;
-(id)attachmentModelType;
-(ICAttachment *)attachment;
-(CGAffineTransform)previewImageOrientationTransform;
-(id)localizedFallbackTitle;
-(NSURL *)saveURL;
-(id)providerDataTypes;
-(id)initWithAttachment:(id)arg1 ;
-(void)addLocation;
-(id)providerFileTypes;
-(BOOL)supportsOCR;
-(BOOL)hasThumbnailImage;
-(void)noteWillAddOrRemovePassword;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(id)dataForTypeIdentifier:(id)arg1 ;
-(id)fileURLForTypeIdentifier:(id)arg1 ;
-(BOOL)supportsImageClassification;
-(id)searchableTextContentForLocation;
-(BOOL)isMergeableDataDirty;
-(void)setMergeableDataDirty:(BOOL)arg1 ;
-(void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(BOOL)arg1 ;
-(long long)previewImageOrientation;
-(BOOL)canSaveURL;
-(void)updateFileBasedAttributes;
-(id)mergeableDataForCopying;
-(void)attachmentWillTurnIntoFault;
-(void)attachmentWillRefresh:(BOOL)arg1 ;
-(void)attachmentDidRefresh:(BOOL)arg1 ;
-(BOOL)canSaveURLWithOtherAttachments;
-(NSString *)previewImageTypeUTI;
-(id)titleForSubAttachment:(id)arg1 ;
-(BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(short)sectionForSubAttachments;
-(void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1 ;
-(void)undeleteSubAttachments;
-(id)searchableTextContent;
-(void)dealloc;
-(NSString *)hardLinkVersion;
-(BOOL)needsFullSizePreview;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg1 ;
-(id)hardLinkFolderURL;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg1 withFileName:(id)arg2 ;
-(BOOL)requiresPostProcessing;
-(BOOL)canMarkup;
-(void)attachmentAwakeFromFetch;
@end

