/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {

	NSString* _applicationIdentifier;
	NSString* _name;
	NSString* _path;

}

@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)iconAtPath:(id)arg1 ;
+(id)iconNamed:(id)arg1 ;
+(id)iconForApplicationIdentifier:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)path;
-(NSString *)applicationIdentifier;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithName:(id)arg1 path:(id)arg2 applicationIdentifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

