/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXWidget.h>

@protocol PXWidgetDelegate;
@class UIView, PXPhotosDetailsContext, PXWidgetSpec, PXTilingController, NSString, PXSectionedSelectionManager;

@interface PXDemoDynamicViewWidget : NSObject <PXWidget> {

	id<PXWidgetDelegate> _widgetDelegate;
	UIView* __view;
	double __preferredHeightPhase;

}

@property (nonatomic,readonly) UIView * _view;                                                         //@synthesize _view=__view - In the implementation block
@property (assign,setter=_setPreferredHeight:,nonatomic) double _preferredHeightPhase;                 //@synthesize _preferredHeightPhase=__preferredHeightPhase - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                               //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)_view;
-(NSString *)localizedTitle;
-(void)_setPreferredHeight:(double)arg1 ;
-(void)_loadView;
-(void)_heartBeatIncreaseHeightPhase:(BOOL)arg1 ;
-(void)_setPreferredHeightPhase:(double)arg1 ;
-(double)_preferredHeightPhase;
-(NSObject*<PXAnonymousView>)contentView;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
@end

