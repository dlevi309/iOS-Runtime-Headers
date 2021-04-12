/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDictionary;

@interface _CDEventStreams : NSObject {

	BOOL _allStreamsLoaded;
	NSDictionary* _allEventStreams;
	NSDictionary* _allKBEventStreams;

}

@property (assign,nonatomic) BOOL allStreamsLoaded;                           //@synthesize allStreamsLoaded=_allStreamsLoaded - In the implementation block
@property (nonatomic,readonly) NSDictionary * allEventStreams;                //@synthesize allEventStreams=_allEventStreams - In the implementation block
@property (nonatomic,readonly) NSDictionary * allKBEventStreams;              //@synthesize allKBEventStreams=_allKBEventStreams - In the implementation block
+(id)sharedInstance;
+(id)contentProviderPlistEventStreamsForPath:(id)arg1 ;
+(id)ephemeralitySchedule;
+(id)privacyPolicyForEventStreamName:(id)arg1 ;
+(id)eventStreamPropertiesForEventStream:(id)arg1 ;
+(void)loadAllEventStreams;
+(id)eventStreamForName:(id)arg1 ;
+(id)eventStreamPropertiesForKBName:(id)arg1 ;
+(id)rateLimiterForEventStreamName:(id)arg1 ;
+(id)eventStreamPropertiesForName:(id)arg1 ;
-(NSDictionary *)allEventStreams;
-(void)setAllKBEventStreams:(NSDictionary *)arg1 ;
-(id)init;
-(BOOL)allStreamsLoaded;
-(void)setAllEventStreams:(NSDictionary *)arg1 ;
-(void)setAllStreamsLoaded:(BOOL)arg1 ;
-(id)_eventStreamForName:(id)arg1 orKBName:(id)arg2 ;
-(NSDictionary *)allKBEventStreams;
@end

