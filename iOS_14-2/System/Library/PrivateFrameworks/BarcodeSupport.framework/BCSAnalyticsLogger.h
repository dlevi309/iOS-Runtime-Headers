/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BCSAnalyticsLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedLogger;
-(id)_initWithQueue:(id)arg1 ;
-(void)didScanNFCTagOfType:(long long)arg1 ;
-(void)_sendEventLazyWithName:(id)arg1 payload:(id)arg2 ;
-(void)didActivateNFCReader;
@end

