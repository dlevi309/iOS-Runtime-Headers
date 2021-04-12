/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, UNNotificationTrigger, NSNumber;

@interface STUserNotificationContext : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSArray* _localizedUserNotificationBodyArguments;
	UNNotificationTrigger* _trigger;

}

@property (readonly) NSNumber * destinations; 
@property (copy,readonly) NSString * notificationBundleIdentifier; 
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * localizedUserNotificationBodyArguments;              //@synthesize localizedUserNotificationBodyArguments=_localizedUserNotificationBodyArguments - In the implementation block
@property (nonatomic,copy) UNNotificationTrigger * trigger;                               //@synthesize trigger=_trigger - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSNumber *)destinations;
-(UNNotificationTrigger *)trigger;
-(void)setTrigger:(UNNotificationTrigger *)arg1 ;
-(void)setLocalizedUserNotificationBodyArguments:(NSArray *)arg1 ;
-(NSArray *)localizedUserNotificationBodyArguments;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSString *)notificationBundleIdentifier;
-(void)notificationContentWithCompletionBlock:(/*^block*/id)arg1 ;
@end

