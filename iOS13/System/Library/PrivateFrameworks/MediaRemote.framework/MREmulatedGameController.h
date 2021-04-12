/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MREmulatedGameControllerDelegate;
@class MRGameControllerDaemonProxy, GCController;

@interface MREmulatedGameController : NSObject {

	MRGameControllerDaemonProxy* _remote;
	int _profile;
	double _buttonAUpDelay;
	id<MREmulatedGameControllerDelegate> _delegate;
	GCController* _controller;

}

@property (nonatomic,retain) GCController * controller;                                         //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) int profile;                                                     //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) double buttonAUpDelay;                                             //@synthesize buttonAUpDelay=_buttonAUpDelay - In the implementation block
@property (assign,nonatomic,__weak) id<MREmulatedGameControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<MREmulatedGameControllerDelegate>)delegate;
-(void)setDelegate:(id<MREmulatedGameControllerDelegate>)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(int)profile;
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(void)setButtonAUpDelay:(double)arg1 ;
-(double)buttonAUpDelay;
-(void)_handleGameControllerDidChange:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
@end

