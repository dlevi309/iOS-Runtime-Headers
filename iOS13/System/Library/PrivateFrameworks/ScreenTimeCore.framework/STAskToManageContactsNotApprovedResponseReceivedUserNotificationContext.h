/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext {

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

