/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXFeedbackFormDelegate.h>
#import <libobjc.A.dylib/PXAutoloopVideoTaskDelegate.h>

@protocol PXFeedbackAssetUIViewControllerDelegate;
@class PHAsset, NSDictionary, UINavigationController, PXFeedbackLikeItOrNotComboUIViewController, PXAutoloopVideoProcessTask, NSArray, NSString;

@interface PXFeedbackAssetUIViewController : UIViewController <PXFeedbackFormDelegate, PXAutoloopVideoTaskDelegate> {

	BOOL _userLikedIt;
	PHAsset* _asset;
	id<PXFeedbackAssetUIViewControllerDelegate> _delegate;
	NSDictionary* _positiveFeedback;
	NSDictionary* _negativeFeedback;
	UINavigationController* _navigationController;
	PXFeedbackLikeItOrNotComboUIViewController* _feedbackController;
	PXAutoloopVideoProcessTask* _autoLoopFrameworkDiagnosticsCurrentTask;
	NSArray* _autoLoopFrameworkDiagnosticFileURLs;

}

@property (nonatomic,retain) PHAsset * asset;                                                                   //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL userLikedIt;                                                                  //@synthesize userLikedIt=_userLikedIt - In the implementation block
@property (nonatomic,retain) NSDictionary * positiveFeedback;                                                   //@synthesize positiveFeedback=_positiveFeedback - In the implementation block
@property (nonatomic,retain) NSDictionary * negativeFeedback;                                                   //@synthesize negativeFeedback=_negativeFeedback - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                     //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) PXFeedbackLikeItOrNotComboUIViewController * feedbackController;                   //@synthesize feedbackController=_feedbackController - In the implementation block
@property (nonatomic,retain) PXAutoloopVideoProcessTask * autoLoopFrameworkDiagnosticsCurrentTask;              //@synthesize autoLoopFrameworkDiagnosticsCurrentTask=_autoLoopFrameworkDiagnosticsCurrentTask - In the implementation block
@property (nonatomic,retain) NSArray * autoLoopFrameworkDiagnosticFileURLs;                                     //@synthesize autoLoopFrameworkDiagnosticFileURLs=_autoLoopFrameworkDiagnosticFileURLs - In the implementation block
@property (nonatomic,__weak,readonly) id<PXFeedbackAssetUIViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAsset:(PHAsset *)arg1 ;
-(id<PXFeedbackAssetUIViewControllerDelegate>)delegate;
-(PHAsset *)asset;
-(BOOL)userLikedIt;
-(void)continueFiling;
-(void)autoloopVideoTaskStatusDidChange:(id)arg1 ;
-(void)_fileRadarWithAutoLoopAsset:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 ;
-(void)_startAutoLoopVideoTaskForDiagnosticsWithAsset:(id)arg1 ;
-(void)setUserLikedIt:(BOOL)arg1 ;
-(NSDictionary *)positiveFeedback;
-(void)setPositiveFeedback:(NSDictionary *)arg1 ;
-(PXAutoloopVideoProcessTask *)autoLoopFrameworkDiagnosticsCurrentTask;
-(void)setAutoLoopFrameworkDiagnosticsCurrentTask:(PXAutoloopVideoProcessTask *)arg1 ;
-(NSArray *)autoLoopFrameworkDiagnosticFileURLs;
-(void)setAutoLoopFrameworkDiagnosticFileURLs:(NSArray *)arg1 ;
-(id)initWithAsset:(id)arg1 delegate:(id)arg2 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)viewDidLoad;
-(void)userDidFinish:(BOOL)arg1 ;
-(id)longTitleText;
-(id)viewTitleForRadar;
-(id)negativeFeedbackKeys;
-(id)positiveFeedbackKeys;
-(BOOL)shouldDisplaySecondaryFeedbackButtons;
-(void)userIndicatedLike;
-(void)userIndicatedDislike;
-(void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3 ;
-(NSDictionary *)negativeFeedback;
-(void)setNegativeFeedback:(NSDictionary *)arg1 ;
-(PXFeedbackLikeItOrNotComboUIViewController *)feedbackController;
-(void)setFeedbackController:(PXFeedbackLikeItOrNotComboUIViewController *)arg1 ;
-(UINavigationController *)navigationController;
@end

