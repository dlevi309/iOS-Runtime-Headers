/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSArray, HMDAnalyticsPredicateData;

@interface HMDAnalyticsEventTriggerData : HMFObject {

	BOOL _containsRecurrences;
	BOOL _executeOnce;
	int _activationState;
	int _activationType;
	NSArray* _events;
	HMDAnalyticsPredicateData* _predicate;

}

@property (assign,nonatomic) int activationState;                                //@synthesize activationState=_activationState - In the implementation block
@property (assign,nonatomic) int activationType;                                 //@synthesize activationType=_activationType - In the implementation block
@property (nonatomic,copy) NSArray * events;                                     //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) HMDAnalyticsPredicateData * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (assign) BOOL containsRecurrences;                                     //@synthesize containsRecurrences=_containsRecurrences - In the implementation block
@property (assign) BOOL executeOnce;                                             //@synthesize executeOnce=_executeOnce - In the implementation block
-(HMDAnalyticsPredicateData *)predicate;
-(int)activationState;
-(int)activationType;
-(void)setActivationType:(int)arg1 ;
-(void)setPredicate:(HMDAnalyticsPredicateData *)arg1 ;
-(void)setEvents:(NSArray *)arg1 ;
-(NSArray *)events;
-(void)setExecuteOnce:(BOOL)arg1 ;
-(void)setActivationState:(int)arg1 ;
-(BOOL)executeOnce;
-(BOOL)containsRecurrences;
-(void)setContainsRecurrences:(BOOL)arg1 ;
@end

