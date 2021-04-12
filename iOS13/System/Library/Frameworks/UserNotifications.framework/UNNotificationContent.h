/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber, NSString, NSDate, NSURL, UNNotificationSound, NSSet, NSDictionary, UNNotificationIcon;

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _attachments;
	NSNumber* _badge;
	NSString* _body;
	NSString* _categoryIdentifier;
	NSDate* _date;
	NSString* _defaultActionTitle;
	NSURL* _defaultActionURL;
	NSDate* _expirationDate;
	NSString* _header;
	NSString* _launchImageName;
	NSArray* _peopleIdentifiers;
	BOOL _shouldHideDate;
	BOOL _shouldHideTime;
	BOOL _shouldIgnoreDoNotDisturb;
	BOOL _shouldIgnoreDowntime;
	BOOL _shouldSuppressScreenLightUp;
	BOOL _shouldPreventNotificationDismissalAfterDefaultAction;
	BOOL _shouldAuthenticateDefaultAction;
	BOOL _shouldBackgroundDefaultAction;
	BOOL _shouldSuppressDefaultAction;
	BOOL _shouldSuppressSyncDismissalWhenRemoved;
	BOOL _shouldUseRequestIdentifierForDismissalSync;
	BOOL _shouldPreemptPresentedNotification;
	BOOL _shouldPreemptSTAR;
	UNNotificationSound* _sound;
	NSString* _accessoryImageName;
	NSString* _subtitle;
	NSString* _threadIdentifier;
	NSString* _title;
	NSSet* _topicIdentifiers;
	unsigned long long _realertCount;
	NSString* _summaryArgument;
	unsigned long long _summaryArgumentCount;
	NSString* _targetContentIdentifier;
	NSDictionary* _userInfo;
	UNNotificationIcon* _icon;

}

@property (nonatomic,copy,readonly) NSString * header;                                                 //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreDoNotDisturb;                                          //@synthesize shouldIgnoreDoNotDisturb=_shouldIgnoreDoNotDisturb - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreDowntime;                                              //@synthesize shouldIgnoreDowntime=_shouldIgnoreDowntime - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressScreenLightUp;                                       //@synthesize shouldSuppressScreenLightUp=_shouldSuppressScreenLightUp - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideDate;                                                    //@synthesize shouldHideDate=_shouldHideDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL shouldAuthenticateDefaultAction;                                   //@synthesize shouldAuthenticateDefaultAction=_shouldAuthenticateDefaultAction - In the implementation block
@property (nonatomic,readonly) BOOL shouldBackgroundDefaultAction;                                     //@synthesize shouldBackgroundDefaultAction=_shouldBackgroundDefaultAction - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreventNotificationDismissalAfterDefaultAction;              //@synthesize shouldPreventNotificationDismissalAfterDefaultAction=_shouldPreventNotificationDismissalAfterDefaultAction - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressDefaultAction;                                       //@synthesize shouldSuppressDefaultAction=_shouldSuppressDefaultAction - In the implementation block
@property (nonatomic,copy,readonly) NSURL * defaultActionURL;                                          //@synthesize defaultActionURL=_defaultActionURL - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationIcon * icon;                                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSSet * topicIdentifiers;                                          //@synthesize topicIdentifiers=_topicIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long realertCount;                                        //@synthesize realertCount=_realertCount - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseRequestIdentifierForDismissalSync;                        //@synthesize shouldUseRequestIdentifierForDismissalSync=_shouldUseRequestIdentifierForDismissalSync - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressSyncDismissalWhenRemoved;                            //@synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved - In the implementation block
@property (nonatomic,readonly) NSString * accessoryImageName;                                          //@synthesize accessoryImageName=_accessoryImageName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peopleIdentifiers;                                       //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreemptPresentedNotification;                                //@synthesize shouldPreemptPresentedNotification=_shouldPreemptPresentedNotification - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreemptSTAR;                                                 //@synthesize shouldPreemptSTAR=_shouldPreemptSTAR - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideTime;                                                    //@synthesize shouldHideTime=_shouldHideTime - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultAction; 
@property (nonatomic,copy,readonly) NSString * defaultActionTitle;                                     //@synthesize defaultActionTitle=_defaultActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachments;                                             //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * badge;                                                  //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                                   //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;                                     //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchImageName;                                        //@synthesize launchImageName=_launchImageName - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationSound * sound;                                       //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * threadIdentifier;                                       //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                           //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryArgument;                                        //@synthesize summaryArgument=_summaryArgument - In the implementation block
@property (nonatomic,readonly) unsigned long long summaryArgumentCount;                                //@synthesize summaryArgumentCount=_summaryArgumentCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetContentIdentifier;                                //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSArray *)attachments;
-(NSString *)title;
-(NSDate *)expirationDate;
-(NSString *)targetContentIdentifier;
-(NSString *)subtitle;
-(NSArray *)peopleIdentifiers;
-(NSString *)header;
-(UNNotificationIcon *)icon;
-(NSString *)body;
-(UNNotificationSound *)sound;
-(NSString *)launchImageName;
-(NSString *)categoryIdentifier;
-(NSNumber *)badge;
-(BOOL)hasDefaultAction;
-(NSString *)defaultActionTitle;
-(NSString *)accessoryImageName;
-(NSURL *)defaultActionURL;
-(BOOL)shouldHideDate;
-(BOOL)shouldHideTime;
-(BOOL)shouldIgnoreDoNotDisturb;
-(BOOL)shouldIgnoreDowntime;
-(BOOL)shouldSuppressScreenLightUp;
-(BOOL)shouldAuthenticateDefaultAction;
-(BOOL)shouldBackgroundDefaultAction;
-(BOOL)shouldPreventNotificationDismissalAfterDefaultAction;
-(BOOL)shouldSuppressDefaultAction;
-(BOOL)shouldSuppressSyncDismissalWhenRemoved;
-(BOOL)shouldUseRequestIdentifierForDismissalSync;
-(BOOL)shouldPreemptPresentedNotification;
-(BOOL)shouldPreemptSTAR;
-(NSString *)threadIdentifier;
-(NSSet *)topicIdentifiers;
-(unsigned long long)realertCount;
-(NSString *)summaryArgument;
-(unsigned long long)summaryArgumentCount;
-(id)_descriptionForDebug:(BOOL)arg1 ;
-(id)_safeStringForString:(id)arg1 debug:(BOOL)arg2 ;
-(id)_initWithAccessoryImageName:(id)arg1 attachments:(id)arg2 badge:(id)arg3 body:(id)arg4 categoryIdentifier:(id)arg5 date:(id)arg6 icon:(id)arg7 defaultActionTitle:(id)arg8 defaultActionURL:(id)arg9 expirationDate:(id)arg10 header:(id)arg11 launchImageName:(id)arg12 peopleIdentifiers:(id)arg13 shouldHideDate:(BOOL)arg14 shouldHideTime:(BOOL)arg15 shouldIgnoreDoNotDisturb:(BOOL)arg16 shouldIgnoreDowntime:(BOOL)arg17 shouldSuppressScreenLightUp:(BOOL)arg18 shouldAuthenticateDefaultAction:(BOOL)arg19 shouldBackgroundDefaultAction:(BOOL)arg20 shouldPreventNotificationDismissalAfterDefaultAction:(BOOL)arg21 shouldSuppressDefaultAction:(BOOL)arg22 shouldSuppressSyncDismissalWhenRemoved:(BOOL)arg23 shouldUseRequestIdentifierForDismissalSync:(BOOL)arg24 shouldPreemptPresentedNotification:(BOOL)arg25 shouldPreemptSTAR:(BOOL)arg26 sound:(id)arg27 subtitle:(id)arg28 threadIdentifier:(id)arg29 title:(id)arg30 topicIdentifiers:(id)arg31 realertCount:(unsigned long long)arg32 summaryArgument:(id)arg33 summaryArgumentCount:(unsigned long long)arg34 targetContentIdentifier:(id)arg35 userInfo:(id)arg36 ;
@end

