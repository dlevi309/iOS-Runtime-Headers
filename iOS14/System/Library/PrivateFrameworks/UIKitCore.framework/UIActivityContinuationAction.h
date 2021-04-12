/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSettings:(id)arg1 ;
-(NSString *)activityType;
-(long long)UIActionType;
-(NSDate *)lastUpdateTime;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(NSString *)activityTypeIdentifier;
-(NSData *)userActivityData;
-(NSString *)originatingDeviceName;
-(NSString *)originatingDeviceType;
-(NSString *)identifier;
@end

