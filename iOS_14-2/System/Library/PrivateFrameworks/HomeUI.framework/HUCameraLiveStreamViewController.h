/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraLiveStreamControllerDelegate.h>

@protocol HFCameraLiveStreamControllerDelegate;
@class HFCameraLiveStreamController, HUCameraView, NSString;

@interface HUCameraLiveStreamViewController : UIViewController <HFCameraLiveStreamControllerDelegate> {

	id<HFCameraLiveStreamControllerDelegate> _liveStreamControllerDelegate;
	HFCameraLiveStreamController* _liveStreamController;
	HUCameraView* _cameraView;

}

@property (nonatomic,retain) HFCameraLiveStreamController * liveStreamController;                                       //@synthesize liveStreamController=_liveStreamController - In the implementation block
@property (nonatomic,retain) HUCameraView * cameraView;                                                                 //@synthesize cameraView=_cameraView - In the implementation block
@property (assign,nonatomic,__weak) id<HFCameraLiveStreamControllerDelegate> liveStreamControllerDelegate;              //@synthesize liveStreamControllerDelegate=_liveStreamControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HUCameraView *)cameraView;
-(void)setCameraView:(HUCameraView *)arg1 ;
-(id)initWithCameraProfile:(id)arg1 ;
-(void)streamControllerStateDidUpdate:(id)arg1 ;
-(HFCameraLiveStreamController *)liveStreamController;
-(void)setLiveStreamController:(HFCameraLiveStreamController *)arg1 ;
-(void)viewDidLoad;
-(void)setLiveStreamControllerDelegate:(id<HFCameraLiveStreamControllerDelegate>)arg1 ;
-(id<HFCameraLiveStreamControllerDelegate>)liveStreamControllerDelegate;
@end

