/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKOutputDeviceBrowsingSession.h>

@class NSArray, AVOutputDeviceDiscoverySession, AVOutputContext, NSNotificationCenter;

@interface CRKConcreteOutputDeviceBrowsingSession : NSObject <CRKOutputDeviceBrowsingSession> {

	AVOutputDeviceDiscoverySession* _discoverySession;
	AVOutputContext* _outputContext;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) AVOutputDeviceDiscoverySession * discoverySession;              //@synthesize discoverySession=_discoverySession - In the implementation block
@property (nonatomic,readonly) AVOutputContext * outputContext;                                //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                      //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outputDevices; 
+(id)sessionWithOutputContext:(id)arg1 notificationCenter:(id)arg2 ;
-(NSNotificationCenter *)notificationCenter;
-(AVOutputDeviceDiscoverySession *)discoverySession;
-(NSArray *)outputDevices;
-(void)invalidate;
-(AVOutputContext *)outputContext;
-(id)initWithDiscoverySession:(id)arg1 outputContext:(id)arg2 notificationCenter:(id)arg3 ;
-(id)observeBrowsedOutputDeviceChangesWithHandler:(/*^block*/id)arg1 ;
@end

