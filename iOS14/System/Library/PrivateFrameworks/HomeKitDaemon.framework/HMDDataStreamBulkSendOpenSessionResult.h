/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDDataStreamBulkSendSession;
@class NSDictionary;

@interface HMDDataStreamBulkSendOpenSessionResult : NSObject {

	id<HMDDataStreamBulkSendSession> _session;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) id<HMDDataStreamBulkSendSession> session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                                //@synthesize payload=_payload - In the implementation block
-(id<HMDDataStreamBulkSendSession>)session;
-(NSDictionary *)payload;
-(id)attributeDescriptions;
-(id)initWithSession:(id)arg1 payload:(id)arg2 ;
@end

