/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorProtocol.h>

@protocol PCInterfaceUsabilityMonitorProtocol;
@class NSString, NSMapTable;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol> {

	id<PCInterfaceUsabilityMonitorProtocol> _internal;
	NSMapTable* _delegateMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) BOOL isInterfaceUsable; 
@property (nonatomic,readonly) BOOL isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) BOOL isPoorLinkQuality; 
@property (nonatomic,readonly) BOOL isBadLinkQuality; 
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (nonatomic,readonly) BOOL isNetworkingPowerExpensiveToUse; 
@property (nonatomic,readonly) int currentRAT; 
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (nonatomic,readonly) NSString * networkCode; 
+(id)sharedInstanceForIdentifier:(long long)arg1 ;
+(BOOL)isNetworkingPowerExpensiveToUse;
+(BOOL)isBadLinkQuality:(int)arg1 ;
+(id)stringForLinkQuality:(int)arg1 ;
+(BOOL)isPoorLinkQuality:(int)arg1 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg1 ;
-(int)linkQuality;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(CFStringRef)wwanInterfaceName;
-(BOOL)isInterfaceUsable;
-(BOOL)isInternetReachable;
-(NSString *)linkQualityString;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg1 ;
-(long long)interfaceIdentifier;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(BOOL)isBadLinkQuality;
-(BOOL)isRadioHot;
-(int)currentRAT;
-(BOOL)isLTEWithCDRX;
-(NSString *)networkCode;
-(id)initWithInterfaceIdentifier:(long long)arg1 ;
@end

