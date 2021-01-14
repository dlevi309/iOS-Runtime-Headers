/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIUserNotificationAction.h>

@class NSString, NSDictionary;

@interface UIMutableUserNotificationAction : UIUserNotificationAction

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned long long behavior; 
@property (nonatomic,copy) NSDictionary * parameters; 
@property (assign,nonatomic) unsigned long long activationMode; 
@property (assign,getter=isAuthenticationRequired,nonatomic) BOOL authenticationRequired; 
@property (assign,getter=isDestructive,nonatomic) BOOL destructive; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

