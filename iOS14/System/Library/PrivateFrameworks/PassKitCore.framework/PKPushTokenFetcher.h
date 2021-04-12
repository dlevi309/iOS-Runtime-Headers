/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)init;
-(void)_invokeCompletionWithPushToken:(id)arg1 ;
-(void)fetchPushTokenWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleTimeout;
-(void)dealloc;
@end

