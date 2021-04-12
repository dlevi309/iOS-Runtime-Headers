/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSString, NSDate, NSData;

@interface UIActivityContinuationAction : BSAction

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * activityTypeIdentifier; 
@property (nonatomic,readonly) NSString * originatingDeviceType; 
@property (nonatomic,readonly) NSString * originatingDeviceName; 
@property (nonatomic,readonly) NSString * activityType; 
@property (nonatomic,readonly) NSDate * lastUpdateTime; 
@property (nonatomic,readonly) NSData * userActivityData; 
-(NSString *)identifier;
-(NSString *)activityType;
-(id)initWithSettings:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)UIActionType;
-(NSString *)activityTypeIdentifier;
-(NSString *)originatingDeviceType;
-(NSString *)originatingDeviceName;
-(NSDate *)lastUpdateTime;
-(NSData *)userActivityData;
@end

