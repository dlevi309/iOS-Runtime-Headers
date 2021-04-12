/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSNumber, NSString, NSDictionary;

@interface HMDDataStreamPendingRequest : NSObject {

	NSNumber* _identifier;
	NSString* _topic;
	NSString* _protocol;
	/*^block*/id _callback;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) NSNumber * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * topic;                    //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) NSString * protocol;                 //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) id callback;                         //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)identifier;
-(NSString *)protocol;
-(id)callback;
-(NSString *)topic;
-(NSDictionary *)payload;
-(id)initWithIdentifier:(id)arg1 protocol:(id)arg2 topic:(id)arg3 payload:(id)arg4 callback:(/*^block*/id)arg5 ;
-(BOOL)matchesResponseHeader:(id)arg1 ;
@end

