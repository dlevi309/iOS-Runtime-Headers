/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDFMFRequest, NSMutableArray, HMDFMF, NSString;

@interface HMDFMFHandler : HMFObject <FMFSessionDelegate, HMFLogging, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDFMFRequest* _currentFMFRequest;
	NSMutableArray* _queries;
	HMDFMF* _fmfStatus;

}

@property (nonatomic,retain) HMDFMF * fmfStatus;                                    //@synthesize fmfStatus=_fmfStatus - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMDFMFRequest * currentFMFRequest;                     //@synthesize currentFMFRequest=_currentFMFRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * queries;                              //@synthesize queries=_queries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedHandler;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)setQueries:(NSMutableArray *)arg1 ;
-(void)sendNotification;
-(NSMutableArray *)queries;
-(void)queryFMFStatusWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)homeDataLoaded:(id)arg1 ;
-(void)_initiateFMFRequest;
-(HMDFMFRequest *)currentFMFRequest;
-(void)_processDevices:(id)arg1 error:(id)arg2 ;
-(void)setCurrentFMFRequest:(HMDFMFRequest *)arg1 ;
-(HMDFMF *)fmfStatus;
-(void)_respondToPendingRequests:(id)arg1 ;
-(unsigned long long)_computeFMFStatus:(id)arg1 ;
-(void)setFmfStatus:(HMDFMF *)arg1 ;
-(void)meDeviceChanged;
-(void)fmfDevicesChanged;
@end

