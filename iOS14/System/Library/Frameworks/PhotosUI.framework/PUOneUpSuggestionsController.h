/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXContextualNotificationDelegate.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@protocol PUOneUpSuggestionsControllerDelegate;
@class PUOneUpSuggestionsProvider, PUBrowsingViewModel, PUAssetReference, NSMutableDictionary, NSString;

@interface PUOneUpSuggestionsController : NSObject <PXContextualNotificationDelegate, PUBrowsingViewModelChangeObserver> {

	BOOL _willPerformUpdates;
	BOOL _isPerformingUpdates;
	struct {
		BOOL focusedAssetReference;
		BOOL focusedLongEnough;
		BOOL activeSuggestionsWindow;
	}  _needsUpdateFlags;
	SCD_Struct_PU28 _delegateRespondsTo;
	BOOL _viewVisible;
	BOOL _inFocus;
	BOOL _focusedLongEnough;
	PUOneUpSuggestionsProvider* _suggestionsProvider;
	PUBrowsingViewModel* _browsingViewModel;
	id<PUOneUpSuggestionsControllerDelegate> _delegate;
	PUAssetReference* _focusedAssetReference;
	double _lastFocusedAssetReferenceChangeTime;
	NSMutableDictionary* _suggestionInfos;

}

@property (assign,getter=isInFocus,nonatomic) BOOL inFocus;                                         //@synthesize inFocus=_inFocus - In the implementation block
@property (nonatomic,retain) PUAssetReference * focusedAssetReference;                              //@synthesize focusedAssetReference=_focusedAssetReference - In the implementation block
@property (assign,nonatomic) double lastFocusedAssetReferenceChangeTime;                            //@synthesize lastFocusedAssetReferenceChangeTime=_lastFocusedAssetReferenceChangeTime - In the implementation block
@property (assign,getter=isFocusedLongEnough,nonatomic) BOOL focusedLongEnough;                     //@synthesize focusedLongEnough=_focusedLongEnough - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * suggestionInfos;                               //@synthesize suggestionInfos=_suggestionInfos - In the implementation block
@property (nonatomic,readonly) PUOneUpSuggestionsProvider * suggestionsProvider;                    //@synthesize suggestionsProvider=_suggestionsProvider - In the implementation block
@property (nonatomic,readonly) PUBrowsingViewModel * browsingViewModel;                             //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpSuggestionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) BOOL viewVisible;                                 //@synthesize viewVisible=_viewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateLayout;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)isFocusedLongEnough;
-(CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2 ;
-(void)contextualNotificationWasTapped:(id)arg1 ;
-(id)_suggestionInfoForAssetReference:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_updateInFocus;
-(id)init;
-(void)_updateFocusedAssetReferenceIfNeeded;
-(id<PUOneUpSuggestionsControllerDelegate>)delegate;
-(void)_invalidateInFocus;
-(void)_updateFocusedLongEnoughIfNeeded;
-(void)_removeSuggestionInfoForAssetReference:(id)arg1 ;
-(void)markSuggestionAsSeenForAssetReference:(id)arg1 ;
-(BOOL)contextualNotification:(id)arg1 shouldPassthroughPoint:(CGPoint)arg2 inCoordinateSpace:(id)arg3 ;
-(void)_handleSuggestion:(id)arg1 error:(id)arg2 forAssetReference:(id)arg3 ;
-(void)_updateIfNeeded;
-(void)_invalidateSuggestionsVisibility;
-(void)setInFocus:(BOOL)arg1 ;
-(NSMutableDictionary *)suggestionInfos;
-(void)setFocusedAssetReference:(PUAssetReference *)arg1 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(BOOL)isInFocus;
-(void)_invalidateFocusedLongEnough;
-(void)contextualNotificationDidDisappear:(id)arg1 ;
-(void)setDelegate:(id<PUOneUpSuggestionsControllerDelegate>)arg1 ;
-(BOOL)_canBeginDisplayingSuggestionsForAssetReference:(id)arg1 ;
-(void)setLastFocusedAssetReferenceChangeTime:(double)arg1 ;
-(long long)preferredAnimationForContextualNotification:(id)arg1 ;
-(double)lastFocusedAssetReferenceChangeTime;
-(BOOL)isViewVisible;
-(id)_assetReferenceForContextualNotification:(id)arg1 ;
-(void)_dismissSuggestionInfo:(id)arg1 ;
-(void)contextualNotificationWasDiscarded:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)setViewVisible:(BOOL)arg1 ;
-(id)preferredContainerViewForContextualNotification:(id)arg1 ;
-(void)hideSuggestionForAssetReference:(id)arg1 ;
-(void)_updateSuggestions;
-(void)setFocusedLongEnough:(BOOL)arg1 ;
-(void)_invalidateActiveSuggestionsWindow;
-(void)_setNeedsUpdate;
-(void)_updateActiveSuggestionsWindowIfNeeded;
-(PUAssetReference *)focusedAssetReference;
-(BOOL)_canKeepDisplayingSuggestionsForAssetReference:(id)arg1 ;
-(void)invalidateSuggestions;
-(void)_requestSuggestionForAssetReference:(id)arg1 ;
-(void)_invalidateFocusedAssetReference;
-(PUOneUpSuggestionsProvider *)suggestionsProvider;
-(void)invalidateLayoutForAssetReference:(id)arg1 ;
-(void)_handleDataSourceChange:(id)arg1 ;
-(id)initWithSuggestionsProvider:(id)arg1 browsingViewModel:(id)arg2 ;
@end

