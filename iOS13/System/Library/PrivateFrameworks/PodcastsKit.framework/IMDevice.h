/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMDevice : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	long long _cachedDeviceClass;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long cachedDeviceClass;                     //@synthesize cachedDeviceClass=_cachedDeviceClass - In the implementation block
@property (nonatomic,readonly) long long deviceClass; 
+(id)currentDevice;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(long long)deviceClass;
-(void)_onQueueLoadDeviceClass;
-(long long)cachedDeviceClass;
-(void)setCachedDeviceClass:(long long)arg1 ;
@end

