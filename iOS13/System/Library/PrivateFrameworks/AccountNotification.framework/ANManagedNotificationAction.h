/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, ANManagedAccountNotification;

@interface ANManagedNotificationAction : NSManagedObject

@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) id options; 
@property (nonatomic,retain) NSNumber * isInternal; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToActivate; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToDismiss; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToClear; 
-(void)takeValuesFromNotificationAction:(id)arg1 ;
@end

