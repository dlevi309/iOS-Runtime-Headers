/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@class RBConcreteTarget, RBSAssertionIdentifier, NSString, NSArray, RBSystemState, RBProcessState, RBAssertionTransientState, RBAssertionIntransientState, NSSet, RBSProcessAssertionInfo, RBProcess, RBInheritanceCollection;

@interface RBAssertion : NSObject <RBStateCapturing> {

	os_unfair_lock_s _lock;
	RBConcreteTarget* _target;
	RBSAssertionIdentifier* _identifier;
	NSString* _explanation;
	NSArray* _attributes;
	RBSystemState* _systemState;
	RBProcessState* _processState;
	RBAssertionTransientState* _transientState;
	RBAssertionIntransientState* _intransientState;
	double _creationTime;
	unsigned long long _invalidationReason;
	unsigned long long _acquisitionCompletionPolicy;
	NSSet* _originatorInheritances;
	RBSProcessAssertionInfo* _assertionInfo;
	id _plugInHoldToken;
	BOOL _suspended;
	BOOL _persistent;
	BOOL _active;
	BOOL _resolvedState;
	RBProcess* _originator;
	NSString* _description;

}

@property (nonatomic,copy,readonly) RBConcreteTarget * target;                                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) RBProcess * originator;                                           //@synthesize originator=_originator - In the implementation block
@property (nonatomic,copy,readonly) RBSAssertionIdentifier * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * explanation;                                      //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attributes;                                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) RBInheritanceCollection * inheritances; 
@property (nonatomic,copy,readonly) RBAssertionIntransientState * intransientState;              //@synthesize intransientState=_intransientState - In the implementation block
@property (nonatomic,copy,readonly) RBProcessState * processState; 
@property (nonatomic,readonly) unsigned long long startPolicy; 
@property (nonatomic,readonly) unsigned long long endPolicy; 
@property (getter=isPersistent,nonatomic,readonly) BOOL persistent;                              //@synthesize persistent=_persistent - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (getter=isValid,nonatomic,readonly) BOOL invalid; 
@property (nonatomic,readonly) BOOL suspendsOnOriginatorSuspension; 
@property (nonatomic,readonly) BOOL invalidatesSynchronously; 
@property (nonatomic,readonly) double invalidationDuration; 
@property (nonatomic,readonly) double warningDuration; 
@property (nonatomic,readonly) double creationTime;                                              //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) unsigned long long legacyReason; 
@property (nonatomic,readonly) unsigned long long runningReason; 
@property (nonatomic,readonly) BOOL definesRelativeStartTime; 
@property (nonatomic,readonly) BOOL terminateTargetOnOriginatorExit; 
@property (nonatomic,readonly) BOOL hasHereditaryGrant; 
@property (nonatomic,readonly) BOOL hasDomainAttribute; 
@property (nonatomic,readonly) NSSet * sourceEnvironments; 
@property (assign,nonatomic) unsigned long long invalidationReason; 
@property (nonatomic,retain) id plugInHoldToken; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description;                                                //@synthesize description=_description - In the implementation block
@property (copy,readonly) NSString * debugDescription; 
+(id)assertionWithDescriptor:(id)arg1 target:(id)arg2 originator:(id)arg3 context:(id)arg4 ;
+(id)assertionWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 originator:(id)arg5 context:(id)arg6 ;
-(id)captureState;
-(BOOL)isPersistent;
-(void)suspend;
-(BOOL)isSuspended;
-(unsigned long long)runningReason;
-(void)setPlugInHoldToken:(id)arg1 ;
-(BOOL)terminateTargetOnOriginatorExit;
-(void)setInvalidationReason:(unsigned long long)arg1 ;
-(BOOL)isActive;
-(NSString *)debugDescription;
-(void)deactivate;
-(BOOL)invalidatesSynchronously;
-(void)activate;
-(NSArray *)attributes;
-(double)invalidationDuration;
-(NSString *)description;
-(BOOL)hasHereditaryGrant;
-(BOOL)isValid;
-(NSString *)stateCaptureTitle;
-(unsigned long long)startPolicy;
-(unsigned long long)endPolicy;
-(BOOL)hasDomainAttribute;
-(unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1 ;
-(RBInheritanceCollection *)inheritances;
-(unsigned long long)invalidationReason;
-(double)creationTime;
-(void)applyToSystemState:(id)arg1 withAttributeContext:(id)arg2 ;
-(id)plugInHoldToken;
-(RBAssertionIntransientState *)intransientState;
-(double)warningDuration;
-(NSString *)explanation;
-(RBProcess *)originator;
-(RBConcreteTarget *)target;
-(RBSAssertionIdentifier *)identifier;
-(BOOL)definesRelativeStartTime;
-(unsigned long long)legacyReason;
-(RBProcessState *)processState;
-(void)resume;
-(void)applyToProcessState:(id)arg1 withAttributeContext:(id)arg2 ;
-(id)updateProcessStateWithAttributeContext:(id)arg1 ;
-(BOOL)resolveStateWithContext:(id)arg1 ;
-(BOOL)suspendsOnOriginatorSuspension;
-(NSSet *)sourceEnvironments;
-(void)applyToAssertionTransientState:(id)arg1 withAttributeContext:(id)arg2 ;
@end

