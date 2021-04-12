/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFWiFiManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, HMFWiFiManagerDataSource;
@class HMFUnfairLock, NSString, HMFMACAddress, NSObject;

@interface HMFWiFiManager : HMFObject <HMFWiFiManagerDataSourceDelegate> {

	HMFUnfairLock* _lock;
	BOOL _shouldAssertWoW;
	NSString* _currentNetworkSSID;
	HMFMACAddress* _MACAddress;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMFWiFiManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<HMFWiFiManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldAssertWoW;                                   //@synthesize shouldAssertWoW=_shouldAssertWoW - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSSID;                            //@synthesize currentNetworkSSID=_currentNetworkSSID - In the implementation block
@property (copy,readonly) HMFMACAddress * MACAddress;                                //@synthesize MACAddress=_MACAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMFWiFiManagerDataSource>)dataSource;
-(id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2 ;
-(void)currentNetworkDidChangeForDataSource:(id)arg1 ;
-(BOOL)shouldAssertWoW;
-(void)setShouldAssertWoW:(BOOL)arg1 ;
-(NSString *)currentNetworkSSID;
-(void)setCurrentNetworkSSID:(NSString *)arg1 ;
-(void)dataSource:(id)arg1 didChangeWoWState:(BOOL)arg2 ;
-(void)dataSource:(id)arg1 didChangeLinkAvailability:(BOOL)arg2 ;
-(void)takeWoWAssertion;
-(void)releaseWoWAssertion;
-(HMFMACAddress *)MACAddress;
@end

