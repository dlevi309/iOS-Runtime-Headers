/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UNNotificationResponse.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse <BSXPCCoding> {

	NSString* _userText;

}

@property (nonatomic,copy,readonly) NSString * userText;              //@synthesize userText=_userText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 userText:(id)arg6 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 userText:(id)arg5 ;
-(id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 userText:(id)arg6 ;
-(NSString *)userText;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 ;
-(id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 ;
@end

