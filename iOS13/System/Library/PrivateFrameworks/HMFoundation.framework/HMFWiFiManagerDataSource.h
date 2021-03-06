/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFWiFiManagerDataSource.h>
@class NSString;


@protocol HMFWiFiManagerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<HMFWiFiManagerDataSourceDelegate> delegate; 
@property (assign,setter=setWoWAsserted:,getter=isWoWAsserted,nonatomic) BOOL wowAsserted; 
@property (nonatomic,copy,readonly) NSString * currentNetworkSSID; 
@required
+(id)MACAddressString;
-(id<HMFWiFiManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setWoWAsserted:(BOOL)arg1;
-(void)performBlockAfterWoWReassertionDelay:(/*^block*/id)arg1;
-(NSString *)currentNetworkSSID;
-(BOOL)isWoWAsserted;

@end


@protocol HMFWiFiManagerDataSourceDelegate, OS_dispatch_queue;
@class NSString, NSObject;

@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource> {

	id<HMFWiFiManagerDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	WiFiManagerClientRef _wifiClientReference;
	WiFiDeviceClientRef _wifiDeviceReference;
	WiFiNetworkRef _currentNetwork;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) WiFiManagerClientRef wifiClientReference;                                //@synthesize wifiClientReference=_wifiClientReference - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef wifiDeviceReference;                                   //@synthesize wifiDeviceReference=_wifiDeviceReference - In the implementation block
@property (assign,nonatomic) WiFiNetworkRef currentNetwork;                                             //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HMFWiFiManagerDataSourceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setWoWAsserted:,getter=isWoWAsserted,nonatomic) BOOL wowAsserted; 
@property (nonatomic,copy,readonly) NSString * currentNetworkSSID; 
+(id)MACAddressString;
-(void)dealloc;
-(id<HMFWiFiManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HMFWiFiManagerDataSourceDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(void)_setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(WiFiNetworkRef)currentNetwork;
-(id)initWithWorkQueue:(id)arg1 ;
-(void)setWoWAsserted:(BOOL)arg1 ;
-(void)performBlockAfterWoWReassertionDelay:(/*^block*/id)arg1 ;
-(NSString *)currentNetworkSSID;
-(void)startWithWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(WiFiManagerClientRef)wifiClientReference;
-(WiFiDeviceClientRef)wifiDeviceReference;
-(void)setWifiDeviceReference:(WiFiDeviceClientRef)arg1 ;
-(BOOL)isWoWAsserted;
-(void)handleWiFiLinkChangedWithEventDictionary:(id)arg1 ;
@end

