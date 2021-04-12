/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class SYStartSyncSession;

@interface _SYQueuedStartSession : NSObject {

	SYStartSyncSession* _request;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) SYStartSyncSession * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id completion;                             //@synthesize completion=_completion - In the implementation block
-(SYStartSyncSession *)request;
-(id)completion;
-(id)initWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

