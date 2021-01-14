/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerDiscovery.h>

@protocol HAP2AccessoryServerDiscoveryDelegate, OS_dispatch_queue;
@class CUBonjourBrowser, NSString, NSObject, HAP2PropertyLock;

@interface HAP2AccessoryServerDiscoveryBonjourLegacy : HAP2LoggingObject <HAP2AccessoryServerDiscovery> {

	BOOL _discovering;
	id<HAP2AccessoryServerDiscoveryDelegate> _delegate;
	CUBonjourBrowser* _browser;
	NSString* _type;
	NSString* _domain;
	NSObject*<OS_dispatch_queue> _workQueue;
	HAP2PropertyLock* _propertyLock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;                                     //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,getter=isDiscovering,nonatomic) BOOL discovering;                                 //@synthesize discovering=_discovering - In the implementation block
@property (nonatomic,readonly) CUBonjourBrowser * browser;                                          //@synthesize browser=_browser - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (nonatomic,readonly) NSString * type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * domain;                                                   //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDiscoveryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)stopDiscovering;
-(void)reconfirmAccessory:(id)arg1 ;
-(id)init;
-(CUBonjourBrowser *)browser;
-(id<HAP2AccessoryServerDiscoveryDelegate>)delegate;
-(void)_startDiscovering;
-(id)initWithLocalDomainAndServiceType:(id)arg1 ;
-(void)_stopDiscovering;
-(void)_handleBrowserStopped:(id)arg1 ;
-(void)_reconfirmAccessory:(id)arg1 ;
-(NSString *)domain;
-(void)_stopBrowser;
-(void)setDelegate:(id<HAP2AccessoryServerDiscoveryDelegate>)arg1 ;
-(id)initWithServiceType:(id)arg1 domain:(id)arg2 ;
-(void)_handleDeviceLost:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)isDiscovering;
-(NSString *)type;
-(HAP2PropertyLock *)propertyLock;
-(void)setDiscovering:(BOOL)arg1 ;
-(void)setBrowser:(CUBonjourBrowser *)arg1 ;
-(void)_handleDeviceFoundOrChanged:(id)arg1 ;
-(void)_startBrowser;
-(void)startDiscovering;
-(void)dealloc;
@end

