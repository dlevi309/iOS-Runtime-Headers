/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSDictionary;

@interface CLSPublicEventCacheCreatorResult : NSObject {

	NSDictionary* _resolvedPublicEventsByTimeLocationIdentifier;
	NSDictionary* _invalidationTokenByTimeLocationIdentifier;
	unsigned long long _numberOfRequests;

}

@property (nonatomic,retain) NSDictionary * resolvedPublicEventsByTimeLocationIdentifier;              //@synthesize resolvedPublicEventsByTimeLocationIdentifier=_resolvedPublicEventsByTimeLocationIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * invalidationTokenByTimeLocationIdentifier;                 //@synthesize invalidationTokenByTimeLocationIdentifier=_invalidationTokenByTimeLocationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRequests;                                      //@synthesize numberOfRequests=_numberOfRequests - In the implementation block
-(id)init;
-(unsigned long long)numberOfRequests;
-(void)setNumberOfRequests:(unsigned long long)arg1 ;
-(void)setInvalidationTokenByTimeLocationIdentifier:(NSDictionary *)arg1 ;
-(void)setResolvedPublicEventsByTimeLocationIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)resolvedPublicEventsByTimeLocationIdentifier;
-(NSDictionary *)invalidationTokenByTimeLocationIdentifier;
@end

