/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPSenderStrategy.h>

@interface MSPSenderMinimalStrategy : MSPSenderStrategy {

	BOOL _needToSendInit;

}
-(void)addParticipants:(id)arg1 ;
-(void)etaUpdated:(id)arg1 ;
-(void)destinationUpdated:(id)arg1 ;
-(BOOL)_validDestinationState:(id)arg1 ;
-(void)_sendDestinationIfNeeded;
-(BOOL)_needToSendEtaRefreshFor:(id)arg1 state:(id)arg2 ;
@end

