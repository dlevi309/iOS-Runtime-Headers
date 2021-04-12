/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSurveyQuestionGadgetDelegate.h>
#import <libobjc.A.dylib/PXSurveyQuestionCongratulationsGadgetDelegate.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PXPhotoKitUIMediaProvider, PXAssetsDataSourceManager, PXAssetReference, PHPhotoLibrary, NSString, NSArray, PXSurveyQuestionsDataSource, NSDate, PXGadgetNavigationHelper;

@interface PXSurveyQuestionsGadgetProvider : PXGadgetProvider <PXSurveyQuestionGadgetDelegate, PXSurveyQuestionCongratulationsGadgetDelegate, PXOneUpPresentationDelegate, PXPhotoLibraryUIChangeObserver> {

	PXPhotoKitUIMediaProvider* _oneUpMediaProvider;
	PXAssetsDataSourceManager* _oneUpDataSourceManager;
	PXAssetReference* _oneUpInitialAssetReference;
	PHPhotoLibrary* _photoLibrary;
	BOOL _currentlyLoadingMoreQuestions;
	NSString* _localizedTitle;
	NSArray* _surveyGadgets;
	PXSurveyQuestionsDataSource* _dataSource;
	NSDate* _previousMostRecentQuestionCreationDate;

}

@property (nonatomic,retain) NSArray * surveyGadgets;                                        //@synthesize surveyGadgets=_surveyGadgets - In the implementation block
@property (nonatomic,retain) PXSurveyQuestionsDataSource * dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL currentlyLoadingMoreQuestions;                             //@synthesize currentlyLoadingMoreQuestions=_currentlyLoadingMoreQuestions - In the implementation block
@property (nonatomic,retain) NSDate * previousMostRecentQuestionCreationDate;                //@synthesize previousMostRecentQuestionCreationDate=_previousMostRecentQuestionCreationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                               //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isAppleInternal;
-(void)generateGadgets;
-(NSString *)localizedTitle;
-(id)init;
-(void)loadDataForGadgets;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(PXSurveyQuestionsDataSource *)dataSource;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)setDataSource:(PXSurveyQuestionsDataSource *)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(BOOL)_prepareForOneUpPresentationForGadget:(id)arg1 ;
-(void)resumeLibraryUpdates;
-(void)pauseLibraryUpdates;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(void)didSelectActionButtonForType:(unsigned long long)arg1 ;
-(void)didAnswerQuestionForGadget:(id)arg1 ;
-(void)surveyQuestionGadgetsWantsOneUpPresentation:(id)arg1 ;
-(NSArray *)surveyGadgets;
-(void)_generateGadgetsWithLimit:(unsigned long long)arg1 removeExistingGadgets:(BOOL)arg2 ;
-(void)_generateGadgetsWithLimit:(unsigned long long)arg1 ;
-(id)_gadgetForSurveyQuestion:(id)arg1 ;
-(void)showViewController:(id)arg1 fromGadget:(id)arg2 ;
-(void)_showSubmitLabelDatabaseViewControllerIfNeededForGadget:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_addCongratulationsGadgetWithCompletionHandlerIfNeeded:(/*^block*/id)arg1 ;
-(void)_handlePrepareForOneUpPresentationSuccessForGadget:(id)arg1 ;
-(id)_targetGadgetForCurrentOneUpPresentation;
-(void)_reloadGadgetsWithLimit:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSurveyGadgets:(NSArray *)arg1 ;
-(BOOL)currentlyLoadingMoreQuestions;
-(void)setCurrentlyLoadingMoreQuestions:(BOOL)arg1 ;
-(NSDate *)previousMostRecentQuestionCreationDate;
-(void)setPreviousMostRecentQuestionCreationDate:(NSDate *)arg1 ;
-(void)dealloc;
@end

