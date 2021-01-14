/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

