/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(SCDynamicStoreRef)store;
-(void)setStore:(SCDynamicStoreRef)arg1 ;
-(void)_clearIPCache;
-(BOOL)_listenForChanges;
-(int)linkQualityValueForInterface:(id)arg1 ;
-(int)linkQualityValueForInterfaceType:(unsigned long long)arg1 ;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(NSArray *)myIPAddresses;
-(NSString *)myGatewayAddress;
-(NSString *)myIPAddress;
-(SCDynamicStoreRef)getDynamicStore;
-(unsigned long long)linkQualityForInterfaceType:(unsigned long long)arg1 ;
-(BOOL)isNetworkUp;
-(BOOL)isPrimaryCellular;
-(id)primaryInterfaceName;
-(NSString *)myIP;
-(void)setMyIP:(NSString *)arg1 ;
-(NSArray *)myIPs;
-(void)setMyIPs:(NSArray *)arg1 ;
-(IMConnectionMonitor *)connectionMonitor;
-(void)setConnectionMonitor:(IMConnectionMonitor *)arg1 ;
-(BOOL)lastPostedNetworkUp;
-(void)setLastPostedNetworkUp:(BOOL)arg1 ;
@end

