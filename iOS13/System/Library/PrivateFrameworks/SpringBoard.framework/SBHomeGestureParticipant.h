/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBHomeGestureParticipantDelegate;
@class NSIndexSet, SBHomeGestureArbiter, NSString;

@interface SBHomeGestureParticipant : NSObject <BSDescriptionProviding> {

	BOOL _ownsHomeGesture;
	long long _identifier;
	id<SBHomeGestureParticipantDelegate> _delegate;
	NSIndexSet* _trumpsAdditionalIdentifiers;
	SBHomeGestureArbiter* _arbiter;

}

@property (assign,nonatomic,__weak) SBHomeGestureArbiter * arbiter;                             //@synthesize arbiter=_arbiter - In the implementation block
@property (assign,nonatomic) BOOL ownsHomeGesture;                                              //@synthesize ownsHomeGesture=_ownsHomeGesture - In the implementation block
@property (assign,nonatomic) long long identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<SBHomeGestureParticipantDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSIndexSet * trumpsAdditionalIdentifiers;                            //@synthesize trumpsAdditionalIdentifiers=_trumpsAdditionalIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<SBHomeGestureParticipantDelegate>)delegate;
-(void)setDelegate:(id<SBHomeGestureParticipantDelegate>)arg1 ;
-(long long)identifier;
-(void)setIdentifier:(long long)arg1 ;
-(id)initWithIdentifier:(long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)ownsHomeGesture;
-(void)setTrumpsAdditionalIdentifiers:(NSIndexSet *)arg1 ;
-(void)setOwnsHomeGesture:(BOOL)arg1 ;
-(void)setArbiter:(SBHomeGestureArbiter *)arg1 ;
-(NSIndexSet *)trumpsAdditionalIdentifiers;
-(SBHomeGestureArbiter *)arbiter;
@end

