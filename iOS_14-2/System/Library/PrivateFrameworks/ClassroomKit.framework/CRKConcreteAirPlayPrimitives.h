/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKAirPlayPrimitives.h>

@class AVOutputContext, NSNotificationCenter;

@interface CRKConcreteAirPlayPrimitives : NSObject <CRKAirPlayPrimitives> {

	AVOutputContext* _outputContext;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) AVOutputContext * outputContext;                        //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<CRKOutputDevice> localOutputDevice; 
@property (nonatomic,readonly) id<CRKOutputDevice> currentOutputDevice; 
-(NSNotificationCenter *)notificationCenter;
-(id<CRKOutputDevice>)currentOutputDevice;
-(AVOutputContext *)outputContext;
-(id)initWithOutputContext:(id)arg1 notificationCenter:(id)arg2 ;
-(id)beginOutputDeviceBrowsingSession;
-(id)observeCurrentOutputDeviceChangesWithHandler:(/*^block*/id)arg1 ;
-(id<CRKOutputDevice>)localOutputDevice;
@end

