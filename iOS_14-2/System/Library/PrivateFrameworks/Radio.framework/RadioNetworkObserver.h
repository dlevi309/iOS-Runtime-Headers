/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isUsingNetwork;
-(id)init;
-(void)beginUsingNetwork;
-(id)_init;
-(void)endUsingNetwork;
-(void)dealloc;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(BOOL)isCellularNetworkingAllowed;
@end

