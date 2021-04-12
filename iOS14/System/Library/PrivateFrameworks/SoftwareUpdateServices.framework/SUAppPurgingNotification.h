/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/SUAppPurgingNotification.h>

@protocol SUAppPurgingNotification <NSObject>
@optional
+(void)postAppPurgingNotificationWithCompletion:(/*^block*/id)arg1;

@end


@class NSString;

@interface SUAppPurgingNotification : NSObject <SUAppPurgingNotification>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)postAppPurgingNotificationWithCompletion:(/*^block*/id)arg1 ;
@end

