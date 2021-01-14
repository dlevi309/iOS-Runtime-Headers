/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(GEONavigationServer *)delegate;
-(void)requestRideSelections;
-(void)requestNavigationVoiceVolume;
-(void)requestPositionFromDestination;
-(void)setDelegate:(GEONavigationServer *)arg1 ;
-(void)requestStepNameInfo;
-(void)requestStepIndex;
-(void)requestUpdates;
-(void)requestPositionFromManeuver;
-(void)requestTransitSummary;
-(void)requestRouteSummary;
-(void)requestActiveRouteDetailsData;
-(void)requestPositionFromSign;
-(void)requestGuidanceState;
-(void)dealloc;
@end

