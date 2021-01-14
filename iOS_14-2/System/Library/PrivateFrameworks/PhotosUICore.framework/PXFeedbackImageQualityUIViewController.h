/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXFeedbackFormDelegate.h>

@protocol PXFeedbackImageQualityUIViewControllerDelegate;
@class NSArray, NSDictionary, UINavigationController, PXFeedbackLikeItOrNotComboUIViewController, NSString;

@interface PXFeedbackImageQualityUIViewController : UIViewController <PXFeedbackFormDelegate> {

	NSArray* _assets;
	id<PXFeedbackImageQualityUIViewControllerDelegate> _delegate;
	NSDictionary* _negativeFeedback;
	UINavigationController* _navigationController;
	PXFeedbackLikeItOrNotComboUIViewController* _feedbackController;
	NSArray* _imageQualityDiagnosticFileURLs;

}

@property (nonatomic,retain) NSArray * assets;                                                                  //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSDictionary * negativeFeedback;                                                   //@synthesize negativeFeedback=_negativeFeedback - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                     //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) PXFeedbackLikeItOrNotComboUIViewController * feedbackController;                   //@synthesize feedbackController=_feedbackController - In the implementation block
@property (nonatomic,retain) NSArray * imageQualityDiagnosticFileURLs;                                          //@synthesize imageQualityDiagnosticFileURLs=_imageQualityDiagnosticFileURLs - In the implementation block
@property (nonatomic,__weak,readonly) id<PXFeedbackImageQualityUIViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)assets;
-(id<PXFeedbackImageQualityUIViewControllerDelegate>)delegate;
-(id)initWithAssets:(id)arg1 delegate:(id)arg2 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)viewDidLoad;
-(void)setAssets:(NSArray *)arg1 ;
-(void)userDidFinish:(BOOL)arg1 ;
-(BOOL)wantsCustomFeedbackSection;
-(BOOL)wantsPositiveFeedbackSection;
-(BOOL)shouldContinuePresentingFormAfterFeedback;
-(id)longTitleText;
-(id)viewTitleForRadar;
-(id)negativeFeedbackKeys;
-(id)positiveFeedbackKeys;
-(BOOL)shouldDisplaySecondaryFeedbackButtons;
-(void)userIndicatedLike;
-(void)userIndicatedDislike;
-(void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3 ;
-(void)_fileRadarWithAssets:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 customFeedback:(id)arg4 ;
-(void)_generateResourceFilesForAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_generateTitleForFeedback:(id)arg1 ;
-(long long)_radarComponentForFeedback:(id)arg1 ;
-(id)_componentIDForComponent:(long long)arg1 ;
-(id)_componentNameForComponent:(long long)arg1 ;
-(id)_keywordIDForComponent:(long long)arg1 ;
-(id)_generateURLsForAssetsDBGFiles:(id)arg1 ;
-(NSDictionary *)negativeFeedback;
-(void)setNegativeFeedback:(NSDictionary *)arg1 ;
-(PXFeedbackLikeItOrNotComboUIViewController *)feedbackController;
-(void)setFeedbackController:(PXFeedbackLikeItOrNotComboUIViewController *)arg1 ;
-(NSArray *)imageQualityDiagnosticFileURLs;
-(void)setImageQualityDiagnosticFileURLs:(NSArray *)arg1 ;
-(UINavigationController *)navigationController;
@end

