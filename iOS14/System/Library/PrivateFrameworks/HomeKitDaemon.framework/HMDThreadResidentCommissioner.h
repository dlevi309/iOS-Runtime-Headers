/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDThreadResidentCommissioner.h>

@protocol HMDThreadResidentCommissioner <NSObject>
@required
-(void)stopThreadNetworkWithCompletion:(/*^block*/id)arg1;
-(void)startThreadNetworkWithID:(id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue, HMDThreadRadioClient;
@class NSObject, NSString;

@interface HMDThreadResidentCommissioner : HMFObject <HMFLogging, HMDThreadResidentCommissioner> {

	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDThreadRadioClient> _threadRadioClient;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<HMDThreadRadioClient> threadRadioClient;              //@synthesize threadRadioClient=_threadRadioClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedCommissioner;
-(id)initInternal;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithThreadRadioClient:(id)arg1 ;
-(void)_startThreadNetworkWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<HMDThreadRadioClient>)threadRadioClient;
-(void)_stopThreadNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)stopThreadNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)startThreadNetworkWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

