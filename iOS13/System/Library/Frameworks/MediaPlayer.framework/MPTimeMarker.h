/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSURL, NSDictionary;

@interface MPTimeMarker : NSObject {

	double _duration;
	unsigned long long _index;
	double _time;
	NSString* _title;
	NSURL* _url;
	long long _markerType;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) double comparableTime; 
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkAtPlaybackTime; 
@property (assign,nonatomic) double time;                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double maxTime; 
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long markerType;                       //@synthesize markerType=_markerType - In the implementation block
-(id)description;
-(unsigned long long)index;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(double)time;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setTime:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)maxTime;
-(id)initWithMarkerType:(long long)arg1 ;
-(double)comparableTime;
-(BOOL)hasArtworkAtPlaybackTime;
-(id)urlTitleTrimmingCharacterSet;
-(long long)markerType;
@end

