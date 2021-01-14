/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDate, NSString;

@interface SCRSchedulingConfiguration : NSObject <NSMutableCopying, BSDescriptionProviding> {

	BOOL _wakeDeviceForDeadline;
	BOOL _requiresClassAAccess;
	BOOL _requiresNetworkAccess;
	NSDate* _earliestStartDate;
	double _schedulingWindow;

}

@property (nonatomic,readonly) NSDate * latestStartDate; 
@property (getter=isImmediate,nonatomic,readonly) BOOL immediate; 
@property (nonatomic,copy,readonly) NSDate * earliestStartDate;                //@synthesize earliestStartDate=_earliestStartDate - In the implementation block
@property (nonatomic,readonly) double schedulingWindow;                        //@synthesize schedulingWindow=_schedulingWindow - In the implementation block
@property (nonatomic,readonly) BOOL wakeDeviceForDeadline;                     //@synthesize wakeDeviceForDeadline=_wakeDeviceForDeadline - In the implementation block
@property (nonatomic,readonly) BOOL requiresClassAAccess;                      //@synthesize requiresClassAAccess=_requiresClassAAccess - In the implementation block
@property (nonatomic,readonly) BOOL requiresNetworkAccess;                     //@synthesize requiresNetworkAccess=_requiresNetworkAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)immediateConfiguration;
+(id)configurationWithEarliestStart:(id)arg1 schedulingWindow:(double)arg2 ;
-(id)succinctDescription;
-(void)setRequiresNetworkAccess:(BOOL)arg1 ;
-(BOOL)isCurrentlySatisfiedBy:(id)arg1 ;
-(NSDate *)earliestStartDate;
-(id)init;
-(BOOL)_isSatisfiedBy:(id)arg1 strictly:(BOOL)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)schedulingWindow;
-(id)intersectionWith:(id)arg1 minimumWindow:(double)arg2 ;
-(void)setEarliestStartDate:(NSDate *)arg1 ;
-(void)setRequiresClassAAccess:(BOOL)arg1 ;
-(id)_copyWithClass:(Class)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)wakeDeviceForDeadline;
-(NSString *)description;
-(id)_earliestEffectiveStartDate;
-(BOOL)isImmediate;
-(void)setWakeDeviceForDeadline:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSDate *)latestStartDate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)requiresNetworkAccess;
-(id)_latestEffectiveStartDate;
-(id)succinctDescriptionBuilder;
-(void)setSchedulingWindow:(double)arg1 ;
-(BOOL)requiresClassAAccess;
-(id)_initWithStartDate:(id)arg1 window:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSatisfiedBy:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

