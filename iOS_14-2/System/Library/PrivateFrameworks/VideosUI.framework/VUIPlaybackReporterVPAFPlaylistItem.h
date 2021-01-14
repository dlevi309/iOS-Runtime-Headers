/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/MTMediaPlaylistItem.h>

@class NSArray, NSString;

@interface VUIPlaybackReporterVPAFPlaylistItem : NSObject <MTMediaPlaylistItem> {

	unsigned long long _overallPosition;
	NSArray* _eventData;
	unsigned long long _duration;
	NSRange _timeRange;

}

@property (assign,nonatomic) unsigned long long overallPosition;                     //@synthesize overallPosition=_overallPosition - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                                    //@synthesize eventData=_eventData - In the implementation block
@property (assign,nonatomic) NSRange timeRange;                                      //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long startOverallPosition; 
@property (nonatomic,readonly) unsigned long long startPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setTimeRange:(NSRange)arg1 ;
-(NSRange)timeRange;
-(NSString *)description;
-(NSArray *)eventData;
-(void)setEventData:(NSArray *)arg1 ;
-(unsigned long long)duration;
-(unsigned long long)overallPosition;
-(id)initWithPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 eventData:(id)arg3 ;
-(void)setOverallPosition:(unsigned long long)arg1 ;
@end

