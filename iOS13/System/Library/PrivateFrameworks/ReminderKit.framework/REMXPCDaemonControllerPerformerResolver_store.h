/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMXPCDaemonControllerPerformerResolver.h>

@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_store : REMXPCDaemonControllerPerformerResolver {

	REMStoreContainerToken* _storeContainerToken;

}

@property (nonatomic,readonly) REMStoreContainerToken * storeContainerToken;              //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
-(id)name;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(REMStoreContainerToken *)storeContainerToken;
-(void)resolveWithDaemon:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

