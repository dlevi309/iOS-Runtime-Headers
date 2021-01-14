/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


@protocol HAENotificationCenterDelegate, HAENotificationCenterUserDelegate;
@class NSString;

@interface HAENotificationCenter : NSObject {

	id<HAENotificationCenterDelegate> centerDelegate;
	NSString* bundleID;
	double liveThresholdInDBA;
	double liveMonitorWindowInSec;
	id<HAENotificationCenterUserDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<HAENotificationCenterUserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) double liveMonitorWindowInSec; 
@property (nonatomic,readonly) double liveThresholdInDBA; 
+(void)startNotificationCenterServer;
-(id)addHAENotificationEvent:(id)arg1 error:(id*)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)addHAENotificationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<HAENotificationCenterUserDelegate>)delegate;
-(double)liveThresholdInDBA;
-(double)liveMonitorWindowInSec;
-(void)setDelegate:(id<HAENotificationCenterUserDelegate>)arg1 ;
-(NSString *)bundleID;
@end

