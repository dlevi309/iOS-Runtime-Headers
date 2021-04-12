/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMXPCDaemonControllerPerformerResolver.h>

@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_changeTracking : REMXPCDaemonControllerPerformerResolver {

	REMStoreContainerToken* _storeContainerToken;

}

@property (nonatomic,readonly) REMStoreContainerToken * storeContainerToken;              //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
-(id)name;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(void)resolveWithDaemon:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(REMStoreContainerToken *)storeContainerToken;
@end

