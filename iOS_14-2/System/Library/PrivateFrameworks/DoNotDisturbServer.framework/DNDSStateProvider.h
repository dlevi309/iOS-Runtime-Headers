/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@class DNDState;

@interface DNDSStateProvider : NSObject {

	DNDState* _lastCalculatedState;

}

@property (copy) DNDState * lastCalculatedState;              //@synthesize lastCalculatedState=_lastCalculatedState - In the implementation block
-(DNDState *)lastCalculatedState;
-(void)setLastCalculatedState:(DNDState *)arg1 ;
-(id)recalculateStateForSnapshot:(id)arg1 ;
@end

