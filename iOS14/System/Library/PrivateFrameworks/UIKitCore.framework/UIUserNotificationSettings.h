/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _types;
	NSSet* _categories;

}

@property (nonatomic,readonly) unsigned long long types;              //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSSet * categories;               //@synthesize categories=_categories - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)settingsForTypes:(unsigned long long)arg1 categories:(id)arg2 ;
+(id)settingsForUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2 ;
+(id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2 ;
-(unsigned long long)types;
-(id)validatedSettings;
-(id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2 ;
-(id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2 ;
-(BOOL)mayPresentUserNotificationOfType:(unsigned long long)arg1 ;
-(unsigned long long)allowedUserNotificationTypes;
-(id)userNotificationActionSettings;
-(NSSet *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

