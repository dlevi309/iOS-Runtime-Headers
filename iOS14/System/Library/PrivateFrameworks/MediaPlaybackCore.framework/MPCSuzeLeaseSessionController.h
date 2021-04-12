/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/ICSuzeLeaseSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface MPCSuzeLeaseSessionController : NSObject <ICSuzeLeaseSessionDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMapTable* _leaseIDToLeaseSessionInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)suzeLeaseSession:(id)arg1 leaseRenewalDidFailWithError:(id)arg2 ;
-(id)_init;
-(void)stopLeaseSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startLeaseSessionWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

