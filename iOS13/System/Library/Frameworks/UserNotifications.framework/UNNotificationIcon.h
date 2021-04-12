/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(NSString *)applicationIdentifier;
-(id)_initWithName:(id)arg1 path:(id)arg2 applicationIdentifier:(id)arg3 ;
@end

