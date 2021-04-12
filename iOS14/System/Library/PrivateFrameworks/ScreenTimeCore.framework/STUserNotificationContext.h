/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UNNotificationTrigger *)trigger;
-(id)init;
-(NSNumber *)destinations;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTrigger:(UNNotificationTrigger *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setLocalizedUserNotificationBodyArguments:(NSArray *)arg1 ;
-(NSArray *)localizedUserNotificationBodyArguments;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSString *)notificationBundleIdentifier;
-(void)notificationContentWithCompletionBlock:(/*^block*/id)arg1 ;
@end

