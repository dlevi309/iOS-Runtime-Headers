/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableSet, NSString;

@interface RBAssertionIntransientState : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _invalidatesSynchronously;
	BOOL _isPersistent;
	BOOL _hasHereditaryGrant;
	BOOL _hasDomainAttribute;
	BOOL _definesRelativeStartTime;
	BOOL _terminateTargetOnOriginatorExit;
	BOOL _suspendsOnOriginatorSuspension;
	NSMutableSet* _sourceEnvironments;
	unsigned long long _runningReason;
	unsigned long long _legacyReason;
	NSString* _domainAttributes;
	unsigned long long _startPolicy;
	unsigned long long _endPolicy;
	double _invalidationDuration;
	double _warningDuration;

}

@property (assign,nonatomic) BOOL isPersistent;                                 //@synthesize isPersistent=_isPersistent - In the implementation block
@property (assign,nonatomic) BOOL hasHereditaryGrant;                           //@synthesize hasHereditaryGrant=_hasHereditaryGrant - In the implementation block
@property (assign,nonatomic) BOOL hasDomainAttribute;                           //@synthesize hasDomainAttribute=_hasDomainAttribute - In the implementation block
@property (assign,nonatomic) BOOL definesRelativeStartTime;                     //@synthesize definesRelativeStartTime=_definesRelativeStartTime - In the implementation block
@property (assign,nonatomic) BOOL terminateTargetOnOriginatorExit;              //@synthesize terminateTargetOnOriginatorExit=_terminateTargetOnOriginatorExit - In the implementation block
@property (assign,nonatomic) BOOL invalidatesSynchronously;                     //@synthesize invalidatesSynchronously=_invalidatesSynchronously - In the implementation block
@property (assign,nonatomic) unsigned long long startPolicy;                    //@synthesize startPolicy=_startPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long endPolicy;                      //@synthesize endPolicy=_endPolicy - In the implementation block
@property (assign,nonatomic) double invalidationDuration;                       //@synthesize invalidationDuration=_invalidationDuration - In the implementation block
@property (assign,nonatomic) double warningDuration;                            //@synthesize warningDuration=_warningDuration - In the implementation block
@property (nonatomic,readonly) NSMutableSet * sourceEnvironments;               //@synthesize sourceEnvironments=_sourceEnvironments - In the implementation block
@property (assign,nonatomic) unsigned long long runningReason;                  //@synthesize runningReason=_runningReason - In the implementation block
@property (assign,nonatomic) unsigned long long legacyReason;                   //@synthesize legacyReason=_legacyReason - In the implementation block
@property (nonatomic,retain) NSString * domainAttributes;                       //@synthesize domainAttributes=_domainAttributes - In the implementation block
@property (assign,nonatomic) BOOL suspendsOnOriginatorSuspension;               //@synthesize suspendsOnOriginatorSuspension=_suspendsOnOriginatorSuspension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)invalidationDuration;
-(double)warningDuration;
-(unsigned long long)startPolicy;
-(unsigned long long)endPolicy;
-(void)setInvalidationDuration:(double)arg1 ;
-(void)setWarningDuration:(double)arg1 ;
-(void)setStartPolicy:(unsigned long long)arg1 ;
-(void)setEndPolicy:(unsigned long long)arg1 ;
-(unsigned long long)runningReason;
-(void)setIsPersistent:(BOOL)arg1 ;
-(BOOL)isPersistent;
-(void)setSuspendsOnOriginatorSuspension:(BOOL)arg1 ;
-(void)setDefinesRelativeStartTime:(BOOL)arg1 ;
-(void)setLegacyReason:(unsigned long long)arg1 ;
-(BOOL)definesRelativeStartTime;
-(BOOL)suspendsOnOriginatorSuspension;
-(BOOL)invalidatesSynchronously;
-(NSMutableSet *)sourceEnvironments;
-(void)setRunningReason:(unsigned long long)arg1 ;
-(unsigned long long)legacyReason;
-(NSString *)domainAttributes;
-(void)setDomainAttributes:(NSString *)arg1 ;
-(void)setInvalidatesSynchronously:(BOOL)arg1 ;
-(BOOL)hasHereditaryGrant;
-(void)setHasHereditaryGrant:(BOOL)arg1 ;
-(BOOL)hasDomainAttribute;
-(void)setHasDomainAttribute:(BOOL)arg1 ;
-(BOOL)terminateTargetOnOriginatorExit;
-(void)setTerminateTargetOnOriginatorExit:(BOOL)arg1 ;
@end

