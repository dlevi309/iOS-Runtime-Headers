/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface NCEventTrackerNotificationMetadata : NSObject <NSCopying> {

	NSString* _notificationIdentifier;
	NSString* _bundleIdentifier;
	NSDate* _date;

}

@property (copy,readonly) NSString * notificationIdentifier;              //@synthesize notificationIdentifier=_notificationIdentifier - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy,readonly) NSDate * date;                                  //@synthesize date=_date - In the implementation block
+(id)metadataForNotificationRequest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSString *)bundleIdentifier;
-(NSString *)notificationIdentifier;
-(id)_initWithNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 date:(id)arg3 ;
@end

