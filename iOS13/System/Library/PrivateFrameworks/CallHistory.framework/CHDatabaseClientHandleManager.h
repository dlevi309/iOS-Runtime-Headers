/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBClientHandle;

@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable {

	CallHistoryDBClientHandle* _databaseClientHandle;

}

@property (nonatomic,__weak,readonly) CallHistoryDBClientHandle * databaseClientHandle;              //@synthesize databaseClientHandle=_databaseClientHandle - In the implementation block
+(id)sharedInstance;
-(id)init;
-(CallHistoryDBClientHandle *)databaseClientHandle;
@end

