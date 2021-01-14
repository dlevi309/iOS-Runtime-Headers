/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSData;

@interface DMFOpenAppRequest : DMFTaskRequest {

	BOOL _lockInApp;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	NSData* _activityData;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activityType;                  //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSData * activityData;                    //@synthesize activityData=_activityData - In the implementation block
@property (assign,nonatomic) BOOL lockInApp;                         //@synthesize lockInApp=_lockInApp - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(void)setActivityData:(NSData *)arg1 ;
-(void)setLockInApp:(BOOL)arg1 ;
-(NSData *)activityData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)lockInApp;
@end

