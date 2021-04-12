/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (getter=isSystemAppDeletionEnabled,readonly) BOOL systemAppDeletionEnabled; 
@property (readonly) NSNumber * maximumRating;                                                       //@synthesize maximumRating=_maximumRating - In the implementation block
@property (readonly) NSSet * restrictedBundleIDs;                                                    //@synthesize restrictedBundleIDs=_restrictedBundleIDs - In the implementation block
@property (readonly) NSSet * blacklistedBundleIDs;                                                   //@synthesize blacklistedBundleIDs=_blacklistedBundleIDs - In the implementation block
@property (readonly) NSSet * whitelistedBundleIDs;                                                   //@synthesize whitelistedBundleIDs=_whitelistedBundleIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedSystemApplicationIdentifiers; 
+(id)sharedInstance;
+(id)activeRestrictionIdentifiers;
-(id)init;
-(BOOL)cleanRemovedSystemApplicationsList;
-(void)setRemovedSystemApplicationIdentifiers:(NSSet *)arg1 ;
-(NSSet *)removedSystemApplicationIdentifiers;
-(BOOL)isApplicationRestricted:(id)arg1 ;
-(id)identifierForRemovedAppPrompt:(id)arg1 ;
-(BOOL)isAppExtensionRestricted:(id)arg1 ;
-(BOOL)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2 ;
-(BOOL)isSystemAppDeletionEnabled;
-(NSNumber *)maximumRating;
-(void)_syncTrustedSignerIdenties;
-(void)handleMCEffectiveSettingsChanged;
-(void)clearAllValues;
-(id)_MCProfileConnection;
-(BOOL)isWhitelistEnabled;
-(id)_LSResolveIdentifiers:(id)arg1 ;
-(void)setWhitelistedBundleIDs:(NSSet *)arg1 ;
-(void)setBlacklistedBundleIDs:(NSSet *)arg1 ;
-(void)setRestrictedBundleIDs:(NSSet *)arg1 ;
-(NSSet *)whitelistedBundleIDs;
-(id)calculateSetDifference:(id)arg1 and:(id)arg2 ;
-(NSSet *)restrictedBundleIDs;
-(BOOL)_LSApplyRestrictedSet:(id)arg1 forRestriction:(id)arg2 ;
-(BOOL)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(BOOL)arg2 ;
-(BOOL)isFeatureAllowed:(unsigned long long)arg1 ;
-(id)_MCRestrictionManager;
-(id)blacklistedBundleID;
-(void)beginListeningForChanges;
-(void)scheduleSyncTrustedSignerIdenties;
-(BOOL)setApplication:(id)arg1 removed:(BOOL)arg2 ;
-(BOOL)isAdTrackingEnabled;
-(NSSet *)blacklistedBundleIDs;
-(BOOL)isRatingAllowed:(id)arg1 ;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3 ;
-(BOOL)isOpenInRestrictionInEffect;
@end

