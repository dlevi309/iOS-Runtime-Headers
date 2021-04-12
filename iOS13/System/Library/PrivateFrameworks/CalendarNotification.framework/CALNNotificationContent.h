/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL, NSArray, CALNNotificationSound, NSDictionary;

@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSString* _categoryIdentifier;
	NSString* _sectionIdentifier;
	NSDate* _date;
	NSDate* _expirationDate;
	NSURL* _defaultActionURL;
	NSString* _iconIdentifier;
	BOOL _shouldHideTime;
	BOOL _shouldSuppressSyncDismissalWhenRemoved;
	NSArray* _peopleIdentifiers;
	CALNNotificationSound* _sound;
	NSDictionary* _userInfo;
	NSString* _threadIdentifier;
	NSString* _summaryArgument;
	unsigned long long _summaryArgumentCount;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                     //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;                       //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;                        //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSURL * defaultActionURL;                            //@synthesize defaultActionURL=_defaultActionURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideTime;                                      //@synthesize shouldHideTime=_shouldHideTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconIdentifier;                           //@synthesize iconIdentifier=_iconIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressSyncDismissalWhenRemoved;              //@synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peopleIdentifiers;                         //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) CALNNotificationSound * sound;                       //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                             //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadIdentifier;                         //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryArgument;                          //@synthesize summaryArgument=_summaryArgument - In the implementation block
@property (nonatomic,readonly) unsigned long long summaryArgumentCount;                  //@synthesize summaryArgumentCount=_summaryArgumentCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)title;
-(NSDate *)expirationDate;
-(NSString *)subtitle;
-(NSArray *)peopleIdentifiers;
-(NSString *)body;
-(CALNNotificationSound *)sound;
-(NSString *)categoryIdentifier;
-(NSURL *)defaultActionURL;
-(BOOL)shouldHideTime;
-(BOOL)shouldSuppressSyncDismissalWhenRemoved;
-(NSString *)threadIdentifier;
-(NSString *)summaryArgument;
-(unsigned long long)summaryArgumentCount;
-(NSString *)sectionIdentifier;
-(BOOL)isEqualToContent:(id)arg1 ;
-(BOOL)isEqualForDiffingPurposesToContent:(id)arg1 ;
-(NSString *)iconIdentifier;
-(id)_initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 sectionIdentifier:(id)arg5 date:(id)arg6 expirationDate:(id)arg7 defaultActionURL:(id)arg8 iconIdentifier:(id)arg9 shouldHideTime:(BOOL)arg10 shouldSuppressSyncDismissalWhenRemoved:(BOOL)arg11 peopleIdentifiers:(id)arg12 sound:(id)arg13 userInfo:(id)arg14 threadIdentifier:(id)arg15 summaryArgument:(id)arg16 summaryArgumentCount:(unsigned long long)arg17 ;
@end

