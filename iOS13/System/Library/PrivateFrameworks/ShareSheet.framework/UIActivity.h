/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKit/UIActivityExtensionItemDataProviding.h>
#import <UIKit/UIActivityExtensionItemDataReceiving.h>

@class _UIActivityResourceLoader, NSString, NSArray, NSUUID, NSExtension, UIImage, UIViewController;

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving> {

	long long _defaultPriority;
	_UIActivityResourceLoader* _activityImageLoader;
	_UIActivityResourceLoader* _activitySettingsImageLoader;
	/*^block*/id _activityCompletionWithItemsHandler;
	/*^block*/id _didFinishPerformingActivityHandler;
	long long _maxPreviews;
	NSString* _contentSizeCategory;
	NSArray* _preferredLocalizations;
	unsigned long long _indexInApplicationDefinedActivities;
	NSUUID* _activityUUID;

}

@property (nonatomic,readonly) NSExtension * applicationExtension; 
@property (nonatomic,copy) id activityCompletionWithItemsHandler;                                     //@synthesize activityCompletionWithItemsHandler=_activityCompletionWithItemsHandler - In the implementation block
@property (nonatomic,copy) id didFinishPerformingActivityHandler;                                     //@synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler - In the implementation block
@property (assign,nonatomic) long long maxPreviews;                                                   //@synthesize maxPreviews=_maxPreviews - In the implementation block
@property (nonatomic,retain) NSString * contentSizeCategory;                                          //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,retain) NSArray * preferredLocalizations;                                        //@synthesize preferredLocalizations=_preferredLocalizations - In the implementation block
@property (assign,nonatomic) unsigned long long indexInApplicationDefinedActivities;                  //@synthesize indexInApplicationDefinedActivities=_indexInApplicationDefinedActivities - In the implementation block
@property (nonatomic,readonly) _UIActivityResourceLoader * _activityImageLoader; 
@property (nonatomic,readonly) _UIActivityResourceLoader * _activitySettingsImageLoader; 
@property (nonatomic,readonly) id _backgroundPreheatBlock; 
@property (nonatomic,readonly) NSUUID * activityUUID;                                                 //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,readonly) NSString * activityType; 
@property (nonatomic,readonly) NSString * activityTitle; 
@property (nonatomic,readonly) UIImage * activityImage; 
@property (nonatomic,readonly) UIViewController * activityViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
+(unsigned long long)_xpcAttributes;
+(void)_loadItemProvidersFromActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_defaultFallbackActivityType;
+(id)_actionImageForBundleImageConfiguration:(id)arg1 ;
+(id)_actionImageForActionRepresentationImage:(id)arg1 contentSizeCategory:(id)arg2 ;
+(double)imageWidthForContentSizeCategory:(id)arg1 ;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(BOOL)_isCapabilityBasedActivity;
+(void)_performAfterActivityImageLoadingCompletes:(/*^block*/id)arg1 ;
+(id)_stringFromActivityCategory:(long long)arg1 ;
+(id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(Class)classForPreparingExtensionItemData;
+(id)_imageByApplyingDefaultEffectsToImage:(id)arg1 activityCategory:(long long)arg2 iconFormat:(int)arg3 ;
+(id)_activityImageForActionRepresentationImage:(id)arg1 ;
+(id)_activityImageForApplicationBundleIdentifier:(id)arg1 ;
+(id)_activitySettingsImageForApplicationBundleIdentifier:(id)arg1 ;
+(id)_activityImageForBundleImageConfiguration:(id)arg1 ;
+(id)_activitySettingsImageForBundleImageConfiguration:(id)arg1 ;
+(long long)_activityStyle;
-(id)init;
-(NSArray *)preferredLocalizations;
-(NSString *)activityType;
-(void)_cleanup;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(CGSize)_thumbnailSize;
-(NSUUID *)activityUUID;
-(id)_systemImageName;
-(id)_activitySettingsImage;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)_activityImage;
-(long long)_defaultSortGroup;
-(BOOL)ss_shouldExecuteInShareSheet;
-(BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
-(id)_subjectForActivityItem:(id)arg1 ;
-(id)_attachmentNameForActivityItem:(id)arg1 ;
-(id)_dataTypeIdentifierForActivityItem:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(id)_backgroundPreheatBlock;
-(void)_prepareWithActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UIViewController *)activityViewController;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(unsigned long long)indexInApplicationDefinedActivities;
-(void)setDidFinishPerformingActivityHandler:(id)arg1 ;
-(id)_activityBundleImageConfiguration;
-(UIImage *)activityImage;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(void)_willBePerformedOrPresented;
-(void)performActivity;
-(id)_activityTypeUsingFallbackActivityTypeIfNecessary;
-(BOOL)_appIsDocumentTypeOwner;
-(BOOL)_supportsOpenInPlace;
-(id)_thumbnailImageForActivityItem:(id)arg1 ;
-(void)_setActivityCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1 ;
-(void)_willPresentAsFormSheet;
-(BOOL)_activitySupportsPromiseURLs;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(_UIActivityResourceLoader *)_activityImageLoader;
-(_UIActivityResourceLoader *)_activitySettingsImageLoader;
-(id)_actionImage;
-(id)_actionBundleImageConfiguration;
-(id)activityCompletionWithItemsHandler;
-(void)setActivityCompletionWithItemsHandler:(id)arg1 ;
-(id)didFinishPerformingActivityHandler;
-(long long)maxPreviews;
-(void)setMaxPreviews:(long long)arg1 ;
-(void)setPreferredLocalizations:(NSArray *)arg1 ;
-(void)setIndexInApplicationDefinedActivities:(unsigned long long)arg1 ;
-(id)_activitySettingsBundleImageConfiguration;
-(NSExtension *)applicationExtension;
-(id)_beforeActivity;
-(id)_embeddedActivityViewController;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_managesOwnPresentation;
-(BOOL)_needsResolvedActivityItems;
-(id)ss_activitySpecificExtensionItemDataRequestInfo;
-(id)ss_activityTypeToReportToHost;
-(void)_injectedJavaScriptResult:(id)arg1 ;
-(BOOL)_isExecutedInProcess;
@end

