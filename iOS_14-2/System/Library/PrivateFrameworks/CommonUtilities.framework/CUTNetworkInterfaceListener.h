/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)wifiState;
-(NSSet *)IPv6Addresses;
-(NSSet *)IPv4Addresses;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)init;
-(id)allocWithZone:(NSZone*)arg1 ;
-(int)cellState;
-(void)_notifyDelegatesOfAddressChange:(id)arg1 isIPv6:(BOOL)arg2 ;
-(void)_notifyDelegatesOfCellChange:(int)arg1 ;
-(void)_notifyDelegatesOfWifiChange:(int)arg1 ;
-(void)_handleNetworkChange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

