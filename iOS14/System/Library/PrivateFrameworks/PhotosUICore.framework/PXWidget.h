/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXPhotosDetailsContext, PXWidgetSpec, PXTilingController, NSString, PXSectionedSelectionManager;


@protocol PXWidget <NSObject>
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context; 
@property (nonatomic,retain) PXWidgetSpec * spec; 
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) BOOL hasLoadedContentData; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
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
@optional
+(void)preloadResources;
-(PXSectionedSelectionManager *)selectionManager;
-(void)contentViewDidDisappear;
-(void)setContentSize:(CGSize)arg1;
-(NSString *)localizedTitle;
-(void)setSpec:(id)arg1;
-(void)contentViewWillAppear;
-(BOOL)isSelecting;
-(void)setUserInteractionEnabled:(BOOL)arg1;
-(BOOL)isInEditMode;
-(BOOL)isUserInteractionEnabled;
-(NSString *)localizedCaption;
-(PXPhotosDetailsContext *)context;
-(NSString *)localizedSubtitle;
-(PXWidgetSpec *)spec;
-(BOOL)wantsFocus;
-(BOOL)supportsSelection;
-(BOOL)hasLoadedContentData;
-(NSObject*<PXAnonymousView>)contentView;
-(double)preferredContentHeightForWidth:(double)arg1;
-(void)loadContentData;
-(void)unloadContentData;
-(void)contentViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(void)userDidSelectSubtitle;
-(void)userDidSelectDisclosureControl;
-(void)requestExitEditWithChangesSavingMode:(long long)arg1;
-(void)deviceDidBecomeUnlocked;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id)arg1;
-(id<PXWidgetUnlockDelegate>)widgetUnlockDelegate;
-(void)setWidgetUnlockDelegate:(id)arg1;
-(id<PXWidgetEditingDelegate>)widgetEditingDelegate;
-(void)setWidgetEditingDelegate:(id)arg1;
-(BOOL)hasContentForCurrentInput;
-(double)extraSpaceNeededAtContentBottom;
-(long long)contentViewAnchoringType;
-(PXTilingController *)contentTilingController;
-(long long)contentLayoutStyle;
-(NSString *)localizedDisclosureTitle;
-(BOOL)allowUserInteractionWithSubtitle;
-(BOOL)supportsFaceMode;
-(BOOL)isFaceModeEnabled;
-(void)setFaceModeEnabled:(BOOL)arg1;
-(CGSize)maxVisibleSizeInEditMode;
-(void)setMaxVisibleSizeInEditMode:(CGSize)arg1;
-(void)setSelecting:(BOOL)arg1;
-(void)setContext:(id)arg1;

@end

