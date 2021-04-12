/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPSenderStrategy.h>

@interface MSPSenderLiveStrategy : MSPSenderStrategy {

	BOOL _needToSendRoute;

}
-(void)setState:(id)arg1 ;
-(void)addParticipants:(id)arg1 ;
-(void)etaUpdated:(id)arg1 ;
-(void)destinationUpdated:(id)arg1 ;
-(void)routeUpdated:(id)arg1 ;
-(void)trafficUpdated:(id)arg1 ;
-(BOOL)_needToSendEtaRefreshFor:(id)arg1 ;
@end

