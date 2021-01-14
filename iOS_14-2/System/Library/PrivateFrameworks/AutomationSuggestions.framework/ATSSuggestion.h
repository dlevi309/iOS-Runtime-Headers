/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, INIntent, NSUserActivity, NSString, BMRule;

@interface ATSSuggestion : NSObject <NSSecureCoding> {

	NSArray* _triggers;
	INIntent* _intent;
	NSUserActivity* _activity;
	NSString* _bundleID;
	NSString* _activityString;
	BMRule* _rule;
	NSString* _trialID;

}

@property (nonatomic,retain) NSString * activityString;                //@synthesize activityString=_activityString - In the implementation block
@property (nonatomic,readonly) BMRule * rule;                          //@synthesize rule=_rule - In the implementation block
@property (nonatomic,retain) NSString * trialID;                       //@synthesize trialID=_trialID - In the implementation block
@property (nonatomic,readonly) NSArray * triggers;                     //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                      //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSUserActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)intentFromConsequentItem:(id)arg1 withActionRetriever:(id)arg2 ;
+(id)bundleIDFromConsequentItem:(id)arg1 ;
+(id)activityStringFromConsequentItem:(id)arg1 withActionRetriever:(id)arg2 ;
+(id)triggerFromAntecedentItem:(id)arg1 timeRestrictionItem:(id)arg2 withRoutineManager:(id)arg3 ;
+(id)suggestionFromRule:(id)arg1 withActionRetriever:(id)arg2 routineManager:(id)arg3 ;
-(INIntent *)intent;
-(NSUserActivity *)activity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)trialID;
-(id)actionTitle;
-(NSArray *)triggers;
-(void)setTrialID:(NSString *)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(BMRule *)rule;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activityString;
-(void)setActivityString:(NSString *)arg1 ;
-(id)initWithTriggers:(id)arg1 intent:(id)arg2 activityString:(id)arg3 bundleID:(id)arg4 rule:(id)arg5 ;
@end

