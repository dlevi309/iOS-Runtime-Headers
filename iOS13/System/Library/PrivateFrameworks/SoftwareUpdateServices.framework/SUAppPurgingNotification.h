/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

