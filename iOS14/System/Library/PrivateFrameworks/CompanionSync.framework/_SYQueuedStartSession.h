/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class SYStartSyncSession;

@interface _SYQueuedStartSession : NSObject {

	SYStartSyncSession* _request;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) SYStartSyncSession * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id completion;                             //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(SYStartSyncSession *)request;
-(id)initWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

