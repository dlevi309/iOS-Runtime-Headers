/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPSenderStrategy.h>

@interface MSPSenderLiveStrategy : MSPSenderStrategy {

	BOOL _needToSendRoute;

}
-(void)addParticipants:(id)arg1 ;
-(void)setState:(id)arg1 ;
-(void)etaUpdated:(id)arg1 ;
-(void)destinationUpdated:(id)arg1 ;
-(void)routeUpdated:(id)arg1 ;
-(void)trafficUpdated:(id)arg1 ;
-(BOOL)_needToSendEtaRefreshFor:(id)arg1 ;
@end

