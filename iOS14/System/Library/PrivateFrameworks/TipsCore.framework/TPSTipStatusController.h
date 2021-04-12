/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUserDefaults, NSMutableDictionary, NSDictionary;

@interface TPSTipStatusController : NSObject <NSCopying> {

	BOOL _isDirty;
	NSUserDefaults* _appGroupDefaults;
	NSMutableDictionary* _identifierToTipStatusMap;

}

@property (nonatomic,retain) NSMutableDictionary * identifierToTipStatusMap;              //@synthesize identifierToTipStatusMap=_identifierToTipStatusMap - In the implementation block
@property (nonatomic,retain) NSUserDefaults * appGroupDefaults;                           //@synthesize appGroupDefaults=_appGroupDefaults - In the implementation block
@property (nonatomic,readonly) NSDictionary * tipStatusMap; 
-(void)setIdentifierToTipStatusMap:(NSMutableDictionary *)arg1 ;
-(id)hintEligibleDateForIdentifier:(id)arg1 ;
-(void)_reloadCacheData;
-(id)dateForTriggerRestartTrackingForIdentifier:(id)arg1 ;
-(void)updateHintEligibleDateForIdentifier:(id)arg1 value:(BOOL)arg2 ;
-(int)hintDisplayedCountForIdentifier:(id)arg1 ;
-(void)addHintNotDisplayedDueToFrequencyControlDateForIdentifier:(id)arg1 ;
-(void)updateDisplayTypeForIdentifier:(id)arg1 value:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)isHintDisplayedForIdentifier:(id)arg1 ;
-(void)updateHintInelgibileForIdentifier:(id)arg1 value:(long long)arg2 ;
-(BOOL)isPreconditionMatchedForIdentifier:(id)arg1 ;
-(id)variantIdentifierForIdentifier:(id)arg1 ;
-(id)debugDescription;
-(BOOL)isEligibilityTrackingNeedsRestartForIdentifier:(id)arg1 ;
-(BOOL)isContentNeverVisibleForIdentifier:(id)arg1 ;
-(id)reenrollHoldoutContent;
-(BOOL)isHintDismissedForIdentifier:(id)arg1 ;
-(unsigned long long)displayTypeForIdentifier:(id)arg1 ;
-(void)setAppGroupDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)isDesiredOutcomePerformedForIdentifier:(id)arg1 ;
-(void)updateDateForTriggerRestartTrackingForIdentifier:(id)arg1 date:(id)arg2 ;
-(id)contentViewedDateForIdentifier:(id)arg1 ;
-(NSUserDefaults *)appGroupDefaults;
-(void)syncWithIdentifiers:(id)arg1 ;
-(void)updateHintWouldHaveBeenDisplayedDateForIdentifier:(id)arg1 value:(BOOL)arg2 ;
-(void)removeAllTipStatus;
-(BOOL)isTriggerTrackingEligibleForIdentifier:(id)arg1 ;
-(void)updatevariantIdentifierForIdentifier:(id)arg1 value:(id)arg2 ;
-(BOOL)isTriggerTrackingEligibleForIdentifier:(id)arg1 checkForPrecondition:(BOOL)arg2 checkForEligibleDate:(BOOL)arg3 ;
-(NSDictionary *)tipStatusMap;
-(BOOL)isLockScreenHintDisplayEligibleForIdentifier:(id)arg1 ;
-(void)updateHintDismissedForIdentifier:(id)arg1 value:(BOOL)arg2 ;
-(id)lastDisplayContextForIdentifier:(id)arg1 ;
-(BOOL)isContextualInfoLifetimeExpiredForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)identifierToTipStatusMap;
-(id)_tipStatusForIdentifier:(id)arg1 addIfMissing:(BOOL)arg2 ;
-(id)initWithAppGroupDefaults:(id)arg1 ;
-(BOOL)isHintInelgibileForReason:(long long)arg1 identifier:(id)arg2 ;
-(void)addDesiredOutcomePerformedDateForIdentifier:(id)arg1 date:(id)arg2 ;
-(BOOL)isContentViewedForIdentifier:(id)arg1 ;
-(void)updatePreconditionMatchedForIdentifier:(id)arg1 value:(BOOL)arg2 ;
-(void)updateExpiredForIdentifier:(id)arg1 value:(BOOL)arg2 ;
-(id)hintNotDisplayedDueToFrequencyControlDatesForIdentifier:(id)arg1 ;
-(void)updateContentViewedForIdentifier:(id)arg1 value:(BOOL)arg2 ;
-(BOOL)isDesiredOutcomeTrackingEligibleForIdentifier:(id)arg1 ;
-(long long)hintInelgibileReasonForIdentifier:(id)arg1 ;
-(void)addHintDisplayedForIdentifier:(id)arg1 context:(id)arg2 ;
-(BOOL)isExpiredForIdentifier:(id)arg1 ;
-(void)updateCacheData;
-(id)firstHintDisplayDateForIdentifier:(id)arg1 ;
-(BOOL)isTipAppDisplayEligibleForIdentifier:(id)arg1 ;
-(void)removeCacheData;
-(id)reenrollPreconditionChangeContent;
-(void)updatePreconditionMatchedForIdentifiers:(id)arg1 value:(BOOL)arg2 ;
-(id)hintWouldHaveBeenDisplayedDateForIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHintInelgibileForIdentifier:(id)arg1 ;
-(id)statusForIdentifier:(id)arg1 ;
-(BOOL)isHintMaxDurationExcceededForIdentifier:(id)arg1 ;
@end

