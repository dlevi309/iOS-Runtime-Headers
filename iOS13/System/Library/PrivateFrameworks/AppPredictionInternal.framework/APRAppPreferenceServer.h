/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/APRAppPreferenceInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSString;

@interface APRAppPreferenceServer : NSObject <NSXPCListenerDelegate, APRAppPreferenceInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)prewarmWithReply:(/*^block*/id)arg1 ;
-(void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendFeedbackForIntent:(id)arg1 aprResponse:(id)arg2 ;
@end

