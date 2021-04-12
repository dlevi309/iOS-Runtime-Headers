/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBHardwareButtonServiceObserver.h>

@protocol BSInvalidatable;
@class NSMutableArray, SBHomeGestureParticipant, NSString;

@interface SBHomeGestureArbiter : NSObject <BSDescriptionProviding, SBHardwareButtonServiceObserver> {

	id<BSInvalidatable> _stateCaptureHandle;
	NSMutableArray* _participants;
	SBHomeGestureParticipant* _owningParticipant;
	SBHomeGestureParticipant* _hardwareButtonServiceParticipant;
	id<BSInvalidatable> _hardwareButtonObserverAssertion;

}

@property (nonatomic,retain) id<BSInvalidatable> stateCaptureHandle;                                   //@synthesize stateCaptureHandle=_stateCaptureHandle - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;                                            //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * owningParticipant;                             //@synthesize owningParticipant=_owningParticipant - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * hardwareButtonServiceParticipant;              //@synthesize hardwareButtonServiceParticipant=_hardwareButtonServiceParticipant - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> hardwareButtonObserverAssertion;                      //@synthesize hardwareButtonObserverAssertion=_hardwareButtonObserverAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSMutableArray *)participants;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(id<BSInvalidatable>)stateCaptureHandle;
-(void)setStateCaptureHandle:(id<BSInvalidatable>)arg1 ;
-(id)participantWithIdentifier:(long long)arg1 delegate:(id)arg2 ;
-(void)buttonService:(id)arg1 buttonKind:(long long)arg2 eventsConsumedDidChange:(unsigned long long)arg3 ;
-(void)_updateHardwareButtonServiceParticipant;
-(void)_unregisterParticipant:(id)arg1 ;
-(void)_registerParticipant:(id)arg1 ;
-(void)_updateOwningParticipant;
-(void)setOwningParticipant:(SBHomeGestureParticipant *)arg1 ;
-(SBHomeGestureParticipant *)hardwareButtonServiceParticipant;
-(void)setHardwareButtonServiceParticipant:(SBHomeGestureParticipant *)arg1 ;
-(SBHomeGestureParticipant *)owningParticipant;
-(id<BSInvalidatable>)hardwareButtonObserverAssertion;
-(void)setHardwareButtonObserverAssertion:(id<BSInvalidatable>)arg1 ;
@end

