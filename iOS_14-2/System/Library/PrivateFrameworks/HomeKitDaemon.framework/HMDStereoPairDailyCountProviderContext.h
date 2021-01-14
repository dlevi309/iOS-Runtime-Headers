/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDStereoPairDailyCountProviderContext.h>
@class HMDHomeMediaSystemHandler, HMDLogEventDailyScheduler;


@protocol HMDStereoPairDailyCountProviderContext <HMDLogEventSubmitting>
@property (__weak,readonly) HMDHomeMediaSystemHandler * mediaSystemController; 
@property (__weak,readonly) HMDLogEventDailyScheduler * scheduler; 
@required
-(HMDLogEventDailyScheduler *)scheduler;
-(HMDHomeMediaSystemHandler *)mediaSystemController;
-(void)registerLogEventDailyProvider:(id)arg1;

@end


@class HMDHomeMediaSystemHandler, HMDLogEventDailyScheduler, HMDLogEventDispatcher, NSString;

@interface HMDStereoPairDailyCountProviderContext : NSObject <HMDStereoPairDailyCountProviderContext> {

	HMDHomeMediaSystemHandler* _mediaSystemController;

}

@property (__weak,readonly) HMDHomeMediaSystemHandler * mediaSystemController;              //@synthesize mediaSystemController=_mediaSystemController - In the implementation block
@property (__weak,readonly) HMDLogEventDailyScheduler * scheduler; 
@property (readonly) HMDLogEventDispatcher * logEventDispatcher; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMDLogEventDailyScheduler *)scheduler;
-(void)submitLogEvent:(id)arg1 ;
-(HMDHomeMediaSystemHandler *)mediaSystemController;
-(void)registerLogEventDailyProvider:(id)arg1 ;
-(id)initWithMediaSystemController:(id)arg1 ;
@end

