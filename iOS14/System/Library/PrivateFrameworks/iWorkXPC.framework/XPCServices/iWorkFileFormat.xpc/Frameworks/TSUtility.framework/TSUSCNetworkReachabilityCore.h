/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUNetworkReachabilityCore.h>

@class NSString;

@interface TSUSCNetworkReachabilityCore : NSObject <TSUNetworkReachabilityCore> {

	SCNetworkReachabilityRef _reachabilityRef;
	/*^block*/id _notifyBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithReachabilityRef:(const SCNetworkReachabilityRef)arg1 ;
-(BOOL)getReachabilityFlags:(out unsigned*)arg1 ;
-(BOOL)startNotifyingWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)stopNotifying;
@end

