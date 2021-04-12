/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)ephemeralitySchedule;
+(void)loadAllEventStreams;
+(id)eventStreamPropertiesForKBName:(id)arg1 ;
+(id)contentProviderPlistEventStreamsForPath:(id)arg1 ;
+(id)eventStreamForName:(id)arg1 ;
+(id)eventStreamPropertiesForName:(id)arg1 ;
+(id)eventStreamPropertiesForEventStream:(id)arg1 ;
+(id)rateLimiterForEventStreamName:(id)arg1 ;
+(id)privacyPolicyForEventStreamName:(id)arg1 ;
-(id)init;
-(NSDictionary *)allEventStreams;
-(BOOL)allStreamsLoaded;
-(void)setAllStreamsLoaded:(BOOL)arg1 ;
-(id)_eventStreamForName:(id)arg1 orKBName:(id)arg2 ;
-(NSDictionary *)allKBEventStreams;
-(void)setAllEventStreams:(NSDictionary *)arg1 ;
-(void)setAllKBEventStreams:(NSDictionary *)arg1 ;
@end

