/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXActivity.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIViewController, PXAlertController, PUCompositeVideoGenerator, AVAssetExportSession, NSString;

@interface PUCompositeVideoActivity : PXActivity <PXChangeObserver> {

	BOOL _cancelled;
	UIViewController* _presenterViewController;
	PXAlertController* _progressController;
	PUCompositeVideoGenerator* _generator;
	AVAssetExportSession* _exportSession;

}

@property (nonatomic,retain) UIViewController * presenterViewController;              //@synthesize presenterViewController=_presenterViewController - In the implementation block
@property (nonatomic,retain) PXAlertController * progressController;                  //@synthesize progressController=_progressController - In the implementation block
@property (nonatomic,retain) PUCompositeVideoGenerator * generator;                   //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) AVAssetExportSession * exportSession;                    //@synthesize exportSession=_exportSession - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                       //@synthesize cancelled=_cancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCancelled:(BOOL)arg1 ;
-(id)activityType;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setPresenterViewController:(UIViewController *)arg1 ;
-(UIViewController *)presenterViewController;
-(AVAssetExportSession *)exportSession;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
-(id)_systemImageName;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_exportGeneratedVideo;
-(void)_sucessfullyFinishedSaving:(BOOL)arg1 error:(id)arg2 ;
-(void)_finishWithSuccess:(BOOL)arg1 cancelled:(BOOL)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)setGenerator:(PUCompositeVideoGenerator *)arg1 ;
-(BOOL)isCancelled;
-(PUCompositeVideoGenerator *)generator;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)activityViewController;
-(PXAlertController *)progressController;
-(void)setProgressController:(PXAlertController *)arg1 ;
@end

