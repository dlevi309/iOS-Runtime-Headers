/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSString;

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMDLogEventObserver, HMFLogging> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	NSDictionary* _homeConfigurationCommonDimensions;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                    //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * homeConfigurationCommonDimensions;              //@synthesize homeConfigurationCommonDimensions=_homeConfigurationCommonDimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedObserver;
+(id)supportedEventTypes;
+(BOOL)isSupportedEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)init;
-(void)start;
-(void)stop;
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
-(BOOL)shouldSubmitEvent:(id)arg1 ;
-(id)updateHomeConfigurationCommonDimensions;
-(NSDictionary *)homeConfigurationCommonDimensions;
-(void)setHomeConfigurationCommonDimensions:(NSDictionary *)arg1 ;
-(void)addHomeConfigurationCommonDimensionsToEventDictionary:(id)arg1 ;
@end

