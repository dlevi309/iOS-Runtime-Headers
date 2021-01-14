/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServicesUI.framework/BluetoothServicesUI
*/

#import <UIKitCore/UINavigationController.h>

@class BTShareAudioSessionClient, NSBundle, UIStoryboard, BTShareAudioConnectingViewController;

@interface BTShareAudioViewController : UINavigationController {

	unsigned _flags;
	/*^block*/id _completion;
	BTShareAudioSessionClient* _shareAudioSession;
	NSBundle* _mainBundle;
	UIStoryboard* _mainStoryboard;
	BTShareAudioConnectingViewController* _vcConnecting;

}

@property (nonatomic,retain) BTShareAudioSessionClient * shareAudioSession;                    //@synthesize shareAudioSession=_shareAudioSession - In the implementation block
@property (nonatomic,retain) NSBundle * mainBundle;                                            //@synthesize mainBundle=_mainBundle - In the implementation block
@property (nonatomic,retain) UIStoryboard * mainStoryboard;                                    //@synthesize mainStoryboard=_mainStoryboard - In the implementation block
@property (nonatomic,retain) BTShareAudioConnectingViewController * vcConnecting;              //@synthesize vcConnecting=_vcConnecting - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) unsigned flags;                                                   //@synthesize flags=_flags - In the implementation block
+(id)instantiateViewController;
-(void)setCompletion:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_sessionStart;
-(unsigned)flags;
-(id)completion;
-(void)setMainBundle:(NSBundle *)arg1 ;
-(void)reportError:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(NSBundle *)mainBundle;
-(void)_showError:(id)arg1 ;
-(void)setMainStoryboard:(UIStoryboard *)arg1 ;
-(void)_showBringClose;
-(void)_reportCompletion:(id)arg1 mediaRouteID:(id)arg2 ;
-(void)_sessionProgressEvent:(int)arg1 info:(id)arg2 ;
-(void)_showConfirm:(id)arg1 ;
-(void)_showPairInstructions:(id)arg1 ;
-(void)_showConnecting:(id)arg1 ;
-(void)_transitionToViewController:(id)arg1 animate:(BOOL)arg2 ;
-(id)_imageForPID:(unsigned)arg1 colorCode:(unsigned)arg2 ;
-(id)_moviePathForPID:(unsigned)arg1 colorCode:(unsigned)arg2 ;
-(void)reportUserCancelled;
-(BTShareAudioSessionClient *)shareAudioSession;
-(void)setShareAudioSession:(BTShareAudioSessionClient *)arg1 ;
-(UIStoryboard *)mainStoryboard;
-(BTShareAudioConnectingViewController *)vcConnecting;
-(void)setVcConnecting:(BTShareAudioConnectingViewController *)arg1 ;
@end

