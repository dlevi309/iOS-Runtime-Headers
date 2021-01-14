/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKAirPlayPrimitives
@property (nonatomic,readonly) id<CRKOutputDevice> localOutputDevice; 
@property (nonatomic,readonly) id<CRKOutputDevice> currentOutputDevice; 
@required
-(id<CRKOutputDevice>)currentOutputDevice;
-(id)beginOutputDeviceBrowsingSession;
-(id)observeCurrentOutputDeviceChangesWithHandler:(/*^block*/id)arg1;
-(id<CRKOutputDevice>)localOutputDevice;

@end

