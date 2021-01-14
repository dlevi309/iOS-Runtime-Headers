/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg1 ;
-(id)init;
-(BOOL)isInternetReachable;
-(void)setInternetReachable:(BOOL)arg1 ;
@end

