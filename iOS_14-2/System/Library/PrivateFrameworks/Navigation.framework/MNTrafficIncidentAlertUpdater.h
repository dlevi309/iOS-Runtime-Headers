/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MNTrafficIncidentAlertUpdaterDelegate>)delegate;
-(void)setDelegate:(id<MNTrafficIncidentAlertUpdaterDelegate>)arg1 ;
-(void)clearAlerts;
-(void)updateForLocation:(id)arg1 ;
-(void)dealloc;
-(void)updateForReroute:(id)arg1 ;
-(void)updateForAlertFromResponse:(id)arg1 ;
-(void)updateRerouteProposalStatusForRequest:(id)arg1 ;
-(void)_activateAlertForLocation:(id)arg1 ;
-(void)_alertRetryTimerFired:(id)arg1 ;
-(void)_removeActiveAlert;
-(void)_updateAlertDistanceAndETA:(id)arg1 ;
@end

