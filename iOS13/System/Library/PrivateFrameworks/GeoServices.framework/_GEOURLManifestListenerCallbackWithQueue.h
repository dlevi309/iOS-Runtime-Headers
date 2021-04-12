/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/_GEOURLManifestListenerCallback.h>

@protocol OS_dispatch_queue, OS_voucher;
@class NSObject, NSString;

@interface _GEOURLManifestListenerCallbackWithQueue : NSObject <_GEOURLManifestListenerCallback> {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_voucher> _voucher;
	unsigned _qos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)performHandler:(BOOL)arg1 ;
@end

