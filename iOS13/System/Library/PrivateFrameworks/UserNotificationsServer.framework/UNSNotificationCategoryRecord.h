/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSArray, NSString;

@interface UNSNotificationCategoryRecord : NSObject {

	BOOL _hasCustomDismissAction;
	BOOL _hasCustomSilenceAction;
	BOOL _shouldAllowInCarPlay;
	BOOL _shouldAllowSpoken;
	BOOL _privacyOptionShowTitle;
	BOOL _privacyOptionShowSubtitle;
	BOOL _preventAutomaticRemovalFromRecent;
	BOOL _revealAdditionalContentWhenPresented;
	BOOL _preventAutomaticLock;
	BOOL _preventDismissWhenClosed;
	BOOL _presentFullScreenAlertOverList;
	BOOL _shouldAllowActionsInCarPlay;
	BOOL _shouldAllowPersistentBannersInCarPlay;
	BOOL _playMediaWhenRaised;
	BOOL _preventClearFromList;
	BOOL _alwaysDisplayNotificationsIndicator;
	BOOL _suppressDelayForForwardedNotifications;
	BOOL _suppressDismissActionInCarPlay;
	NSArray* _actions;
	NSString* _identifier;
	NSArray* _intentIdentifiers;
	NSArray* _minimalActions;
	NSString* _privateBody;
	NSString* _summaryFormat;
	NSString* _backgroundStyle;
	NSString* _listPriority;

}

@property (nonatomic,copy) NSArray * actions;                                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL hasCustomDismissAction;                              //@synthesize hasCustomDismissAction=_hasCustomDismissAction - In the implementation block
@property (assign,nonatomic) BOOL hasCustomSilenceAction;                              //@synthesize hasCustomSilenceAction=_hasCustomSilenceAction - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * intentIdentifiers;                                //@synthesize intentIdentifiers=_intentIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * minimalActions;                                   //@synthesize minimalActions=_minimalActions - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowInCarPlay;                                //@synthesize shouldAllowInCarPlay=_shouldAllowInCarPlay - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowSpoken;                                   //@synthesize shouldAllowSpoken=_shouldAllowSpoken - In the implementation block
@property (assign,nonatomic) BOOL privacyOptionShowTitle;                              //@synthesize privacyOptionShowTitle=_privacyOptionShowTitle - In the implementation block
@property (assign,nonatomic) BOOL privacyOptionShowSubtitle;                           //@synthesize privacyOptionShowSubtitle=_privacyOptionShowSubtitle - In the implementation block
@property (assign,nonatomic) BOOL preventAutomaticRemovalFromRecent;                   //@synthesize preventAutomaticRemovalFromRecent=_preventAutomaticRemovalFromRecent - In the implementation block
@property (assign,nonatomic) BOOL revealAdditionalContentWhenPresented;                //@synthesize revealAdditionalContentWhenPresented=_revealAdditionalContentWhenPresented - In the implementation block
@property (assign,nonatomic) BOOL preventAutomaticLock;                                //@synthesize preventAutomaticLock=_preventAutomaticLock - In the implementation block
@property (assign,nonatomic) BOOL preventDismissWhenClosed;                            //@synthesize preventDismissWhenClosed=_preventDismissWhenClosed - In the implementation block
@property (assign,nonatomic) BOOL presentFullScreenAlertOverList;                      //@synthesize presentFullScreenAlertOverList=_presentFullScreenAlertOverList - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowActionsInCarPlay;                         //@synthesize shouldAllowActionsInCarPlay=_shouldAllowActionsInCarPlay - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowPersistentBannersInCarPlay;               //@synthesize shouldAllowPersistentBannersInCarPlay=_shouldAllowPersistentBannersInCarPlay - In the implementation block
@property (assign,nonatomic) BOOL playMediaWhenRaised;                                 //@synthesize playMediaWhenRaised=_playMediaWhenRaised - In the implementation block
@property (assign,nonatomic) BOOL preventClearFromList;                                //@synthesize preventClearFromList=_preventClearFromList - In the implementation block
@property (assign,nonatomic) BOOL alwaysDisplayNotificationsIndicator;                 //@synthesize alwaysDisplayNotificationsIndicator=_alwaysDisplayNotificationsIndicator - In the implementation block
@property (assign,nonatomic) BOOL suppressDelayForForwardedNotifications;              //@synthesize suppressDelayForForwardedNotifications=_suppressDelayForForwardedNotifications - In the implementation block
@property (assign,nonatomic) BOOL suppressDismissActionInCarPlay;                      //@synthesize suppressDismissActionInCarPlay=_suppressDismissActionInCarPlay - In the implementation block
@property (nonatomic,copy) NSString * privateBody;                                     //@synthesize privateBody=_privateBody - In the implementation block
@property (nonatomic,copy) NSString * summaryFormat;                                   //@synthesize summaryFormat=_summaryFormat - In the implementation block
@property (nonatomic,copy) NSString * backgroundStyle;                                 //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,copy) NSString * listPriority;                                    //@synthesize listPriority=_listPriority - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)actions;
-(void)setBackgroundStyle:(NSString *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)backgroundStyle;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)intentIdentifiers;
-(NSArray *)minimalActions;
-(NSString *)listPriority;
-(void)setMinimalActions:(NSArray *)arg1 ;
-(void)setIntentIdentifiers:(NSArray *)arg1 ;
-(void)setListPriority:(NSString *)arg1 ;
-(NSString *)summaryFormat;
-(void)setSummaryFormat:(NSString *)arg1 ;
-(BOOL)playMediaWhenRaised;
-(void)setPlayMediaWhenRaised:(BOOL)arg1 ;
-(void)setPrivateBody:(NSString *)arg1 ;
-(void)setShouldAllowInCarPlay:(BOOL)arg1 ;
-(void)setShouldAllowSpoken:(BOOL)arg1 ;
-(void)setHasCustomDismissAction:(BOOL)arg1 ;
-(void)setHasCustomSilenceAction:(BOOL)arg1 ;
-(void)setPrivacyOptionShowSubtitle:(BOOL)arg1 ;
-(void)setPrivacyOptionShowTitle:(BOOL)arg1 ;
-(void)setPresentFullScreenAlertOverList:(BOOL)arg1 ;
-(void)setPreventAutomaticLock:(BOOL)arg1 ;
-(void)setPreventAutomaticRemovalFromRecent:(BOOL)arg1 ;
-(void)setPreventDismissWhenClosed:(BOOL)arg1 ;
-(void)setRevealAdditionalContentWhenPresented:(BOOL)arg1 ;
-(void)setShouldAllowActionsInCarPlay:(BOOL)arg1 ;
-(void)setShouldAllowPersistentBannersInCarPlay:(BOOL)arg1 ;
-(void)setPreventClearFromList:(BOOL)arg1 ;
-(void)setAlwaysDisplayNotificationsIndicator:(BOOL)arg1 ;
-(void)setSuppressDelayForForwardedNotifications:(BOOL)arg1 ;
-(void)setSuppressDismissActionInCarPlay:(BOOL)arg1 ;
-(NSString *)privateBody;
-(BOOL)preventAutomaticRemovalFromRecent;
-(BOOL)revealAdditionalContentWhenPresented;
-(BOOL)preventAutomaticLock;
-(BOOL)preventDismissWhenClosed;
-(BOOL)shouldAllowPersistentBannersInCarPlay;
-(BOOL)shouldAllowActionsInCarPlay;
-(BOOL)alwaysDisplayNotificationsIndicator;
-(BOOL)suppressDelayForForwardedNotifications;
-(BOOL)suppressDismissActionInCarPlay;
-(BOOL)privacyOptionShowTitle;
-(BOOL)privacyOptionShowSubtitle;
-(BOOL)presentFullScreenAlertOverList;
-(BOOL)preventClearFromList;
-(BOOL)hasCustomDismissAction;
-(BOOL)hasCustomSilenceAction;
-(BOOL)shouldAllowSpoken;
-(BOOL)shouldAllowInCarPlay;
@end

