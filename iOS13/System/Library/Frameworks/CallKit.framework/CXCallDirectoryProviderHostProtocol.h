/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol CXCallDirectoryProviderHostProtocol <NSObject>
@required
-(oneway void)isIncrementalLoadingAllowed:(/*^block*/id)arg1;
-(oneway void)addBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeBlockingEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeAllBlockingEntriesWithReply:(/*^block*/id)arg1;
-(oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeIdentificationEntriesWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)removeAllIdentificationEntriesWithReply:(/*^block*/id)arg1;
-(oneway void)completeRequestWithReply:(/*^block*/id)arg1;

@end

