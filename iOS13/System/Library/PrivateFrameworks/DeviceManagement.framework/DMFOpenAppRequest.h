/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(NSData *)activityData;
-(BOOL)lockInApp;
-(void)setActivityData:(NSData *)arg1 ;
-(void)setLockInApp:(BOOL)arg1 ;
@end

