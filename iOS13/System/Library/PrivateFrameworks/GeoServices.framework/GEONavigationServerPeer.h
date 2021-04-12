/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEONavdPeer.h>
#import <libobjc.A.dylib/GEONavigationServerRequestStateXPCInterface.h>

@class GEONavigationServer, NSString;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface> {

	GEONavigationServer* _delegate;

}

@property (assign,nonatomic,__weak) GEONavigationServer * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(GEONavigationServer *)delegate;
-(void)setDelegate:(GEONavigationServer *)arg1 ;
-(void)requestRouteSummary;
-(void)requestTransitSummary;
-(void)requestGuidanceState;
-(void)requestActiveRouteDetailsData;
-(void)requestStepIndex;
-(void)requestStepNameInfo;
-(void)requestRideSelections;
-(void)requestPositionFromSign;
-(void)requestPositionFromManeuver;
-(void)requestPositionFromDestination;
-(void)requestTrafficIncidentDetailsData;
-(void)requestNavigationVoiceVolume;
-(void)requestUpdates;
@end

