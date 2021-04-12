/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskToManageContactsApprovedResponseReceivedUserNotificationContext : STUserNotificationContext {

	NSString* _childName;

}

@property (nonatomic,copy) NSString * childName;              //@synthesize childName=_childName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSString *)childName;
-(void)setChildName:(NSString *)arg1 ;
-(id)initWithChildName:(id)arg1 ;
@end

