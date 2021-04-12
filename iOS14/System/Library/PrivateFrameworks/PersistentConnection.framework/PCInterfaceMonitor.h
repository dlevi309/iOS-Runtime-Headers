/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isNetworkingPowerExpensiveToUse;
+(id)sharedInstanceForIdentifier:(long long)arg1 ;
+(id)stringForLinkQuality:(int)arg1 ;
+(BOOL)isPoorLinkQuality:(int)arg1 ;
+(BOOL)isBadLinkQuality:(int)arg1 ;
-(NSString *)networkCode;
-(long long)interfaceIdentifier;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceUsable;
-(CFStringRef)wwanInterfaceName;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(BOOL)isLTEWithCDRX;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(BOOL)isBadLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(NSString *)linkQualityString;
-(void)removeDelegate:(id)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg1 ;
-(int)linkQuality;
-(id)initWithInterfaceIdentifier:(long long)arg1 ;
-(BOOL)isInternetReachable;
-(BOOL)isRadioHot;
-(int)currentRAT;
-(void)dealloc;
@end

