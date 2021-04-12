/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLTExtensionThumbnailItem.h>
#import <libobjc.A.dylib/QLPreviewItemPrivateProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol QLPreviewItemPrivateProtocol, QLPreviewItemDataProvider, QLItemThumbnailGeneratorProtocolInternal;
@class NSString, NSURL, UIColor, NSDictionary, NSNumber, FPItem, NSData, NSItemProvider, QLItemFetcher, QLUTIAnalyzer, QLPreviewItemEditedCopy, NSUUID, FPSandboxingURLWrapper;

@interface QLItem : NSObject <QLTExtensionThumbnailItem, QLPreviewItemPrivateProtocol, NSSecureCoding> {

	long long _editedFileExtensionHandle;
	BOOL _useAVPlayerViewController;
	BOOL _useFullPDFTransition;
	BOOL _useLoadingTimeout;
	BOOL _wantsPreviewInDebugViewController;
	BOOL _isPromisedItem;
	BOOL _canBeEdited;
	BOOL _canHandleEditedCopy;
	BOOL _originalContentWasUpdated;
	BOOL _canBeShared;
	BOOL _hasDeterminedShouldUseExtensionPreview;
	BOOL _shouldUseExtensionPreview;
	BOOL _hasDeterminedShouldUseExtensionThumbnail;
	BOOL _shouldUseExtensionThumbnail;
	BOOL _hasDeterminedPredictedPreferredContentSizeForOrbPlatter;
	BOOL _needsAccessToExternalResources;
	NSNumber* _previewItemProviderProgress;
	FPItem* _fpItem;
	id<QLPreviewItemPrivateProtocol> _originalPreviewItem;
	NSURL* _previewItemURL;
	NSData* _previewItemData;
	id<QLPreviewItemDataProvider> _previewItemDataProvider;
	NSString* _searchableItemIdentifier;
	NSString* _spotlightQueryString;
	NSString* _searchableItemApplicationBundleIdentifier;
	NSString* _relativePath;
	NSItemProvider* _previewItemProvider;
	NSNumber* _itemSize;
	QLItemFetcher* _fetcher;
	id<QLItemThumbnailGeneratorProtocolInternal> _thumbnailGenerator;
	QLUTIAnalyzer* _UTIAnalyzer;
	NSString* _previewItemContentType;
	UIColor* _backgroundColorOverride;
	NSString* _previewItemTitle;
	QLPreviewItemEditedCopy* _editedCopy;
	QLPreviewItemEditedCopy* _lastSavedEditedCopy;
	NSString* _password;
	NSUUID* _uuid;
	unsigned long long _previewItemType;
	long long _processIdentifier;
	long long _editingMode;
	unsigned long long _editedFileBehavior;
	FPSandboxingURLWrapper* _sandboxingURLWrapper;
	NSDictionary* _clientPreviewOptions;
	CGSize _preferredContentSizeForOrbPlatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contentType; 
@property (assign) BOOL needsAccessToExternalResources; 
@property (assign,nonatomic) BOOL hasDeterminedShouldUseExtensionPreview; 
@property (assign,nonatomic) BOOL shouldUseExtensionPreview; 
@property (assign,nonatomic) BOOL hasDeterminedShouldUseExtensionThumbnail; 
@property (assign,nonatomic) BOOL shouldUseExtensionThumbnail; 
@property (nonatomic,retain) id<QLPreviewItemPrivateProtocol> originalPreviewItem;                         //@synthesize originalPreviewItem=_originalPreviewItem - In the implementation block
@property (nonatomic,retain) NSURL * previewItemURL;                                                       //@synthesize previewItemURL=_previewItemURL - In the implementation block
@property (retain) NSData * previewItemData;                                                               //@synthesize previewItemData=_previewItemData - In the implementation block
@property (retain) FPItem * fpItem;                                                                        //@synthesize fpItem=_fpItem - In the implementation block
@property (retain) id<QLPreviewItemDataProvider> previewItemDataProvider;                                  //@synthesize previewItemDataProvider=_previewItemDataProvider - In the implementation block
@property (retain) NSString * searchableItemIdentifier;                                                    //@synthesize searchableItemIdentifier=_searchableItemIdentifier - In the implementation block
@property (retain) NSString * spotlightQueryString;                                                        //@synthesize spotlightQueryString=_spotlightQueryString - In the implementation block
@property (retain) NSString * searchableItemApplicationBundleIdentifier;                                   //@synthesize searchableItemApplicationBundleIdentifier=_searchableItemApplicationBundleIdentifier - In the implementation block
@property (retain) NSString * relativePath;                                                                //@synthesize relativePath=_relativePath - In the implementation block
@property (retain) NSItemProvider * previewItemProvider;                                                   //@synthesize previewItemProvider=_previewItemProvider - In the implementation block
@property (nonatomic,retain) NSNumber * itemSize;                                                          //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,retain) QLItemFetcher * fetcher;                                                      //@synthesize fetcher=_fetcher - In the implementation block
@property (nonatomic,retain) id<QLItemThumbnailGeneratorProtocolInternal> thumbnailGenerator;              //@synthesize thumbnailGenerator=_thumbnailGenerator - In the implementation block
@property (nonatomic,retain) QLUTIAnalyzer * UTIAnalyzer;                                                  //@synthesize UTIAnalyzer=_UTIAnalyzer - In the implementation block
@property (nonatomic,retain) NSString * previewItemContentType;                                            //@synthesize previewItemContentType=_previewItemContentType - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorOverride;                                            //@synthesize backgroundColorOverride=_backgroundColorOverride - In the implementation block
@property (nonatomic,retain) NSString * previewItemTitle;                                                  //@synthesize previewItemTitle=_previewItemTitle - In the implementation block
@property (nonatomic,retain) QLPreviewItemEditedCopy * editedCopy;                                         //@synthesize editedCopy=_editedCopy - In the implementation block
@property (nonatomic,retain) QLPreviewItemEditedCopy * lastSavedEditedCopy;                                //@synthesize lastSavedEditedCopy=_lastSavedEditedCopy - In the implementation block
@property (retain) NSString * password;                                                                    //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                                //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long previewItemType;                                           //@synthesize previewItemType=_previewItemType - In the implementation block
@property (assign) long long processIdentifier;                                                            //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isPromisedItem;                                                          //@synthesize isPromisedItem=_isPromisedItem - In the implementation block
@property (assign,nonatomic) BOOL canBeEdited;                                                             //@synthesize canBeEdited=_canBeEdited - In the implementation block
@property (assign,nonatomic) BOOL canHandleEditedCopy;                                                     //@synthesize canHandleEditedCopy=_canHandleEditedCopy - In the implementation block
@property (assign,nonatomic) BOOL originalContentWasUpdated;                                               //@synthesize originalContentWasUpdated=_originalContentWasUpdated - In the implementation block
@property (assign,nonatomic) long long editingMode;                                                        //@synthesize editingMode=_editingMode - In the implementation block
@property (assign,nonatomic) BOOL canBeShared;                                                             //@synthesize canBeShared=_canBeShared - In the implementation block
@property (assign,nonatomic) unsigned long long editedFileBehavior;                                        //@synthesize editedFileBehavior=_editedFileBehavior - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedShouldUseExtensionPreview;                                  //@synthesize hasDeterminedShouldUseExtensionPreview=_hasDeterminedShouldUseExtensionPreview - In the implementation block
@property (assign,nonatomic) BOOL shouldUseExtensionPreview;                                               //@synthesize shouldUseExtensionPreview=_shouldUseExtensionPreview - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedShouldUseExtensionThumbnail;                                //@synthesize hasDeterminedShouldUseExtensionThumbnail=_hasDeterminedShouldUseExtensionThumbnail - In the implementation block
@property (assign,nonatomic) BOOL shouldUseExtensionThumbnail;                                             //@synthesize shouldUseExtensionThumbnail=_shouldUseExtensionThumbnail - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedPredictedPreferredContentSizeForOrbPlatter;                 //@synthesize hasDeterminedPredictedPreferredContentSizeForOrbPlatter=_hasDeterminedPredictedPreferredContentSizeForOrbPlatter - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSizeForOrbPlatter;                                     //@synthesize preferredContentSizeForOrbPlatter=_preferredContentSizeForOrbPlatter - In the implementation block
@property (nonatomic,retain) FPSandboxingURLWrapper * sandboxingURLWrapper;                                //@synthesize sandboxingURLWrapper=_sandboxingURLWrapper - In the implementation block
@property (nonatomic,copy) NSDictionary * clientPreviewOptions;                                            //@synthesize clientPreviewOptions=_clientPreviewOptions - In the implementation block
@property (assign) BOOL needsAccessToExternalResources;                                                    //@synthesize needsAccessToExternalResources=_needsAccessToExternalResources - In the implementation block
@property (assign) BOOL useAVPlayerViewController;                                                         //@synthesize useAVPlayerViewController=_useAVPlayerViewController - In the implementation block
@property (assign,nonatomic) BOOL useFullPDFTransition;                                                    //@synthesize useFullPDFTransition=_useFullPDFTransition - In the implementation block
@property (assign,nonatomic) BOOL useLoadingTimeout;                                                       //@synthesize useLoadingTimeout=_useLoadingTimeout - In the implementation block
@property (nonatomic,copy) NSNumber * previewItemProviderProgress;                                         //@synthesize previewItemProviderProgress=_previewItemProviderProgress - In the implementation block
@property (nonatomic,readonly) NSURL * editedFileURL; 
@property (assign) BOOL wantsPreviewInDebugViewController;                                                 //@synthesize wantsPreviewInDebugViewController=_wantsPreviewInDebugViewController - In the implementation block
@property (readonly) NSURL * previewItemURLForDisplay; 
@property (readonly) double autoPlaybackPosition; 
@property (readonly) BOOL wantsDefaultMediaPlayer; 
@property (readonly) NSString * MIMEType; 
@property (nonatomic,copy) NSDictionary * previewOptions; 
+(BOOL)supportsSecureCoding;
+(id)supportedContentTypes;
+(id)itemWithPreviewItem:(id)arg1 ;
+(BOOL)shouldUseRemoteCollection:(id)arg1 ;
+(id)contentTypesToPreviewTypes;
+(id)rtfContentTypes;
+(BOOL)contentTypeConformsToRTFD:(id)arg1 ;
+(id)webContentTypes;
+(id)encodedClasses;
+(id)customExtensionCommunicationEncodedClasses;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)password;
-(long long)processIdentifier;
-(NSUUID *)uuid;
-(NSString *)relativePath;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)contentType;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)MIMEType;
-(void)_commonInit;
-(BOOL)canBeEdited;
-(NSNumber *)itemSize;
-(void)setItemSize:(NSNumber *)arg1 ;
-(id)initWithFPItem:(id)arg1 ;
-(void)setProcessIdentifier:(long long)arg1 ;
-(void)setUseLoadingTimeout:(BOOL)arg1 ;
-(void)setPreviewItemProviderProgress:(NSNumber *)arg1 ;
-(id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 ;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(void)setPreviewItemURL:(NSURL *)arg1 ;
-(void)setPreviewItemTitle:(NSString *)arg1 ;
-(NSURL *)editedFileURL;
-(void)setPreviewItemContentType:(NSString *)arg1 ;
-(NSString *)previewItemContentType;
-(void)setRelativePath:(NSString *)arg1 ;
-(BOOL)canBeShared;
-(QLItemFetcher *)fetcher;
-(void)setFetcher:(QLItemFetcher *)arg1 ;
-(NSString *)spotlightQueryString;
-(BOOL)isPromisedItem;
-(UIColor *)backgroundColorOverride;
-(id)shareableURL;
-(unsigned long long)previewItemType;
-(long long)defaultWhitePointAdaptivityStyle;
-(id<QLPreviewItemPrivateProtocol>)originalPreviewItem;
-(QLPreviewItemEditedCopy *)editedCopy;
-(QLPreviewItemEditedCopy *)lastSavedEditedCopy;
-(BOOL)canBePreviewed;
-(BOOL)canBePrintedWithCustomPrinter;
-(BOOL)originalContentWasUpdated;
-(long long)editingMode;
-(FPItem *)fpItem;
-(BOOL)useLoadingTimeout;
-(double)maxLoadingTime;
-(id)createPreviewContext;
-(Class)transformerClass;
-(CGSize)predictedPreferredContentSizeForOrbPlatter;
-(CGSize)previewSizeForItemViewControllerSize:(CGSize)arg1 ;
-(id)previewItemPrintingViewControllerClassName;
-(id)previewItemViewControllerClassName;
-(id<QLPreviewItemDataProvider>)previewItemDataProvider;
-(FPSandboxingURLWrapper *)sandboxingURLWrapper;
-(void)provideURLWrapper:(/*^block*/id)arg1 ;
-(BOOL)needsAccessToExternalResources;
-(void)setNeedsAccessToExternalResources:(BOOL)arg1 ;
-(BOOL)useExtensionPreview;
-(NSString *)searchableItemIdentifier;
-(unsigned long long)_uncachedExtensionPreviewItemType;
-(unsigned long long)_uncachedPreviewItemType;
-(BOOL)useAVPlayerViewController;
-(QLUTIAnalyzer *)UTIAnalyzer;
-(BOOL)hasDeterminedShouldUseExtensionPreview;
-(void)setShouldUseExtensionPreview:(BOOL)arg1 ;
-(NSString *)searchableItemApplicationBundleIdentifier;
-(BOOL)shouldUseExtensionPreview;
-(void)setHasDeterminedShouldUseExtensionPreview:(BOOL)arg1 ;
-(BOOL)hasDeterminedShouldUseExtensionThumbnail;
-(BOOL)isStandardQuickLookType;
-(void)setShouldUseExtensionThumbnail:(BOOL)arg1 ;
-(BOOL)shouldUseExtensionThumbnail;
-(void)setHasDeterminedShouldUseExtensionThumbnail:(BOOL)arg1 ;
-(BOOL)hasDeterminedPredictedPreferredContentSizeForOrbPlatter;
-(CGSize)preferredContentSizeForOrbPlatterWithURL:(id)arg1 ;
-(void)setPreferredContentSizeForOrbPlatter:(CGSize)arg1 ;
-(void)setHasDeterminedPredictedPreferredContentSizeForOrbPlatter:(BOOL)arg1 ;
-(CGSize)preferredContentSizeForOrbPlatter;
-(CGSize)imageRawSizeOfContents:(id)arg1 withPreviewItemType:(unsigned long long)arg2 imageIsAnimated:(BOOL*)arg3 ;
-(BOOL)shouldUseRemoteViewController;
-(unsigned long long)_getPreviewItemType;
-(BOOL)useExtensionThumbnail;
-(unsigned long long)maximumNumberOfCachedPreviews;
-(id)saveURL;
-(void)setEditedCopy:(QLPreviewItemEditedCopy *)arg1 ;
-(void)prepareSaveURL:(/*^block*/id)arg1 ;
-(id<QLItemThumbnailGeneratorProtocolInternal>)thumbnailGenerator;
-(id)initWithURLSandboxWrapper:(id)arg1 ;
-(void)setCanBeEdited:(BOOL)arg1 ;
-(void)setEditingMode:(long long)arg1 ;
-(void)setEditedFileBehavior:(unsigned long long)arg1 ;
-(void)setCanHandleEditedCopy:(BOOL)arg1 ;
-(void)setCanBeShared:(BOOL)arg1 ;
-(NSDictionary *)previewOptions;
-(void)setPreviewOptions:(NSDictionary *)arg1 ;
-(NSData *)previewItemData;
-(NSItemProvider *)previewItemProvider;
-(void)setLastSavedEditedCopy:(QLPreviewItemEditedCopy *)arg1 ;
-(void)setOriginalContentWasUpdated:(BOOL)arg1 ;
-(void)prepareShareableURL:(/*^block*/id)arg1 ;
-(unsigned long long)editedFileBehavior;
-(BOOL)useFullPDFTransition;
-(NSDictionary *)clientPreviewOptions;
-(void)setThumbnailGenerator:(id<QLItemThumbnailGeneratorProtocolInternal>)arg1 ;
-(void)setPreviewItemType:(unsigned long long)arg1 ;
-(void)setClientPreviewOptions:(NSDictionary *)arg1 ;
-(id)internalCopy;
-(void)setOriginalPreviewItem:(id<QLPreviewItemPrivateProtocol>)arg1 ;
-(void)setUseAVPlayerViewController:(BOOL)arg1 ;
-(void)setBackgroundColorOverride:(UIColor *)arg1 ;
-(void)setIsPromisedItem:(BOOL)arg1 ;
-(void)setUTIAnalyzer:(QLUTIAnalyzer *)arg1 ;
-(void)_removeEditedCopyIfExists;
-(BOOL)wantsPreviewInDebugViewController;
-(NSNumber *)previewItemProviderProgress;
-(void)setPreviewItemData:(NSData *)arg1 ;
-(void)setFpItem:(FPItem *)arg1 ;
-(void)setPreviewItemProvider:(NSItemProvider *)arg1 ;
-(void)setUseFullPDFTransition:(BOOL)arg1 ;
-(void)setSearchableItemIdentifier:(NSString *)arg1 ;
-(void)setSpotlightQueryString:(NSString *)arg1 ;
-(void)setSearchableItemApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setWantsPreviewInDebugViewController:(BOOL)arg1 ;
-(void)setPreviewItemDataProvider:(id<QLPreviewItemDataProvider>)arg1 ;
-(void)setSandboxingURLWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(BOOL)canHandleEditedCopy;
-(id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 ;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 ;
-(id)initWithSearchableItemUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3 previewTitle:(id)arg4 ;
-(id)initWithSearchableItemUniqueIdentifier:(id)arg1 applicationBundleIdentifier:(id)arg2 ;
@end

