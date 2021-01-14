/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSOrderedSet, NSURL;


@protocol PXActivityItemSourceController <NSObject>
@property (assign,nonatomic,__weak) UIActivityViewController*<PXActivityViewController> activityViewController; 
@property (nonatomic,copy,readonly) NSOrderedSet * assetItemSources; 
@property (assign,nonatomic) unsigned long long preferredPreparationType; 
@property (nonatomic,readonly) BOOL shouldUseMomentShareLinkInMessagesIfThresholdMet; 
@property (nonatomic,readonly) BOOL shouldExcludeLivenessInAllItemSources; 
@property (nonatomic,readonly) BOOL shouldExcludeLocationInAllItemSources; 
@property (nonatomic,readonly) BOOL shouldExcludeCaptionInAllItemSources; 
@property (nonatomic,readonly) BOOL shouldExcludeAccessibilityDescriptionInAllItemSources; 
@property (nonatomic,readonly) BOOL shouldShareAsOriginals; 
@property (nonatomic,copy,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) BOOL momentSharePublishAttempted; 
@property (nonatomic,readonly) BOOL itemSourcesSupportMomentShareLinkCreation; 
@property (nonatomic,readonly) NSURL * publishedURL; 
@property (nonatomic,readonly) BOOL isPreparingIndividualItems; 
@property (nonatomic,readonly) BOOL itemSourcesSupportSlideshow; 
@required
-(NSOrderedSet *)assets;
-(void)setActivityViewController:(id)arg1;
-(NSOrderedSet *)assetItemSources;
-(PXAssetMediaTypeCount*)requestAssetsMediaTypeCount;
-(unsigned long long)preferredPreparationType;
-(void)setPreferredPreparationType:(unsigned long long)arg1;
-(BOOL)shouldUseMomentShareLinkInMessagesIfThresholdMet;
-(BOOL)shouldExcludeLivenessInAllItemSources;
-(BOOL)shouldExcludeLocationInAllItemSources;
-(BOOL)shouldExcludeCaptionInAllItemSources;
-(BOOL)shouldShareAsOriginals;
-(NSURL *)publishedURL;
-(BOOL)shouldExcludeAccessibilityDescriptionInAllItemSources;
-(BOOL)momentSharePublishAttempted;
-(BOOL)itemSourcesSupportMomentShareLinkCreation;
-(BOOL)isPreparingIndividualItems;
-(BOOL)itemSourcesSupportSlideshow;
-(UIActivityViewController*<PXActivityViewController>)activityViewController;

@end

