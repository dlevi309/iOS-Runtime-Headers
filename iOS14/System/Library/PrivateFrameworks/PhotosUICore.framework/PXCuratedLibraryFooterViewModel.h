/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFooterViewModel.h>
#import <libobjc.A.dylib/PXCloudQuotaControllerDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PXCuratedLibraryFooterViewModelPresentationDelegate;
@class PXCPLUIStatusProvider, PXCloudQuotaController, PXCuratedLibraryViewModel, PXContentFilterFooterController, NSArray, PXCuratedLibraryAnalysisStatus, PXAssetsDataSourceCountsController, PXFooterSettings, NSString;

@interface PXCuratedLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerDelegate, PXChangeObserver, PXSettingsKeyObserver> {

	PXCPLUIStatusProvider* _cplUIStatusProvider;
	PXCloudQuotaController* _cloudQuotaController;
	PXCuratedLibraryViewModel* _curatedLibraryViewModel;
	PXContentFilterFooterController* _filterFooterController;
	long long _animatedGridCycleIndex;
	BOOL _hasImportantInformation;
	BOOL _isFooterShown;
	NSArray* _syncProgressAlbums;
	id<PXCuratedLibraryFooterViewModelPresentationDelegate> _presentingDelegate;
	long long _mode;
	PXCuratedLibraryAnalysisStatus* _analysisStatus;
	PXAssetsDataSourceCountsController* _itemCountsController;
	PXFooterSettings* _settings;

}

@property (nonatomic,readonly) PXAssetsDataSourceCountsController * itemCountsController;                                    //@synthesize itemCountsController=_itemCountsController - In the implementation block
@property (nonatomic,readonly) NSArray * syncProgressAlbums;                                                                 //@synthesize syncProgressAlbums=_syncProgressAlbums - In the implementation block
@property (nonatomic,readonly) PXFooterSettings * settings;                                                                  //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL isFooterShown;                                                                             //@synthesize isFooterShown=_isFooterShown - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlternateTitleWithAnimatedGridCycle; 
@property (assign,nonatomic,__weak) id<PXCuratedLibraryFooterViewModelPresentationDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL hasImportantInformation;                                                                 //@synthesize hasImportantInformation=_hasImportantInformation - In the implementation block
@property (nonatomic,readonly) PXCloudQuotaController * cloudQuotaController;                                                //@synthesize cloudQuotaController=_cloudQuotaController - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAnalysisStatus * analysisStatus;                                              //@synthesize analysisStatus=_analysisStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasAnalysisProgressForMode:(long long)arg1 analysisStatus:(id)arg2 cplUIStatus:(id)arg3 userDefaults:(id)arg4 outAnimatedIconMode:(long long*)arg5 outProgress:(float*)arg6 outTitle:(id*)arg7 outDescription:(id*)arg8 ;
+(id)_titleWithOptionalDescription:(id*)arg1 progress:(float*)arg2 forMode:(long long)arg3 itemCountsController:(id)arg4 analysisStatus:(id)arg5 cplUIStatus:(id)arg6 inRebuild:(BOOL)arg7 ;
+(BOOL)hasCPLStatusForCPLUIStatus:(id)arg1 ;
-(PXAssetsDataSourceCountsController *)itemCountsController;
-(id<PXCuratedLibraryFooterViewModelPresentationDelegate>)presentingDelegate;
-(long long)mode;
-(void)_updateHasImportantInformation;
-(BOOL)shouldAlternateTitleWithAnimatedGridCycle;
-(id)init;
-(PXCuratedLibraryAnalysisStatus *)analysisStatus;
-(BOOL)isFooterShown;
-(void)setPresentingDelegate:(id<PXCuratedLibraryFooterViewModelPresentationDelegate>)arg1 ;
-(void)setHasImportantInformation:(BOOL)arg1 ;
-(void)didHideFooter;
-(void)setMode:(long long)arg1 ;
-(void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2 ;
-(void)didShowFooter;
-(id)initWithItemCountsController:(id)arg1 cplUIStatusProvider:(id)arg2 analysisStatus:(id)arg3 mode:(long long)arg4 viewModel:(id)arg5 ;
-(void)_updateExposedProperties;
-(NSArray *)syncProgressAlbums;
-(PXCloudQuotaController *)cloudQuotaController;
-(id)presentingViewControllerForCloudQuotaController:(id)arg1 ;
-(void)footerAnimationCrossedGridCycleBoundary;
-(PXFooterSettings *)settings;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)hasImportantInformation;
-(void)setIsFooterShown:(BOOL)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

