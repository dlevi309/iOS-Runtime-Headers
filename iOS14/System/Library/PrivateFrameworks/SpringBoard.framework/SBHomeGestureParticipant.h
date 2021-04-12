/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBHomeGestureParticipantDelegate;
@class NSIndexSet, SBHomeGestureArbiter, NSString;

@interface SBHomeGestureParticipant : NSObject <BSDescriptionProviding> {

	BOOL _ownsHomeGesture;
	BOOL _canShareOwnershipWithNextParticipant;
	long long _identifier;
	id<SBHomeGestureParticipantDelegate> _delegate;
	long long _homeAffordanceSuppression;
	long long _resolvedHomeAffordanceSuppression;
	NSIndexSet* _trumpsAdditionalIdentifiers;
	SBHomeGestureArbiter* _arbiter;

}

@property (assign,nonatomic,__weak) SBHomeGestureArbiter * arbiter;                             //@synthesize arbiter=_arbiter - In the implementation block
@property (assign,nonatomic) BOOL ownsHomeGesture;                                              //@synthesize ownsHomeGesture=_ownsHomeGesture - In the implementation block
@property (assign,nonatomic) long long resolvedHomeAffordanceSuppression;                       //@synthesize resolvedHomeAffordanceSuppression=_resolvedHomeAffordanceSuppression - In the implementation block
@property (assign,nonatomic) long long identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<SBHomeGestureParticipantDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canShareOwnershipWithNextParticipant;                         //@synthesize canShareOwnershipWithNextParticipant=_canShareOwnershipWithNextParticipant - In the implementation block
@property (assign,nonatomic) long long homeAffordanceSuppression;                               //@synthesize homeAffordanceSuppression=_homeAffordanceSuppression - In the implementation block
@property (nonatomic,copy) NSIndexSet * trumpsAdditionalIdentifiers;                            //@synthesize trumpsAdditionalIdentifiers=_trumpsAdditionalIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id<SBHomeGestureParticipantDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)ownsHomeGesture;
-(void)setDelegate:(id<SBHomeGestureParticipantDelegate>)arg1 ;
-(NSString *)description;
-(SBHomeGestureArbiter *)arbiter;
-(void)invalidate;
-(void)setIdentifier:(long long)arg1 ;
-(long long)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithIdentifier:(long long)arg1 ;
-(void)dealloc;
-(long long)homeAffordanceSuppression;
-(void)setHomeAffordanceSuppression:(long long)arg1 ;
-(void)setTrumpsAdditionalIdentifiers:(NSIndexSet *)arg1 ;
-(long long)resolvedHomeAffordanceSuppression;
-(void)setCanShareOwnershipWithNextParticipant:(BOOL)arg1 ;
-(BOOL)canShareOwnershipWithNextParticipant;
-(void)setOwnsHomeGesture:(BOOL)arg1 ;
-(void)setArbiter:(SBHomeGestureArbiter *)arg1 ;
-(NSIndexSet *)trumpsAdditionalIdentifiers;
-(void)setResolvedHomeAffordanceSuppression:(long long)arg1 ;
@end

