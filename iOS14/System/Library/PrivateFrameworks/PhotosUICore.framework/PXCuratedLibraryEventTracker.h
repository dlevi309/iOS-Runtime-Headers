/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXMediaViewControllerEventTracker.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCuratedLibraryEventTracker.h>

@protocol PXCuratedLibraryEventTracker <PXViewControllerEventTracker>
@required
-(void)logAnalysisProgress:(float)arg1;
-(void)logLibraryItemsCount:(long long)arg1;

@end


@class NSTimer, PXCuratedLibraryViewModel, PXCuratedLibraryLayout, NSString, PXSectionedObjectReference, NSMutableDictionary;

@interface PXCuratedLibraryEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXCuratedLibraryEventTracker> {

	BOOL _loggedFirstTimeExperience;
	NSTimer* _slowScrollRegimeTimer;
	float _analysisProgress;
	float _firstTimeExperienceAnalysisProgress;
	PXCuratedLibraryViewModel* _viewModel;
	PXCuratedLibraryLayout* _layout;
	unsigned long long _userEventSource;
	long long _currentlyViewedZoomLevel;
	long long _currentZoomLevelSignpost;
	NSString* _currentAllPhotosZoomStateName;
	long long _currentAllPhotosZoomStateSignpost;
	PXSectionedObjectReference* _dominantObjectReference;
	long long _libraryItemsCount;
	long long _firstTimeExperienceLibraryItemsCount;

}

@property (assign,nonatomic) unsigned long long userEventSource;                                //@synthesize userEventSource=_userEventSource - In the implementation block
@property (assign,nonatomic) long long currentlyViewedZoomLevel;                                //@synthesize currentlyViewedZoomLevel=_currentlyViewedZoomLevel - In the implementation block
@property (assign,nonatomic) long long currentZoomLevelSignpost;                                //@synthesize currentZoomLevelSignpost=_currentZoomLevelSignpost - In the implementation block
@property (nonatomic,retain) NSString * currentAllPhotosZoomStateName;                          //@synthesize currentAllPhotosZoomStateName=_currentAllPhotosZoomStateName - In the implementation block
@property (assign,nonatomic) long long currentAllPhotosZoomStateSignpost;                       //@synthesize currentAllPhotosZoomStateSignpost=_currentAllPhotosZoomStateSignpost - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * dominantObjectReference;              //@synthesize dominantObjectReference=_dominantObjectReference - In the implementation block
@property (assign,nonatomic) long long libraryItemsCount;                                       //@synthesize libraryItemsCount=_libraryItemsCount - In the implementation block
@property (assign,nonatomic) float analysisProgress;                                            //@synthesize analysisProgress=_analysisProgress - In the implementation block
@property (assign,nonatomic) float firstTimeExperienceAnalysisProgress;                         //@synthesize firstTimeExperienceAnalysisProgress=_firstTimeExperienceAnalysisProgress - In the implementation block
@property (assign,nonatomic) long long firstTimeExperienceLibraryItemsCount;                    //@synthesize firstTimeExperienceLibraryItemsCount=_firstTimeExperienceLibraryItemsCount - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryLayout * layout;                                 //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSMutableDictionary * payload; 
-(void)logAnalysisProgress:(float)arg1 ;
-(void)setDominantObjectReference:(PXSectionedObjectReference *)arg1 ;
-(void)_invalidateFirstTimeExperienceReadinessLogging;
-(void)setCurrentZoomLevelSignpost:(long long)arg1 ;
-(long long)firstTimeExperienceLibraryItemsCount;
-(id)initWithViewName:(id)arg1 ;
-(NSString *)currentAllPhotosZoomStateName;
-(void)_updateDominantObjectReference;
-(void)setCurrentAllPhotosZoomStateName:(NSString *)arg1 ;
-(PXSectionedObjectReference *)dominantObjectReference;
-(void)setCurrentAllPhotosZoomStateSignpost:(long long)arg1 ;
-(long long)currentAllPhotosZoomStateSignpost;
-(void)logLibraryItemsCount:(long long)arg1 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)_updateCurrentAllPhotosZoomState;
-(void)_updateFirstTimeExperienceReadinessLogging;
-(void)_logDidStartViewingAllPhotosZoomStateName:(id)arg1 ;
-(long long)currentlyViewedZoomLevel;
-(void)_logDidEndViewingAllPhotosZoomStateName:(id)arg1 ;
-(void)setLibraryItemsCount:(long long)arg1 ;
-(long long)libraryItemsCount;
-(void)setUserEventSource:(unsigned long long)arg1 ;
-(void)_invalidateDominantObjectReference;
-(void)_invalidateCurrentlyViewedZoomLevel;
-(float)analysisProgress;
-(unsigned long long)userEventSource;
-(void)_updateCurrentlyViewedZoomLevel;
-(long long)currentZoomLevelSignpost;
-(void)_logDidStartViewingZoomLevel:(long long)arg1 ;
-(float)firstTimeExperienceAnalysisProgress;
-(void)setAnalysisProgress:(float)arg1 ;
-(id)userEventTracker;
-(void)_invalidateUserEventSource;
-(void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;
-(void)_logDidEndViewingZoomLevel:(long long)arg1 ;
-(id)initWithViewModel:(id)arg1 layout:(id)arg2 ;
-(void)_updateUserEventSource;
-(void)setCurrentlyViewedZoomLevel:(long long)arg1 ;
-(void)setFirstTimeExperienceLibraryItemsCount:(long long)arg1 ;
-(void)setFirstTimeExperienceAnalysisProgress:(float)arg1 ;
-(void)_invalidateCurrentAllPhotosZoomState;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXCuratedLibraryLayout *)layout;
@end

