/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEONavigationServerPushStateXPCInterface.h>

@class GEONavdPeer, NSMutableArray, NSData, NSString;

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface> {

	GEONavdPeer* _pushStatePeer;
	NSMutableArray* _listenerPeers;
	BOOL _isListenerConnectionOpen;
	int _listenerConnectionOpenToken;
	unsigned long long _state;
	int _transportType;
	NSData* _routeSummaryData;
	NSData* _transitSummaryData;
	NSData* _guidanceStateData;
	NSData* _activeRouteDetailsData;
	NSData* _stepIndexData;
	NSData* _stepNameInfoData;
	NSData* _rideSelectionsData;
	NSData* _positionFromSignData;
	NSData* _positionFromManeuverData;
	NSData* _positionFromDestinationData;
	NSData* _trafficIncidentAlertDetailsData;
	NSData* _navigationVoiceVolumeData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id)init;
-(void)dealloc;
-(void)clearAllData;
-(void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 ;
-(void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1 ;
-(void)setRouteSummaryWithTransitSummaryData:(id)arg1 ;
-(void)setRouteSummaryWithGuidanceStateData:(id)arg1 ;
-(void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1 ;
-(void)setRouteSummaryWithStepIndexData:(id)arg1 ;
-(void)setRouteSummaryWithStepNameInfoData:(id)arg1 ;
-(void)setRouteSummaryWithRideSelectionsData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromSignData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromManeuverData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromDestinationData:(id)arg1 ;
-(void)setRouteSummaryWithTrafficIncidentAlertDetailsData:(id)arg1 ;
-(void)setNavigationVoiceVolumeWithData:(id)arg1 ;
-(void)setCurrentRoadName:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(BOOL)arg2 ;
-(void)_requestRouteSummaryWithPeer:(id)arg1 ;
-(void)_requestTransitSummaryWithPeer:(id)arg1 ;
-(void)_requestGuidanceStateWithPeer:(id)arg1 ;
-(void)_requestActiveRouteDetailsDataWithPeer:(id)arg1 ;
-(void)_requestStepIndexWithPeer:(id)arg1 ;
-(void)_requestStepNameInfoWithPeer:(id)arg1 ;
-(void)_requestRideSelectionsWithPeer:(id)arg1 ;
-(void)_requestPositionFromSignWithPeer:(id)arg1 ;
-(void)_requestPositionFromManeuverWithPeer:(id)arg1 ;
-(void)_requestPositionFromDestinationWithPeer:(id)arg1 ;
-(void)_requestTrafficIncidentDetailsDataWithPeer:(id)arg1 ;
-(void)_requestNavigationVoiceVolumeWithPeer:(id)arg1 ;
-(void)_openPushStatePeerConnection:(id)arg1 ;
-(void)_notifyListenersOpenConnection;
-(void)_forEachValidPeerProxy:(/*^block*/id)arg1 ;
-(void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2 ;
-(void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3 ;
-(void)_closePushStatePeerConnection;
@end

