/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFActionableNotificationManager : NSObject {

	NSMutableDictionary* _handlersForIdentifiers;
	NSObject*<OS_dispatch_queue> _handlersQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * handlersForIdentifiers;              //@synthesize handlersForIdentifiers=_handlersForIdentifiers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> handlersQueue;                //@synthesize handlersQueue=_handlersQueue - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)addNotificationRequestWithContentBody:(id)arg1 actions:(id)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleNotificationResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)handlersForIdentifiers;
-(NSObject*<OS_dispatch_queue>)handlersQueue;
@end

