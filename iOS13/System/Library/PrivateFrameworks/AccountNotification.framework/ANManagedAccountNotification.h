/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, ANManagedNotificationAction;

@interface ANManagedAccountNotification : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSString * activateButtonTitle; 
@property (nonatomic,retain) NSString * dismissButtonTitle; 
@property (nonatomic,retain) NSString * callbackMachServiceName; 
@property (nonatomic,retain) id userInfo; 
@property (nonatomic,retain) NSString * accountTypeID; 
@property (nonatomic,retain) NSString * eventID; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) ANManagedNotificationAction * activateAction; 
@property (nonatomic,retain) ANManagedNotificationAction * dismissAction; 
@property (nonatomic,retain) ANManagedNotificationAction * clearAction; 
-(void)takeValuesFromAccountNotification:(id)arg1 ;
@end

