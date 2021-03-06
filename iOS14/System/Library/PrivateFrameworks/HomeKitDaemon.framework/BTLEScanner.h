/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPBTLECentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFTimer, CUBLEScanner, HAPBTLECentralManager, HMDAccessoryQueues, NSString, NSArray;

@interface BTLEScanner : HMFObject <HMFTimerDelegate, HAPBTLECentralManagerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	HMFTimer* scanTimer;
	CUBLEScanner* cubleScanner;
	HAPBTLECentralManager* centralManager;
	HMDAccessoryQueues* scanQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) HMFTimer * scanTimer; 
@property (nonatomic,retain) CUBLEScanner * cubleScanner; 
@property (nonatomic,retain) HAPBTLECentralManager * centralManager; 
@property (nonatomic,retain) HMDAccessoryQueues * scanQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)sharedScanLock;
+(id)initializeScanner;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HMDAccessoryQueues *)scanQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)setCentralManager:(HAPBTLECentralManager *)arg1 ;
-(void)setScanQueue:(HMDAccessoryQueues *)arg1 ;
-(HAPBTLECentralManager *)centralManager;
-(void)_stopTimer;
-(void)_flushQueue;
-(void)didUpdateBTLEState:(long long)arg1 ;
-(void)_stopScan;
-(HMFTimer *)scanTimer;
-(void)setScanTimer:(HMFTimer *)arg1 ;
-(void)setCubleScanner:(CUBLEScanner *)arg1 ;
-(CUBLEScanner *)cubleScanner;
-(void)_checkCanScan;
-(BOOL)startScan:(id)arg1 timeout:(double)arg2 ;
@end

