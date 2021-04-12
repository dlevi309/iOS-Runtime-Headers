/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTraffic/ATSessionTask.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue;
@class NSString, ATConcreteMessageLink, NSObject;

@interface ATDeviceSyncSessionTask : ATSessionTask <ATMessageLinkRequestHandler> {

	NSString* _dataClass;
	ATConcreteMessageLink* _messageLink;
	NSString* _linkIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * dataClass;                             //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,readonly) ATConcreteMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (nonatomic,readonly) NSString * linkIdentifier;                        //@synthesize linkIdentifier=_linkIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)dataClass;
-(ATConcreteMessageLink *)messageLink;
-(NSString *)linkIdentifier;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(void)updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2 ;
@end

