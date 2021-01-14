/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

