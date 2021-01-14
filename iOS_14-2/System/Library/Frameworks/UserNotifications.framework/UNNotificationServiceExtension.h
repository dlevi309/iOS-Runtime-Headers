/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface UNNotificationServiceExtension : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)didReceiveNotificationRequest:(id)arg1 withContentHandler:(/*^block*/id)arg2 ;
-(void)serviceExtensionTimeWillExpire;
@end

