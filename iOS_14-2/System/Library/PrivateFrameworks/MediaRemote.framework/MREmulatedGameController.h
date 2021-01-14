/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithProperties:(id)arg1 ;
-(id<MREmulatedGameControllerDelegate>)delegate;
-(void)_handleGameControllerDidChange:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(double)buttonAUpDelay;
-(void)setButtonAUpDelay:(double)arg1 ;
-(void)setController:(GCController *)arg1 ;
-(void)setDelegate:(id<MREmulatedGameControllerDelegate>)arg1 ;
-(int)profile;
-(GCController *)controller;
-(void)dealloc;
@end

