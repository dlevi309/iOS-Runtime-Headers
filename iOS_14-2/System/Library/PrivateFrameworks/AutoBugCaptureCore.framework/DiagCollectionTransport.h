/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol OS_dispatch_queue;
@class NSXPCListener, DiagCollectionServiceImpl, NSObject;

@interface DiagCollectionTransport : NSObject {

	NSXPCListener* listener;
	DiagCollectionServiceImpl* service;
	NSObject*<OS_dispatch_queue> transport_queue;

}
-(void)shutdown;
-(id)init;
-(void)setListeningPort:(const char*)arg1 ;
-(void)dealloc;
@end

