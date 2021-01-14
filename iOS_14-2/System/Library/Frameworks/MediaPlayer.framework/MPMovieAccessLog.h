/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLog, NSData, NSArray;

@interface MPMovieAccessLog : NSObject <NSCopying> {

	AVPlayerItemAccessLog* _accessLog;

}

@property (nonatomic,readonly) NSData * extendedLogData; 
@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(NSData *)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(id)_initWithAVItemAccessLog:(id)arg1 ;
-(NSArray *)events;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

