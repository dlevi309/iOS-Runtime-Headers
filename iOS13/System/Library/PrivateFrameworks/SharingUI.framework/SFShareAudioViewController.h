/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/UINavigationController.h>

@class SFShareAudioSessionClient, NSBundle, UIStoryboard, SFShareAudioConnectingViewController;

@interface SFShareAudioViewController : UINavigationController {

	unsigned _flags;
	/*^block*/id _completion;
	SFShareAudioSessionClient* _shareAudioSession;
	NSBundle* _mainBundle;
	UIStoryboard* _mainStoryboard;
	SFShareAudioConnectingViewController* _vcConnecting;

}

@property (nonatomic,retain) SFShareAudioSessionClient * shareAudioSession;                    //@synthesize shareAudioSession=_shareAudioSession - In the implementation block
@property (nonatomic,retain) NSBundle * mainBundle;                                            //@synthesize mainBundle=_mainBundle - In the implementation block
@property (nonatomic,retain) UIStoryboard * mainStoryboard;                                    //@synthesize mainStoryboard=_mainStoryboard - In the implementation block
@property (nonatomic,retain) SFShareAudioConnectingViewController * vcConnecting;              //@synthesize vcConnecting=_vcConnecting - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) unsigned flags;                                                   //@synthesize flags=_flags - In the implementation block
+(id)instantiateViewController;
-(unsigned)flags;
-(NSBundle *)mainBundle;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setFlags:(unsigned)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)reportError:(id)arg1 ;
-(void)_sessionStart;
-(void)_showError:(id)arg1 ;
-(void)setMainBundle:(NSBundle *)arg1 ;
-(void)setMainStoryboard:(UIStoryboard *)arg1 ;
-(void)_showBringClose;
-(void)_reportCompletion:(id)arg1 mediaRouteID:(id)arg2 ;
-(void)_sessionProgressEvent:(int)arg1 info:(id)arg2 ;
-(void)_showConfirm:(id)arg1 ;
-(void)_showPairInstructions:(id)arg1 ;
-(void)_showConnecting:(id)arg1 ;
-(void)_transitionToViewController:(id)arg1 animate:(BOOL)arg2 ;
-(void)reportUserCancelled;
-(SFShareAudioSessionClient *)shareAudioSession;
-(void)setShareAudioSession:(SFShareAudioSessionClient *)arg1 ;
-(UIStoryboard *)mainStoryboard;
-(SFShareAudioConnectingViewController *)vcConnecting;
-(void)setVcConnecting:(SFShareAudioConnectingViewController *)arg1 ;
@end

