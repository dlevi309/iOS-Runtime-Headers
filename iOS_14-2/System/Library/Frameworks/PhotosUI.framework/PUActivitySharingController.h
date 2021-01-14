/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUActivityViewControllerDelegate.h>
#import <UIKit/UIActivityViewControllerAirDropDelegate.h>
#import <libobjc.A.dylib/PUCarouselSharingViewControllerDelegate.h>
#import <UIKit/UIPresentationControllerDelegatePrivate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXActivitySharingController.h>

@protocol PXActivitySharingControllerDelegate;
@class PUActivitySharingViewModel, NSDictionary, PHPerson, NSArray, PUCarouselSharingViewController, PHResourceLocalAvailabilityRequest, PUActivityViewController, PHAsset, PXSelectionSnapshot, NSString;

@interface PUActivitySharingController : NSObject <PUActivityViewControllerDelegate, UIActivityViewControllerAirDropDelegate, PUCarouselSharingViewControllerDelegate, UIPresentationControllerDelegatePrivate, PXChangeObserver, PXActivitySharingController> {

	BOOL _activityViewControllerWasCreated;
	BOOL _allowsAirPlayActivity;
	BOOL _allowsRemoveFromFeaturedPhotosActivity;
	BOOL _excludeShareActivity;
	id<PXActivitySharingControllerDelegate> _delegate;
	PUActivitySharingViewModel* _viewModel;
	NSDictionary* _assetsFetchResultsByAssetCollection;
	PHPerson* _person;
	NSArray* _excludedActivityTypes;
	NSArray* _activities;
	const CFStringRef _aggregateKey;
	PUCarouselSharingViewController* _carouselViewController;
	PHResourceLocalAvailabilityRequest* _resourcesPreheatRequest;
	PUActivityViewController* _internalActivityViewController;

}

@property (nonatomic,retain) PUActivitySharingViewModel * viewModel;                                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,copy) NSDictionary * assetsFetchResultsByAssetCollection;                                          //@synthesize assetsFetchResultsByAssetCollection=_assetsFetchResultsByAssetCollection - In the implementation block
@property (assign,nonatomic) BOOL allowsAirPlayActivity;                                                                //@synthesize allowsAirPlayActivity=_allowsAirPlayActivity - In the implementation block
@property (assign,nonatomic) BOOL allowsRemoveFromFeaturedPhotosActivity;                                               //@synthesize allowsRemoveFromFeaturedPhotosActivity=_allowsRemoveFromFeaturedPhotosActivity - In the implementation block
@property (nonatomic,retain) PHPerson * person;                                                                         //@synthesize person=_person - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                                                             //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,copy) NSArray * activities;                                                                        //@synthesize activities=_activities - In the implementation block
@property (assign,nonatomic) const CFStringRef aggregateKey;                                                            //@synthesize aggregateKey=_aggregateKey - In the implementation block
@property (nonatomic,retain) PUCarouselSharingViewController * carouselViewController;                                  //@synthesize carouselViewController=_carouselViewController - In the implementation block
@property (nonatomic,readonly) BOOL excludeShareActivity;                                                               //@synthesize excludeShareActivity=_excludeShareActivity - In the implementation block
@property (nonatomic,retain) PHResourceLocalAvailabilityRequest * resourcesPreheatRequest;                              //@synthesize resourcesPreheatRequest=_resourcesPreheatRequest - In the implementation block
@property (assign,nonatomic,__weak) PUActivityViewController * internalActivityViewController;                          //@synthesize internalActivityViewController=_internalActivityViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXActivitySharingControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIActivityViewController*<PXActivityViewController> activityViewController; 
@property (nonatomic,readonly) PHAsset * currentAsset; 
@property (nonatomic,readonly) PXSelectionSnapshot * selectionSnapshot; 
@property (nonatomic,readonly) NSDictionary * selectedAssetsByAssetCollection; 
@property (nonatomic,readonly) NSArray * selectedAssets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)new;
-(PHPerson *)person;
-(PHAsset *)currentAsset;
-(NSArray *)activities;
-(PXSelectionSnapshot *)selectionSnapshot;
-(id)photosDataSource;
-(void)setActivities:(NSArray *)arg1 ;
-(id)init;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(id<PXActivitySharingControllerDelegate>)delegate;
-(PUCarouselSharingViewController *)carouselViewController;
-(void)setCarouselViewController:(PUCarouselSharingViewController *)arg1 ;
-(PUActivitySharingViewModel *)viewModel;
-(void)setDelegate:(id<PXActivitySharingControllerDelegate>)arg1 ;
-(void)_cancel;
-(void)setViewModel:(PUActivitySharingViewModel *)arg1 ;
-(const CFStringRef)aggregateKey;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setPerson:(PHPerson *)arg1 ;
-(NSArray *)excludedActivityTypes;
-(void)setAggregateKey:(const CFStringRef)arg1 ;
-(void)carouselSharingViewController:(id)arg1 addAssetItem:(id)arg2 ;
-(NSArray *)selectedAssets;
-(void)carouselSharingViewController:(id)arg1 removeAssetItem:(id)arg2 ;
-(void)carouselSharingViewController:(id)arg1 setAssetItems:(id)arg2 ;
-(void)carouselSharingViewController:(id)arg1 replaceAssetItem:(id)arg2 withAssetItem:(id)arg3 ;
-(void)activityViewControllerWillDisappear:(id)arg1 ;
-(BOOL)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1 ;
-(id)initWithActivitySharingConfiguration:(id)arg1 ;
-(void)_createCarouselSharingViewControllerIfNeeded;
-(id)activityViewControllerIfAvailable;
-(NSDictionary *)selectedAssetsByAssetCollection;
-(id)_createActivityViewControllerWithActivities:(id)arg1 ;
-(void)_updateExcludedActivityTypes;
-(void)_incrementShareCountForSelectedAssets;
-(void)_preheatResources;
-(void)_activityViewControllerDidCompleteWithActivityType:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_activitySharingControllerWillDismissActivityViewController;
-(void)_updateActionSheetPresentationStyleIfNeeded;
-(void)_updateSelectedAssetIdentifiers;
-(void)_handlePreheatRequestCompletionWithSuccess:(BOOL)arg1 cancelled:(BOOL)arg2 error:(id)arg3 ;
-(void)_cancelPreheatResourcesRequest;
-(void)_updatePreheatResourcesRequest;
-(NSDictionary *)assetsFetchResultsByAssetCollection;
-(void)setAssetsFetchResultsByAssetCollection:(NSDictionary *)arg1 ;
-(BOOL)allowsAirPlayActivity;
-(void)setAllowsAirPlayActivity:(BOOL)arg1 ;
-(BOOL)allowsRemoveFromFeaturedPhotosActivity;
-(void)setAllowsRemoveFromFeaturedPhotosActivity:(BOOL)arg1 ;
-(BOOL)excludeShareActivity;
-(PHResourceLocalAvailabilityRequest *)resourcesPreheatRequest;
-(void)setResourcesPreheatRequest:(PHResourceLocalAvailabilityRequest *)arg1 ;
-(PUActivityViewController *)internalActivityViewController;
-(void)setInternalActivityViewController:(PUActivityViewController *)arg1 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg1 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(UIActivityViewController*<PXActivityViewController>)activityViewController;
@end

