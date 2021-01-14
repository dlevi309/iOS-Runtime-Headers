/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMConnectionMonitorDelegate.h>

@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {

	BOOL _lastPostedNetworkUp;
	SCDynamicStoreRef _store;
	NSString* _myIP;
	NSArray* _myIPs;
	IMConnectionMonitor* _connectionMonitor;

}

@property (assign,nonatomic) SCDynamicStoreRef store;                              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL lastPostedNetworkUp;                             //@synthesize lastPostedNetworkUp=_lastPostedNetworkUp - In the implementation block
@property (nonatomic,retain) IMConnectionMonitor * connectionMonitor;              //@synthesize connectionMonitor=_connectionMonitor - In the implementation block
@property (nonatomic,retain) NSString * myIP;                                      //@synthesize myIP=_myIP - In the implementation block
@property (nonatomic,retain) NSArray * myIPs;                                      //@synthesize myIPs=_myIPs - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkUp; 
@property (nonatomic,readonly) NSString * myGatewayAddress; 
@property (nonatomic,readonly) NSString * myIPAddress; 
@property (nonatomic,readonly) NSArray * myIPAddresses; 
@property (nonatomic,readonly) SCDynamicStoreRef getDynamicStore; 
+(id)sharedInstance;
+(BOOL)enableNotifications;
+(void)disableNotifications;
-(IMConnectionMonitor *)connectionMonitor;
-(NSString *)myGatewayAddress;
-(BOOL)_listenForChanges;
-(void)setStore:(SCDynamicStoreRef)arg1 ;
-(id)init;
-(SCDynamicStoreRef)store;
-(void)setMyIP:(NSString *)arg1 ;
-(id)primaryInterfaceName;
-(unsigned long long)linkQualityForInterfaceType:(unsigned long long)arg1 ;
-(void)setMyIPs:(NSArray *)arg1 ;
-(void)_clearIPCache;
-(SCDynamicStoreRef)getDynamicStore;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(BOOL)isPrimaryCellular;
-(void)systemWillSleep;
-(NSString *)myIPAddress;
-(void)systemDidWake;
-(NSArray *)myIPs;
-(NSArray *)myIPAddresses;
-(int)linkQualityValueForInterfaceType:(unsigned long long)arg1 ;
-(BOOL)lastPostedNetworkUp;
-(NSString *)myIP;
-(void)setLastPostedNetworkUp:(BOOL)arg1 ;
-(void)setConnectionMonitor:(IMConnectionMonitor *)arg1 ;
-(BOOL)isNetworkUp;
-(int)linkQualityValueForInterface:(id)arg1 ;
-(void)dealloc;
@end

