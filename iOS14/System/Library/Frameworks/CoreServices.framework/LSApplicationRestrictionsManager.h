/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSNumber, NSSet;

@interface LSApplicationRestrictionsManager : NSObject {

	NSObject*<OS_dispatch_queue> _restrictionsAccessQueue;
	NSObject*<OS_dispatch_queue> _signerIdentitySyncQueue;
	NSObject*<OS_dispatch_source> _signerIdentitySyncSource;
	NSNumber* _whitelistState;
	unsigned long long _knownSystemAppDeletionState;
	NSSet* _whitelistedBundleIDs;
	NSSet* _blacklistedBundleIDs;
	NSSet* _restrictedBundleIDs;
	NSNumber* _maximumRating;

}

@property (getter=isWhitelistEnabled,readonly) BOOL whitelistEnabled; 
@property (getter=isOpenInRestrictionInEffect,readonly) BOOL openInRestrictionInEffect; 
@property (getter=isAdTrackingEnabled,readonly) BOOL adTrackingEnabled; 
@property (getter=isLimitAdTrackingForced,readonly) BOOL limitAdTrackingForced; 
@property (getter=isSystemAppDeletionEnabled,readonly) BOOL systemAppDeletionEnabled; 
@property (readonly) NSNumber * maximumRating;                                                       //@synthesize maximumRating=_maximumRating - In the implementation block
@property (readonly) NSSet * restrictedBundleIDs;                                                    //@synthesize restrictedBundleIDs=_restrictedBundleIDs - In the implementation block
@property (readonly) NSSet * blacklistedBundleIDs;                                                   //@synthesize blacklistedBundleIDs=_blacklistedBundleIDs - In the implementation block
@property (readonly) NSSet * whitelistedBundleIDs;                                                   //@synthesize whitelistedBundleIDs=_whitelistedBundleIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedSystemApplicationIdentifiers; 
+(id)sharedInstance;
+(id)activeRestrictionIdentifiers;
-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)setApplication:(id)arg1 removed:(BOOL)arg2 ;
-(BOOL)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(BOOL)arg2 ;
-(id)_LSResolveIdentifiers:(id)arg1 ;
-(id)init;
-(id)blacklistedBundleID;
-(BOOL)isAdTrackingEnabled;
-(id)_MCProfileConnection;
-(BOOL)isFeatureAllowed:(id)arg1 ;
-(NSSet *)restrictedBundleIDs;
-(BOOL)_LSApplyRestrictedSet:(id)arg1 forRestriction:(id)arg2 ;
-(void)handleMCEffectiveSettingsChanged;
-(BOOL)isSystemAppDeletionEnabled;
-(NSSet *)blacklistedBundleIDs;
-(void)scheduleSyncTrustedSignerIdenties;
-(BOOL)isLimitAdTrackingForced;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3 ;
-(BOOL)isApplicationRestricted:(id)arg1 ;
-(BOOL)isAppExtensionRestricted:(id)arg1 ;
-(void)beginListeningForChanges;
-(BOOL)isRatingAllowed:(id)arg1 ;
-(void)setWhitelistedBundleIDs:(NSSet *)arg1 ;
-(BOOL)isWhitelistEnabled;
-(void)clearAllValues;
-(NSSet *)removedSystemApplicationIdentifiers;
-(id)_MCRestrictionManager;
-(void)setBlacklistedBundleIDs:(NSSet *)arg1 ;
-(NSSet *)whitelistedBundleIDs;
-(void)_syncTrustedSignerIdenties;
-(id)calculateSetDifference:(id)arg1 and:(id)arg2 ;
-(NSNumber *)maximumRating;
-(BOOL)cleanRemovedSystemApplicationsList;
-(void)setRemovedSystemApplicationIdentifiers:(NSSet *)arg1 ;
-(BOOL)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2 ;
-(void)setRestrictedBundleIDs:(NSSet *)arg1 ;
@end

