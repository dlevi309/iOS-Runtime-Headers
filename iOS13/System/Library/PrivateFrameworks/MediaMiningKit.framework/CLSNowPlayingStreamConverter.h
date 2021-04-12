/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@interface CLSNowPlayingStreamConverter : NSObject {

	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(unsigned long long)defaultOptions;
+(id)recognizedMusicSources;
-(id)init;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)eventFromDuetKnoweledgeEvent:(id)arg1 ;
-(id)eventsFromDuetKnowledgeEvents:(id)arg1 ;
-(BOOL)_canUseEvent:(id)arg1 ;
@end

