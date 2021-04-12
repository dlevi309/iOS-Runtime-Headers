/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HearingAidsModule.bundle/HearingAidsModule
*/

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

@protocol HACCIconViewControllerDelegate;
@class NSString, CAStateController, CALayer, NSArray;

@interface HACCIconViewController : CCUIButtonModuleViewController {

	id<HACCIconViewControllerDelegate> _delegate;
	NSString* _assetState;
	CAStateController* _stateController;
	CALayer* _rootLayer;
	NSArray* _tickLayers;

}

@property (nonatomic,retain) CAStateController * stateController;                             //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) CALayer * rootLayer;                                             //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) NSArray * tickLayers;                                            //@synthesize tickLayers=_tickLayers - In the implementation block
@property (assign,nonatomic,__weak) id<HACCIconViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * assetState;                                         //@synthesize assetState=_assetState - In the implementation block
-(CAStateController *)stateController;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)startListening;
-(void)stopListening;
-(CALayer *)rootLayer;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(id<HACCIconViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<HACCIconViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSString *)assetState;
-(void)viewDidLayoutSubviews;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setRootLayer:(CALayer *)arg1 ;
-(void)updateViewWithState:(id)arg1 ;
-(void)updateViewWithAudioSample:(id)arg1 ;
-(void)updateViewWithExposure:(float)arg1 ;
-(NSArray *)tickLayers;
-(void)setTickLayers:(NSArray *)arg1 ;
@end

