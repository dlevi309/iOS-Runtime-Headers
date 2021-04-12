/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface BLTReachabilityManager : NSObject <PCInterfaceMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	BOOL _internetReachable;

}

@property (getter=isInternetReachable) BOOL internetReachable;              //@synthesize internetReachable=_internetReachable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isInternetReachable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg1 ;
-(void)setInternetReachable:(BOOL)arg1 ;
@end

