/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXCMMSuggestionViewDelegate.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXCMMSuggestion, PXGadgetDelegate, PXCMMWorkflowPresenting;
@class PXCMMSuggestionViewModel, PXCMMSuggestionView, PXPersonFaceTileImageCombiner, PXGadgetSpec, NSString;

@interface PXCMMSuggestionGadget : NSObject <PXCMMSuggestionViewDelegate, PXDiagnosticsEnvironment, PXGadget> {

	id<PXCMMSuggestion> _suggestion;
	BOOL _didLoadSuggestion;
	PXCMMSuggestionViewModel* _suggestionViewModel;
	PXCMMSuggestionView* _suggestionView;
	CGSize _requestedPosterImageSize;
	double _requestedWidth;
	BOOL _didRequestCachingOfPosterImage;
	PXPersonFaceTileImageCombiner* _faceTileImageCombiner;
	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	id<PXCMMWorkflowPresenting> _workflowPresenter;

}

@property (nonatomic,readonly) id<PXCMMWorkflowPresenting> workflowPresenter;              //@synthesize workflowPresenter=_workflowPresenter - In the implementation block
@property (nonatomic,retain) id<PXCMMSuggestion> suggestion;                               //@synthesize suggestion=_suggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                    //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
+(id)_imageRequestOptions;
-(PXGadgetSpec *)gadgetSpec;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(id<PXCMMSuggestion>)suggestion;
-(void)contentHasBeenSeen;
-(void)prepareCollectionViewItem:(id)arg1 ;
-(id)uniqueGadgetIdentifier;
-(void)gadgetControllerHasAppeared;
-(void)prefetchDuringScrollingForWidth:(double)arg1 ;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2 ;
-(Class)collectionViewItemClass;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(void)suggestionViewSizeThatFitsDidChange:(id)arg1 ;
-(void)dynamicUserInterfaceTraitDidChange;
-(void)_loadSuggestionIfNecessary;
-(void)presentDetailViewForSuggestionView:(id)arg1 animated:(BOOL)arg2 ;
-(void)ppt_presentComposeRecipientViewAfterDelay:(double)arg1 ;
-(void)_updatePeopleSuggestionFaceTileImagesForPersons:(id)arg1 mutableViewModel:(id)arg2 ;
-(void)_setCombinedFaceTileImage:(id)arg1 ;
-(void)_presentDetailViewAnimated:(BOOL)arg1 pptConfigurationBlock:(/*^block*/id)arg2 ;
-(void)setSuggestion:(id<PXCMMSuggestion>)arg1 ;
-(id<PXCMMWorkflowPresenting>)workflowPresenter;
-(id)initWithWorkflowPresenter:(id)arg1 ;
-(void)presentDetailViewAnimated:(BOOL)arg1 ;
-(BOOL)supportsHighlighting;
-(void)_cachePosterImageWithWidth:(double)arg1 ;
-(void)_clearPosterImageCache;
@end

