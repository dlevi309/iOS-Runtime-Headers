/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXWidget.h>

@protocol PXAnonymousView, PXWidgetDelegate;
@class PXPhotosDetailsContext, NSObject, NSArray, PHMemory, PXWidgetSpec, PXTilingController, NSString, PXSectionedSelectionManager;

@interface PXMemoriesLivingOnFeedbackWidget : NSObject <PXWidget> {

	BOOL _hasLoadedContentData;
	PXPhotosDetailsContext* _context;
	NSObject*<PXAnonymousView> _contentView;
	id<PXWidgetDelegate> _widgetDelegate;
	NSArray* _features;
	NSArray* _featureViews;
	PHMemory* _memory;

}

@property (nonatomic,retain) NSArray * features;                                                       //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSArray * featureViews;                                                   //@synthesize featureViews=_featureViews - In the implementation block
@property (nonatomic,retain) PHMemory * memory;                                                        //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                               //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec; 
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) BOOL hasLoadedContentData;                                              //@synthesize hasLoadedContentData=_hasLoadedContentData - In the implementation block
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView;                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) long long contentViewAnchoringType; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHMemory *)memory;
-(NSString *)localizedTitle;
-(NSArray *)features;
-(BOOL)isUserInteractionEnabled;
-(void)_loadContentData;
-(void)_loadFeaturesFromPhotosGraphProperties:(id)arg1 ;
-(id)_tokenViewsWithSuperview:(id)arg1 ;
-(NSArray *)featureViews;
-(CGSize)_layoutTokenViewsWithWidth:(double)arg1 ;
-(void)_showReportFeedback;
-(void)setFeatureViews:(NSArray *)arg1 ;
-(id)_loadContentView;
-(PXPhotosDetailsContext *)context;
-(void)setFeatures:(NSArray *)arg1 ;
-(void)setMemory:(PHMemory *)arg1 ;
-(BOOL)hasLoadedContentData;
-(NSObject*<PXAnonymousView>)contentView;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)loadContentData;
-(void)unloadContentData;
-(void)userDidSelectDisclosureControl;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(long long)contentViewAnchoringType;
-(long long)contentLayoutStyle;
-(NSString *)localizedDisclosureTitle;
-(BOOL)allowUserInteractionWithSubtitle;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
@end

