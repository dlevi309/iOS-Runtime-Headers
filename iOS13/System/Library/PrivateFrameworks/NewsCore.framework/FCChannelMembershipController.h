/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject {

	FCChannelMembershipRecordSource* _recordSource;

}

@property (nonatomic,readonly) FCChannelMembershipRecordSource * recordSource;              //@synthesize recordSource=_recordSource - In the implementation block
-(FCChannelMembershipRecordSource *)recordSource;
-(id)channelMembershipsFromHeldRecords:(id)arg1 ;
-(id)initWithChannelMembershipRecordSource:(id)arg1 ;
-(void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)cachedChannelMembershipsForIDs:(id)arg1 ;
@end

