/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, APSConnection, NSString;

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSMutableArray* _completionHandlers;
	APSConnection* _pushConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)_handleTimeout;
-(void)_invokeCompletionWithPushToken:(id)arg1 ;
-(void)fetchPushTokenWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

