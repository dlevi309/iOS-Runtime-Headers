/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {

	AVPlayerItemErrorLogEvent* _event;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) long long errorStatusCode; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) NSString * errorComment; 
-(NSString *)errorDomain;
-(NSString *)URI;
-(NSString *)errorComment;
-(id)_initWithAVItemErrorLogEvent:(id)arg1 ;
-(NSString *)serverAddress;
-(NSString *)playbackSessionID;
-(long long)errorStatusCode;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

