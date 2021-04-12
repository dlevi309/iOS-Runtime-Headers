/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DAUserNotificationInfo : NSObject {

	NSString* _groupIdentifier;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,copy) NSString * groupIdentifier;                                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

