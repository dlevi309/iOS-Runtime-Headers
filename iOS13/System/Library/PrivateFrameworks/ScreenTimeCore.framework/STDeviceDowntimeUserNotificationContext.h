/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext {

	NSString* _localizedUserNotificationBodyKey;

}

@property (nonatomic,copy) NSString * localizedUserNotificationBodyKey;              //@synthesize localizedUserNotificationBodyKey=_localizedUserNotificationBodyKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)destinations;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 locale:(id)arg3 ;
-(void)setLocalizedUserNotificationBodyKey:(NSString *)arg1 ;
-(NSString *)localizedUserNotificationBodyKey;
-(void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 ;
-(id)notificationBundleIdentifier;
@end

