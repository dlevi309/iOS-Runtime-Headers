/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, UNNotificationAction;

@interface UNNotificationCategory : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	NSArray* _actions;
	NSArray* _minimalActions;
	NSArray* _intentIdentifiers;
	NSString* _identifier;
	NSString* _hiddenPreviewsBodyPlaceholder;
	NSString* _categorySummaryFormat;
	NSString* _actionsMenuTitle;
	UNNotificationAction* _alternateAction;
	unsigned long long _options;
	unsigned long long _backgroundStyle;
	unsigned long long _listPriority;

}

@property (nonatomic,copy,readonly) NSArray * minimalActions;                              //@synthesize minimalActions=_minimalActions - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionsMenuTitle;                           //@synthesize actionsMenuTitle=_actionsMenuTitle - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationAction * alternateAction;                //@synthesize alternateAction=_alternateAction - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundStyle;                         //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long listPriority;                            //@synthesize listPriority=_listPriority - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                     //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentIdentifiers;                           //@synthesize intentIdentifiers=_intentIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * hiddenPreviewsBodyPlaceholder;              //@synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * categorySummaryFormat;                      //@synthesize categorySummaryFormat=_categorySummaryFormat - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 options:(unsigned long long)arg5 ;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 categorySummaryFormat:(id)arg6 options:(unsigned long long)arg7 ;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 options:(unsigned long long)arg4 ;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 options:(unsigned long long)arg5 ;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 categorySummaryFormat:(id)arg5 options:(unsigned long long)arg6 ;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 options:(unsigned long long)arg6 ;
-(NSString *)hiddenPreviewsBodyPlaceholder;
-(id)_initWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 alternateAction:(id)arg4 intentIdentifiers:(id)arg5 hiddenPreviewsBodyPlaceholder:(id)arg6 categorySummaryFormat:(id)arg7 actionsMenuTitle:(id)arg8 options:(unsigned long long)arg9 backgroundStyle:(unsigned long long)arg10 listPriority:(unsigned long long)arg11 ;
-(UNNotificationAction *)alternateAction;
-(NSString *)actionsMenuTitle;
-(NSArray *)actions;
-(unsigned long long)backgroundStyle;
-(NSArray *)intentIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)categorySummaryFormat;
-(id)description;
-(unsigned long long)listPriority;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)minimalActions;
-(BOOL)isEqual:(id)arg1 ;
@end

