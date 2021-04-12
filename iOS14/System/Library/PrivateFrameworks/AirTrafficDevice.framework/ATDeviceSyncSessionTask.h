/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTraffic/ATSessionTask.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue;
@class ATConcreteMessageLink, NSString, NSObject;

@interface ATDeviceSyncSessionTask : ATSessionTask <ATMessageLinkRequestHandler> {

	ATConcreteMessageLink* _messageLink;
	NSString* _linkIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSString * dataClass; 
@property (nonatomic,readonly) ATConcreteMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (nonatomic,readonly) NSString * linkIdentifier;                        //@synthesize linkIdentifier=_linkIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ATConcreteMessageLink *)messageLink;
-(NSString *)linkIdentifier;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(void)updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2 ;
@end

