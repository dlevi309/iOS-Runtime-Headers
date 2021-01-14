/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _displayLocation;
	NSDictionary* _thumbnailGeneratorUserInfo;

}

@property (nonatomic,readonly) unsigned long long displayLocation;                          //@synthesize displayLocation=_displayLocation - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * thumbnailGeneratorUserInfo;              //@synthesize thumbnailGeneratorUserInfo=_thumbnailGeneratorUserInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithOptions:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)displayLocation;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)thumbnailGeneratorUserInfo;
-(id)_initWithDisplayLocation:(unsigned long long)arg1 thumbnailGeneratorUserInfo:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

