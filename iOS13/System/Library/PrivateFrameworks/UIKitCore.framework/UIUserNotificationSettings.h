/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)categories;
-(id)validatedSettings;
-(id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2 ;
-(id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2 ;
-(unsigned long long)types;
-(BOOL)mayPresentUserNotificationOfType:(unsigned long long)arg1 ;
-(unsigned long long)allowedUserNotificationTypes;
-(id)userNotificationActionSettings;
@end

