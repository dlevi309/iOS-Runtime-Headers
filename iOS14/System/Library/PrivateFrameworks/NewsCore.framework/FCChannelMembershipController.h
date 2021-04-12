/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject {

	FCChannelMembershipRecordSource* _recordSource;

}

@property (nonatomic,readonly) FCChannelMembershipRecordSource * recordSource;              //@synthesize recordSource=_recordSource - In the implementation block
-(FCChannelMembershipRecordSource *)recordSource;
-(void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)cachedChannelMembershipsForIDs:(id)arg1 ;
-(id)initWithChannelMembershipRecordSource:(id)arg1 ;
-(id)channelMembershipsFromHeldRecords:(id)arg1 ;
@end

