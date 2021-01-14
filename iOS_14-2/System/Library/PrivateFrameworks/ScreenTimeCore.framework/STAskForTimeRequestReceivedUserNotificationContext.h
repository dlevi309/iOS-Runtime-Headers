/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString, NSNumber;

@interface STAskForTimeRequestReceivedUserNotificationContext : STUserNotificationContext {

	NSString* _childName;
	NSNumber* _childDSID;

}

@property (nonatomic,copy) NSString * childName;                //@synthesize childName=_childName - In the implementation block
@property (nonatomic,retain) NSNumber * childDSID;              //@synthesize childDSID=_childDSID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithAskForTimeRequestIdentifier:(id)arg1 childName:(id)arg2 childDSID:(id)arg3 requestedResourceName:(id)arg4 ;
-(NSNumber *)childDSID;
-(void)_fetchAndWriteFamilyPhotoURLIfNeeded:(/*^block*/id)arg1 ;
-(id)initWithAskForTimeRequestIdentifier:(id)arg1 familyMember:(id)arg2 requestedResourceName:(id)arg3 ;
-(NSString *)childName;
-(void)setChildName:(NSString *)arg1 ;
-(void)setChildDSID:(NSNumber *)arg1 ;
@end

