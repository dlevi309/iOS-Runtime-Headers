/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext {

	NSString* _parentName;
	NSString* _requestedResourceName;

}

@property (nonatomic,copy) NSString * parentName;                         //@synthesize parentName=_parentName - In the implementation block
@property (nonatomic,copy) NSString * requestedResourceName;              //@synthesize requestedResourceName=_requestedResourceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSString *)parentName;
-(NSString *)requestedResourceName;
-(void)setParentName:(NSString *)arg1 ;
-(void)setRequestedResourceName:(NSString *)arg1 ;
-(id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3 ;
@end

