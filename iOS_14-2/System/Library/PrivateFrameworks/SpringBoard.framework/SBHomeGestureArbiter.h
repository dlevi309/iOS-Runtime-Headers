/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBHardwareButtonServiceObserver.h>

@protocol BSInvalidatable;
@class NSMutableArray, NSArray, SBHomeGestureParticipant, NSString;

@interface SBHomeGestureArbiter : NSObject <BSDescriptionProviding, SBHardwareButtonServiceObserver> {

	id<BSInvalidatable> _stateCaptureHandle;
	NSMutableArray* _participants;
	NSArray* _owningParticipants;
	SBHomeGestureParticipant* _hardwareButtonServiceParticipant;
	id<BSInvalidatable> _hardwareButtonObserverAssertion;

}

@property (nonatomic,retain) id<BSInvalidatable> stateCaptureHandle;                                                              //@synthesize stateCaptureHandle=_stateCaptureHandle - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;                                                                       //@synthesize participants=_participants - In the implementation block
@property (setter=_setOwningParticipants:,getter=_owningParticipants,nonatomic,retain) NSArray * owningParticipants;              //@synthesize owningParticipants=_owningParticipants - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * hardwareButtonServiceParticipant;                                         //@synthesize hardwareButtonServiceParticipant=_hardwareButtonServiceParticipant - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> hardwareButtonObserverAssertion;                                                 //@synthesize hardwareButtonObserverAssertion=_hardwareButtonObserverAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStateCaptureHandle:(id<BSInvalidatable>)arg1 ;
-(id)succinctDescription;
-(id<BSInvalidatable>)stateCaptureHandle;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(NSMutableArray *)participants;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(id)participantWithIdentifier:(long long)arg1 delegate:(id)arg2 ;
-(void)buttonService:(id)arg1 buttonKind:(long long)arg2 eventsConsumedDidChange:(unsigned long long)arg3 ;
-(void)_updateHardwareButtonServiceParticipant;
-(void)_unregisterParticipant:(id)arg1 ;
-(void)_registerParticipant:(id)arg1 ;
-(void)_updateOwningParticipants;
-(void)_setOwningParticipants:(id)arg1 ;
-(SBHomeGestureParticipant *)hardwareButtonServiceParticipant;
-(void)setHardwareButtonServiceParticipant:(SBHomeGestureParticipant *)arg1 ;
-(id)_owningParticipants;
-(id<BSInvalidatable>)hardwareButtonObserverAssertion;
-(void)setHardwareButtonObserverAssertion:(id<BSInvalidatable>)arg1 ;
@end

