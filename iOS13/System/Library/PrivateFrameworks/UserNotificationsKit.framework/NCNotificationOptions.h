/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSString;

@interface NCNotificationOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSSet* _alertSuppressionContexts;
	NSString* _alternateActionLabel;
	BOOL _dismissAutomatically;
	BOOL _dismissAutomaticallyForCarPlay;
	BOOL _overridesQuietMode;
	BOOL _overridesDowntime;
	BOOL _alertsWhenLocked;
	BOOL _addToLockScreenWhenLocked;
	unsigned long long _lockScreenPersistence;
	unsigned long long _lockScreenPriority;
	unsigned long long _realertCount;
	BOOL _suppressesAlertsWhenAppIsActive;
	BOOL _silencedByMenuButtonPress;
	BOOL _overridesPocketMode;
	BOOL _canPlaySound;
	BOOL _canTurnOnDisplay;
	BOOL _requestsFullScreenPresentation;
	BOOL _hideClearActionInList;
	BOOL _numberOfLinesInfinite;
	BOOL _preemptsPresentedNotification;
	BOOL _preemptsSTAR;
	BOOL _revealsAdditionalContentOnPresentation;
	BOOL _suppressesTitleWhenLocked;
	BOOL _suppressesSubtitleWhenLocked;
	BOOL _suppressesBodyWhenLocked;
	unsigned long long _contentPreviewSetting;
	BOOL _coalescesWhenLocked;
	BOOL _preventsAutomaticLock;
	BOOL _revealsAdditionalContentIfNoDefaultAction;
	BOOL _lauchUsingSiriForCarPlayDefaultAction;
	BOOL _allowActionsForCarPlay;
	BOOL _playMediaWhenRaised;
	BOOL _hideCloseActionForCarPlay;

}

@property (nonatomic,copy,readonly) NSSet * alertSuppressionContexts;                                  //@synthesize alertSuppressionContexts=_alertSuppressionContexts - In the implementation block
@property (nonatomic,copy,readonly) NSString * alternateActionLabel;                                   //@synthesize alternateActionLabel=_alternateActionLabel - In the implementation block
@property (nonatomic,readonly) BOOL dismissAutomatically;                                              //@synthesize dismissAutomatically=_dismissAutomatically - In the implementation block
@property (nonatomic,readonly) BOOL dismissAutomaticallyForCarPlay;                                    //@synthesize dismissAutomaticallyForCarPlay=_dismissAutomaticallyForCarPlay - In the implementation block
@property (nonatomic,readonly) BOOL overridesQuietMode;                                                //@synthesize overridesQuietMode=_overridesQuietMode - In the implementation block
@property (nonatomic,readonly) BOOL overridesDowntime;                                                 //@synthesize overridesDowntime=_overridesDowntime - In the implementation block
@property (nonatomic,readonly) BOOL alertsWhenLocked;                                                  //@synthesize alertsWhenLocked=_alertsWhenLocked - In the implementation block
@property (nonatomic,readonly) BOOL addToLockScreenWhenUnlocked;                                       //@synthesize addToLockScreenWhenLocked=_addToLockScreenWhenLocked - In the implementation block
@property (nonatomic,readonly) unsigned long long lockScreenPersistence;                               //@synthesize lockScreenPersistence=_lockScreenPersistence - In the implementation block
@property (nonatomic,readonly) unsigned long long lockScreenPriority;                                  //@synthesize lockScreenPriority=_lockScreenPriority - In the implementation block
@property (nonatomic,readonly) unsigned long long realertCount;                                        //@synthesize realertCount=_realertCount - In the implementation block
@property (nonatomic,readonly) BOOL suppressesAlertsWhenAppIsActive;                                   //@synthesize suppressesAlertsWhenAppIsActive=_suppressesAlertsWhenAppIsActive - In the implementation block
@property (nonatomic,readonly) BOOL canPlaySound;                                                      //@synthesize canPlaySound=_canPlaySound - In the implementation block
@property (nonatomic,readonly) BOOL canTurnOnDisplay;                                                  //@synthesize canTurnOnDisplay=_canTurnOnDisplay - In the implementation block
@property (nonatomic,readonly) BOOL requestsFullScreenPresentation;                                    //@synthesize requestsFullScreenPresentation=_requestsFullScreenPresentation - In the implementation block
@property (nonatomic,readonly) BOOL preemptsPresentedNotification;                                     //@synthesize preemptsPresentedNotification=_preemptsPresentedNotification - In the implementation block
@property (nonatomic,readonly) BOOL preemptsSTAR;                                                      //@synthesize preemptsSTAR=_preemptsSTAR - In the implementation block
@property (nonatomic,readonly) BOOL revealsAdditionalContentOnPresentation;                            //@synthesize revealsAdditionalContentOnPresentation=_revealsAdditionalContentOnPresentation - In the implementation block
@property (nonatomic,readonly) BOOL suppressesTitleWhenLocked;                                         //@synthesize suppressesTitleWhenLocked=_suppressesTitleWhenLocked - In the implementation block
@property (nonatomic,readonly) BOOL suppressesSubtitleWhenLocked;                                      //@synthesize suppressesSubtitleWhenLocked=_suppressesSubtitleWhenLocked - In the implementation block
@property (nonatomic,readonly) BOOL suppressesBodyWhenLocked;                                          //@synthesize suppressesBodyWhenLocked=_suppressesBodyWhenLocked - In the implementation block
@property (nonatomic,readonly) BOOL playMediaWhenRaised;                                               //@synthesize playMediaWhenRaised=_playMediaWhenRaised - In the implementation block
@property (nonatomic,readonly) unsigned long long contentPreviewSetting;                               //@synthesize contentPreviewSetting=_contentPreviewSetting - In the implementation block
@property (nonatomic,readonly) BOOL silencedByMenuButtonPress;                                         //@synthesize silencedByMenuButtonPress=_silencedByMenuButtonPress - In the implementation block
@property (nonatomic,readonly) BOOL overridesPocketMode;                                               //@synthesize overridesPocketMode=_overridesPocketMode - In the implementation block
@property (nonatomic,readonly) BOOL hideClearActionInList;                                             //@synthesize hideClearActionInList=_hideClearActionInList - In the implementation block
@property (getter=isNumberOfLinesInfinite,nonatomic,readonly) BOOL numberOfLinesInfinite;              //@synthesize numberOfLinesInfinite=_numberOfLinesInfinite - In the implementation block
@property (nonatomic,readonly) BOOL coalescesWhenLocked;                                               //@synthesize coalescesWhenLocked=_coalescesWhenLocked - In the implementation block
@property (nonatomic,readonly) BOOL preventsAutomaticLock;                                             //@synthesize preventsAutomaticLock=_preventsAutomaticLock - In the implementation block
@property (nonatomic,readonly) BOOL revealsAdditionalContentIfNoDefaultAction;                         //@synthesize revealsAdditionalContentIfNoDefaultAction=_revealsAdditionalContentIfNoDefaultAction - In the implementation block
@property (nonatomic,readonly) BOOL lauchUsingSiriForCarPlayDefaultAction;                             //@synthesize lauchUsingSiriForCarPlayDefaultAction=_lauchUsingSiriForCarPlayDefaultAction - In the implementation block
@property (nonatomic,readonly) BOOL allowActionsForCarPlay;                                            //@synthesize allowActionsForCarPlay=_allowActionsForCarPlay - In the implementation block
@property (nonatomic,readonly) BOOL hideCloseActionForCarPlay;                                         //@synthesize hideCloseActionForCarPlay=_hideCloseActionForCarPlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)realertCount;
-(unsigned long long)contentPreviewSetting;
-(NSSet *)alertSuppressionContexts;
-(BOOL)canPlaySound;
-(BOOL)preemptsSTAR;
-(unsigned long long)lockScreenPriority;
-(NSString *)alternateActionLabel;
-(BOOL)suppressesAlertsWhenAppIsActive;
-(BOOL)coalescesWhenLocked;
-(BOOL)revealsAdditionalContentOnPresentation;
-(BOOL)overridesQuietMode;
-(BOOL)overridesDowntime;
-(BOOL)requestsFullScreenPresentation;
-(BOOL)addToLockScreenWhenUnlocked;
-(BOOL)preemptsPresentedNotification;
-(BOOL)dismissAutomatically;
-(BOOL)dismissAutomaticallyForCarPlay;
-(BOOL)alertsWhenLocked;
-(unsigned long long)lockScreenPersistence;
-(BOOL)silencedByMenuButtonPress;
-(BOOL)overridesPocketMode;
-(BOOL)canTurnOnDisplay;
-(BOOL)hideClearActionInList;
-(BOOL)isNumberOfLinesInfinite;
-(BOOL)suppressesTitleWhenLocked;
-(BOOL)suppressesSubtitleWhenLocked;
-(BOOL)suppressesBodyWhenLocked;
-(BOOL)preventsAutomaticLock;
-(BOOL)revealsAdditionalContentIfNoDefaultAction;
-(BOOL)lauchUsingSiriForCarPlayDefaultAction;
-(BOOL)allowActionsForCarPlay;
-(BOOL)playMediaWhenRaised;
-(BOOL)hideCloseActionForCarPlay;
-(id)initWithNotificationOptions:(id)arg1 ;
@end

