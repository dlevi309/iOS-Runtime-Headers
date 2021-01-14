/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBSectionIcon, BBColor, NSNumber, NSSet;

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding> {

	BBSectionSubtypeParameters* _fallbackParameters;
	NSString* _hiddenPreviewsBodyPlaceholder;
	NSString* _subtypeSummaryFormat;
	NSString* _topic;
	NSString* _missedBannerDescriptionFormat;
	NSString* _fullUnlockActionLabel;
	NSString* _unlockActionLabel;
	NSString* _fullAlternateActionLabel;
	NSString* _alternateActionLabel;
	BBSectionIcon* _sectionIconOverride;
	BBColor* _tintColor;
	NSString* _bannerAccessoryRemoteViewControllerClassName;
	NSString* _bannerAccessoryRemoteServiceBundleIdentifier;
	NSString* _secondaryContentRemoteViewControllerClassName;
	NSString* _secondaryContentRemoteServiceBundleIdentifier;
	NSNumber* _boxedSuppressesAlertsWhenAppIsActive;
	NSNumber* _boxedCoalescesWhenLocked;
	NSNumber* _boxedInertWhenLocked;
	NSNumber* _boxedPreservesUnlockActionCase;
	NSNumber* _boxedVisuallyIndicatesWhenDateIsInFuture;
	NSNumber* _boxedCanBeSilencedByMenuButtonPress;
	NSNumber* _boxedPreventLock;
	NSNumber* _boxedIgnoresQuietMode;
	NSNumber* _boxedSuppressesTitle;
	NSNumber* _boxedShowsUnreadIndicatorForNoticesFeed;
	NSNumber* _boxedShowsContactPhoto;
	NSNumber* _boxedPlaysSoundForModify;
	NSNumber* _boxedSubtypePriority;
	NSNumber* _boxedIPodOutAlertType;
	NSNumber* _boxedAllowsAutomaticRemovalFromLockScreen;
	NSNumber* _boxedAllowsAddingToLockScreenWhenUnlocked;
	NSNumber* _boxedPrioritizeAtTopOfLockScreen;
	NSNumber* _boxedRevealsAdditionalContentOnPresentation;
	NSNumber* _boxedPrivacySettings;
	NSNumber* _boxedShouldDismissBulletinWhenClosed;
	NSNumber* _boxedAllowsPersistentBannersInCarPlay;
	NSNumber* _boxedAllowsSupplementaryActionsInCarPlay;
	NSNumber* _boxedPlaysMediaWhenRaised;
	NSNumber* _boxedSuppressDelayForForwardedBulletins;
	NSNumber* _boxedHideDismissActionInCarPlay;

}

@property (assign,nonatomic,__weak) BBSectionSubtypeParameters * fallbackParameters;              //@synthesize fallbackParameters=_fallbackParameters - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesAlertsWhenAppIsActive;                     //@synthesize boxedSuppressesAlertsWhenAppIsActive=_boxedSuppressesAlertsWhenAppIsActive - In the implementation block
@property (nonatomic,retain) NSNumber * boxedCoalescesWhenLocked;                                 //@synthesize boxedCoalescesWhenLocked=_boxedCoalescesWhenLocked - In the implementation block
@property (nonatomic,retain) NSNumber * boxedInertWhenLocked;                                     //@synthesize boxedInertWhenLocked=_boxedInertWhenLocked - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPreservesUnlockActionCase;                           //@synthesize boxedPreservesUnlockActionCase=_boxedPreservesUnlockActionCase - In the implementation block
@property (nonatomic,retain) NSNumber * boxedVisuallyIndicatesWhenDateIsInFuture;                 //@synthesize boxedVisuallyIndicatesWhenDateIsInFuture=_boxedVisuallyIndicatesWhenDateIsInFuture - In the implementation block
@property (nonatomic,retain) NSNumber * boxedCanBeSilencedByMenuButtonPress;                      //@synthesize boxedCanBeSilencedByMenuButtonPress=_boxedCanBeSilencedByMenuButtonPress - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPreventLock;                                         //@synthesize boxedPreventLock=_boxedPreventLock - In the implementation block
@property (nonatomic,retain) NSNumber * boxedIgnoresQuietMode;                                    //@synthesize boxedIgnoresQuietMode=_boxedIgnoresQuietMode - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesTitle;                                     //@synthesize boxedSuppressesTitle=_boxedSuppressesTitle - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSubtypePriority;                                     //@synthesize boxedSubtypePriority=_boxedSubtypePriority - In the implementation block
@property (nonatomic,retain) NSNumber * boxedIPodOutAlertType;                                    //@synthesize boxedIPodOutAlertType=_boxedIPodOutAlertType - In the implementation block
@property (nonatomic,retain) NSNumber * boxedShowsUnreadIndicatorForNoticesFeed;                  //@synthesize boxedShowsUnreadIndicatorForNoticesFeed=_boxedShowsUnreadIndicatorForNoticesFeed - In the implementation block
@property (nonatomic,retain) NSNumber * boxedShowsContactPhoto;                                   //@synthesize boxedShowsContactPhoto=_boxedShowsContactPhoto - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPlaysSoundForModify;                                 //@synthesize boxedPlaysSoundForModify=_boxedPlaysSoundForModify - In the implementation block
@property (nonatomic,retain) NSNumber * boxedAllowsAutomaticRemovalFromLockScreen;                //@synthesize boxedAllowsAutomaticRemovalFromLockScreen=_boxedAllowsAutomaticRemovalFromLockScreen - In the implementation block
@property (nonatomic,retain) NSNumber * boxedAllowsAddingToLockScreenWhenUnlocked;                //@synthesize boxedAllowsAddingToLockScreenWhenUnlocked=_boxedAllowsAddingToLockScreenWhenUnlocked - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPrioritizeAtTopOfLockScreen;                         //@synthesize boxedPrioritizeAtTopOfLockScreen=_boxedPrioritizeAtTopOfLockScreen - In the implementation block
@property (nonatomic,retain) NSNumber * boxedRevealsAdditionalContentOnPresentation;              //@synthesize boxedRevealsAdditionalContentOnPresentation=_boxedRevealsAdditionalContentOnPresentation - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPrivacySettings;                                     //@synthesize boxedPrivacySettings=_boxedPrivacySettings - In the implementation block
@property (nonatomic,retain) NSNumber * boxedShouldDismissBulletinWhenClosed;                     //@synthesize boxedShouldDismissBulletinWhenClosed=_boxedShouldDismissBulletinWhenClosed - In the implementation block
@property (nonatomic,retain) NSNumber * boxedAllowsPersistentBannersInCarPlay;                    //@synthesize boxedAllowsPersistentBannersInCarPlay=_boxedAllowsPersistentBannersInCarPlay - In the implementation block
@property (nonatomic,retain) NSNumber * boxedAllowsSupplementaryActionsInCarPlay;                 //@synthesize boxedAllowsSupplementaryActionsInCarPlay=_boxedAllowsSupplementaryActionsInCarPlay - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPlaysMediaWhenRaised;                                //@synthesize boxedPlaysMediaWhenRaised=_boxedPlaysMediaWhenRaised - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressDelayForForwardedBulletins;                  //@synthesize boxedSuppressDelayForForwardedBulletins=_boxedSuppressDelayForForwardedBulletins - In the implementation block
@property (nonatomic,retain) NSNumber * boxedHideDismissActionInCarPlay;                          //@synthesize boxedHideDismissActionInCarPlay=_boxedHideDismissActionInCarPlay - In the implementation block
@property (nonatomic,copy) NSString * hiddenPreviewsBodyPlaceholder;                              //@synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * subtypeSummaryFormat;                                       //@synthesize subtypeSummaryFormat=_subtypeSummaryFormat - In the implementation block
@property (nonatomic,copy) NSString * missedBannerDescriptionFormat;                              //@synthesize missedBannerDescriptionFormat=_missedBannerDescriptionFormat - In the implementation block
@property (nonatomic,copy) NSString * fullUnlockActionLabel;                                      //@synthesize fullUnlockActionLabel=_fullUnlockActionLabel - In the implementation block
@property (nonatomic,copy) NSString * unlockActionLabel;                                          //@synthesize unlockActionLabel=_unlockActionLabel - In the implementation block
@property (nonatomic,copy) NSString * fullAlternateActionLabel;                                   //@synthesize fullAlternateActionLabel=_fullAlternateActionLabel - In the implementation block
@property (nonatomic,copy) NSString * alternateActionLabel;                                       //@synthesize alternateActionLabel=_alternateActionLabel - In the implementation block
@property (nonatomic,copy) BBSectionIcon * sectionIconOverride;                                   //@synthesize sectionIconOverride=_sectionIconOverride - In the implementation block
@property (assign,nonatomic) BOOL suppressesAlertsWhenAppIsActive; 
@property (assign,nonatomic) BOOL coalescesWhenLocked; 
@property (assign,nonatomic) BOOL inertWhenLocked; 
@property (assign,nonatomic) BOOL preservesUnlockActionCase; 
@property (assign,nonatomic) unsigned long long subtypePriority; 
@property (assign,nonatomic) long long iPodOutAlertType; 
@property (nonatomic,retain) BBColor * tintColor;                                                 //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) BOOL canBeSilencedByMenuButtonPress; 
@property (assign,nonatomic) BOOL preventLock; 
@property (assign,nonatomic) BOOL ignoresQuietMode; 
@property (assign,nonatomic) BOOL suppressesTitle; 
@property (assign,nonatomic) BOOL showsUnreadIndicatorForNoticesFeed; 
@property (assign,nonatomic) BOOL showsContactPhoto; 
@property (assign,nonatomic) BOOL playsSoundForModify; 
@property (assign,nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture; 
@property (nonatomic,retain) NSSet * alertSuppressionAppIDs; 
@property (nonatomic,copy) NSString * bannerAccessoryRemoteViewControllerClassName;               //@synthesize bannerAccessoryRemoteViewControllerClassName=_bannerAccessoryRemoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * bannerAccessoryRemoteServiceBundleIdentifier;               //@synthesize bannerAccessoryRemoteServiceBundleIdentifier=_bannerAccessoryRemoteServiceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * secondaryContentRemoteViewControllerClassName;              //@synthesize secondaryContentRemoteViewControllerClassName=_secondaryContentRemoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * secondaryContentRemoteServiceBundleIdentifier;              //@synthesize secondaryContentRemoteServiceBundleIdentifier=_secondaryContentRemoteServiceBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL allowsAutomaticRemovalFromLockScreen; 
@property (assign,nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked; 
@property (assign,nonatomic) BOOL prioritizeAtTopOfLockScreen; 
@property (assign,nonatomic) BOOL revealsAdditionalContentOnPresentation; 
@property (assign,nonatomic) unsigned long long privacySettings; 
@property (assign,nonatomic) BOOL shouldDismissBulletinWhenClosed; 
@property (assign,nonatomic) BOOL allowsPersistentBannersInCarPlay; 
@property (assign,nonatomic) BOOL allowsSupplementaryActionsInCarPlay; 
@property (assign,nonatomic) BOOL playsMediaWhenRaised; 
@property (assign,nonatomic) BOOL suppressDelayForForwardedBulletins; 
@property (assign,nonatomic) BOOL hideDismissActionInCarPlay; 
@property (nonatomic,copy) NSString * topic;                                                      //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL preemptsPresentedAlert; 
+(BOOL)supportsSecureCoding;
-(NSString *)hiddenPreviewsBodyPlaceholder;
-(NSString *)bannerAccessoryRemoteViewControllerClassName;
-(BBSectionSubtypeParameters *)fallbackParameters;
-(BOOL)shouldDismissBulletinWhenClosed;
-(BOOL)preservesUnlockActionCase;
-(BOOL)revealsAdditionalContentOnPresentation;
-(void)setBoxedPlaysSoundForModify:(NSNumber *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSNumber *)boxedCoalescesWhenLocked;
-(BOOL)prioritizeAtTopOfLockScreen;
-(void)setTintColor:(BBColor *)arg1 ;
-(void)setHideDismissActionInCarPlay:(BOOL)arg1 ;
-(long long)iPodOutAlertType;
-(NSNumber *)boxedShouldDismissBulletinWhenClosed;
-(void)setBoxedAllowsPersistentBannersInCarPlay:(NSNumber *)arg1 ;
-(void)setSubtypePriority:(unsigned long long)arg1 ;
-(NSString *)topic;
-(NSNumber *)boxedInertWhenLocked;
-(NSNumber *)boxedIPodOutAlertType;
-(BOOL)allowsAutomaticRemovalFromLockScreen;
-(NSString *)unlockActionLabel;
-(BOOL)playsSoundForModify;
-(NSString *)missedBannerDescriptionFormat;
-(void)setBoxedCanBeSilencedByMenuButtonPress:(NSNumber *)arg1 ;
-(NSString *)subtypeSummaryFormat;
-(BBSectionIcon *)sectionIconOverride;
-(NSString *)bannerAccessoryRemoteServiceBundleIdentifier;
-(void)setPreemptsPresentedAlert:(BOOL)arg1 ;
-(NSNumber *)boxedPlaysSoundForModify;
-(NSString *)secondaryContentRemoteServiceBundleIdentifier;
-(void)setBoxedSuppressesAlertsWhenAppIsActive:(NSNumber *)arg1 ;
-(void)setBoxedAllowsAddingToLockScreenWhenUnlocked:(NSNumber *)arg1 ;
-(void)setHiddenPreviewsBodyPlaceholder:(NSString *)arg1 ;
-(void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)arg1 ;
-(NSString *)alternateActionLabel;
-(void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInertWhenLocked:(BOOL)arg1 ;
-(NSString *)secondaryContentRemoteViewControllerClassName;
-(BOOL)visuallyIndicatesWhenDateIsInFuture;
-(void)setShouldDismissBulletinWhenClosed:(BOOL)arg1 ;
-(BOOL)showsUnreadIndicatorForNoticesFeed;
-(void)setSecondaryContentRemoteViewControllerClassName:(NSString *)arg1 ;
-(NSNumber *)boxedAllowsAutomaticRemovalFromLockScreen;
-(void)setBoxedSuppressDelayForForwardedBulletins:(NSNumber *)arg1 ;
-(NSNumber *)boxedPreventLock;
-(void)setFullAlternateActionLabel:(NSString *)arg1 ;
-(void)setIPodOutAlertType:(long long)arg1 ;
-(NSNumber *)boxedAllowsSupplementaryActionsInCarPlay;
-(void)setAlertSuppressionAppIDs:(NSSet *)arg1 ;
-(void)setIgnoresQuietMode:(BOOL)arg1 ;
-(NSNumber *)boxedSubtypePriority;
-(NSSet *)alertSuppressionAppIDs;
-(void)setBoxedPrivacySettings:(NSNumber *)arg1 ;
-(void)setPreventLock:(BOOL)arg1 ;
-(void)setPrioritizeAtTopOfLockScreen:(BOOL)arg1 ;
-(BOOL)suppressesAlertsWhenAppIsActive;
-(BOOL)coalescesWhenLocked;
-(void)setCanBeSilencedByMenuButtonPress:(BOOL)arg1 ;
-(BOOL)allowsSupplementaryActionsInCarPlay;
-(void)setBoxedPrioritizeAtTopOfLockScreen:(NSNumber *)arg1 ;
-(BOOL)suppressDelayForForwardedBulletins;
-(void)setBoxedAllowsAutomaticRemovalFromLockScreen:(NSNumber *)arg1 ;
-(void)setPlaysSoundForModify:(BOOL)arg1 ;
-(void)setFallbackParameters:(BBSectionSubtypeParameters *)arg1 ;
-(NSNumber *)boxedSuppressesTitle;
-(void)setShowsContactPhoto:(BOOL)arg1 ;
-(void)setSubtypeSummaryFormat:(NSString *)arg1 ;
-(void)setBoxedPlaysMediaWhenRaised:(NSNumber *)arg1 ;
-(unsigned long long)privacySettings;
-(void)setBoxedSuppressesTitle:(NSNumber *)arg1 ;
-(BOOL)ignoresQuietMode;
-(void)setMissedBannerDescriptionFormat:(NSString *)arg1 ;
-(NSString *)fullAlternateActionLabel;
-(void)setSuppressDelayForForwardedBulletins:(BOOL)arg1 ;
-(void)setBoxedRevealsAdditionalContentOnPresentation:(NSNumber *)arg1 ;
-(void)setBannerAccessoryRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(void)setAllowsSupplementaryActionsInCarPlay:(BOOL)arg1 ;
-(void)setBoxedPreventLock:(NSNumber *)arg1 ;
-(void)setBoxedIgnoresQuietMode:(NSNumber *)arg1 ;
-(void)setPreservesUnlockActionCase:(BOOL)arg1 ;
-(BOOL)allowsAddingToLockScreenWhenUnlocked;
-(void)setBoxedShouldDismissBulletinWhenClosed:(NSNumber *)arg1 ;
-(void)setAllowsAutomaticRemovalFromLockScreen:(BOOL)arg1 ;
-(BOOL)showsContactPhoto;
-(BOOL)suppressesTitle;
-(void)setSuppressesAlertsWhenAppIsActive:(BOOL)arg1 ;
-(id)initWithFallbackParameters:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)boxedVisuallyIndicatesWhenDateIsInFuture;
-(void)setBoxedInertWhenLocked:(NSNumber *)arg1 ;
-(void)setBoxedIPodOutAlertType:(NSNumber *)arg1 ;
-(void)setUnlockActionLabel:(NSString *)arg1 ;
-(void)setPlaysMediaWhenRaised:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)boxedShowsContactPhoto;
-(NSNumber *)boxedRevealsAdditionalContentOnPresentation;
-(unsigned long long)subtypePriority;
-(NSNumber *)boxedHideDismissActionInCarPlay;
-(BOOL)hideDismissActionInCarPlay;
-(void)setAllowsPersistentBannersInCarPlay:(BOOL)arg1 ;
-(NSNumber *)boxedAllowsAddingToLockScreenWhenUnlocked;
-(void)setSectionIconOverride:(BBSectionIcon *)arg1 ;
-(void)setBoxedPreservesUnlockActionCase:(NSNumber *)arg1 ;
-(BOOL)playsMediaWhenRaised;
-(void)setBannerAccessoryRemoteViewControllerClassName:(NSString *)arg1 ;
-(NSNumber *)boxedPrioritizeAtTopOfLockScreen;
-(void)setBoxedHideDismissActionInCarPlay:(NSNumber *)arg1 ;
-(BOOL)allowsPersistentBannersInCarPlay;
-(void)setAlternateActionLabel:(NSString *)arg1 ;
-(void)setCoalescesWhenLocked:(BOOL)arg1 ;
-(void)setSuppressesTitle:(BOOL)arg1 ;
-(NSNumber *)boxedShowsUnreadIndicatorForNoticesFeed;
-(NSString *)fullUnlockActionLabel;
-(void)setBoxedAllowsSupplementaryActionsInCarPlay:(NSNumber *)arg1 ;
-(NSNumber *)boxedPreservesUnlockActionCase;
-(NSNumber *)boxedPlaysMediaWhenRaised;
-(NSNumber *)boxedAllowsPersistentBannersInCarPlay;
-(void)setFullUnlockActionLabel:(NSString *)arg1 ;
-(NSNumber *)boxedSuppressesAlertsWhenAppIsActive;
-(void)setBoxedCoalescesWhenLocked:(NSNumber *)arg1 ;
-(void)setPrivacySettings:(unsigned long long)arg1 ;
-(BOOL)canBeSilencedByMenuButtonPress;
-(void)setAllowsAddingToLockScreenWhenUnlocked:(BOOL)arg1 ;
-(BOOL)preemptsPresentedAlert;
-(BBColor *)tintColor;
-(void)setBoxedSubtypePriority:(NSNumber *)arg1 ;
-(NSNumber *)boxedIgnoresQuietMode;
-(NSNumber *)boxedSuppressDelayForForwardedBulletins;
-(BOOL)preventLock;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRevealsAdditionalContentOnPresentation:(BOOL)arg1 ;
-(void)setShowsUnreadIndicatorForNoticesFeed:(BOOL)arg1 ;
-(void)setSecondaryContentRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(void)setBoxedShowsContactPhoto:(NSNumber *)arg1 ;
-(BOOL)inertWhenLocked;
-(NSNumber *)boxedPrivacySettings;
-(NSNumber *)boxedCanBeSilencedByMenuButtonPress;
-(void)setBoxedShowsUnreadIndicatorForNoticesFeed:(NSNumber *)arg1 ;
@end

