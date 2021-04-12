/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RadioNetworkObserver : NSObject {

	long long _networkUsageCount;
	NSObject*<OS_dispatch_queue> _networkUsageQueue;

}

@property (nonatomic,readonly) BOOL isUsingNetwork; 
@property (nonatomic,readonly) BOOL isCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(id)_init;
-(BOOL)isUsingNetwork;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(BOOL)isCellularNetworkingAllowed;
@end

