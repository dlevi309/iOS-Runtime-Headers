/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTrafficIncidentAlertUpdaterDelegate;
@class MNLocation, MNTrafficIncidentAlert, NSTimer;

@interface MNTrafficIncidentAlertUpdater : NSObject {

	id<MNTrafficIncidentAlertUpdaterDelegate> _delegate;
	MNLocation* _lastLocation;
	MNTrafficIncidentAlert* _pendingAlert;
	MNTrafficIncidentAlert* _activeAlert;
	BOOL _isSpeakingAlert;
	int _trafficIncidentStatus;
	NSTimer* _alertRetryTimer;

}

@property (assign,nonatomic,__weak) id<MNTrafficIncidentAlertUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<MNTrafficIncidentAlertUpdaterDelegate>)delegate;
-(void)setDelegate:(id<MNTrafficIncidentAlertUpdaterDelegate>)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(void)clearAlerts;
-(void)updateForReroute:(id)arg1 ;
-(void)updateRerouteProposalStatusForRequest:(id)arg1 ;
-(void)updateForAlertFromResponse:(id)arg1 ;
-(void)_activateAlertForLocation:(id)arg1 ;
-(void)_alertRetryTimerFired:(id)arg1 ;
-(void)_removeActiveAlert;
-(void)_updateAlertDistanceAndETA:(id)arg1 ;
@end

