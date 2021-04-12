/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setNumberOfRequests:(unsigned long long)arg1 ;
-(void)setInvalidationTokenByTimeLocationIdentifier:(NSDictionary *)arg1 ;
-(void)setResolvedPublicEventsByTimeLocationIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)resolvedPublicEventsByTimeLocationIdentifier;
-(NSDictionary *)invalidationTokenByTimeLocationIdentifier;
-(unsigned long long)numberOfRequests;
@end

