/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)index;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(double)maxTime;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSURL *)url;
-(id)description;
-(long long)markerType;
-(double)comparableTime;
-(id)initWithMarkerType:(long long)arg1 ;
-(BOOL)hasArtworkAtPlaybackTime;
-(id)urlTitleTrimmingCharacterSet;
-(void)setUrl:(NSURL *)arg1 ;
-(NSDictionary *)metadata;
-(double)duration;
-(NSString *)title;
@end

