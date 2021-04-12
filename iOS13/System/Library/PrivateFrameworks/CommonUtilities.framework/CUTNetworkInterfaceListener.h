/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@protocol OS_dispatch_queue;
#import <CommonUtilities/CommonUtilities-Structs.h>
@class NSHashTable, NSObject, NSSet;

@interface CUTNetworkInterfaceListener : NSObject {

	void* _dynamicStore;
	NSHashTable* _delegateMap;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _wifiState;
	int _cellState;
	NSSet* _IPv6Addresses;
	NSSet* _IPv4Addresses;

}

@property (nonatomic,readonly) int wifiState;                      //@synthesize wifiState=_wifiState - In the implementation block
@property (nonatomic,readonly) int cellState;                      //@synthesize cellState=_cellState - In the implementation block
@property (nonatomic,readonly) NSSet * IPv6Addresses;              //@synthesize IPv6Addresses=_IPv6Addresses - In the implementation block
@property (nonatomic,readonly) NSSet * IPv4Addresses;              //@synthesize IPv4Addresses=_IPv4Addresses - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_notifyDelegatesOfAddressChange:(id)arg1 isIPv6:(BOOL)arg2 ;
-(void)_notifyDelegatesOfCellChange:(int)arg1 ;
-(void)_notifyDelegatesOfWifiChange:(int)arg1 ;
-(void)_handleNetworkChange:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(int)wifiState;
-(int)cellState;
-(NSSet *)IPv6Addresses;
-(NSSet *)IPv4Addresses;
@end

