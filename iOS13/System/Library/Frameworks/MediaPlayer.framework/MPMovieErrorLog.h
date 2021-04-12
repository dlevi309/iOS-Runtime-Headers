/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemErrorLog, NSData, NSArray;

@interface MPMovieErrorLog : NSObject <NSCopying> {

	AVPlayerItemErrorLog* _errorLog;

}

@property (nonatomic,readonly) NSData * extendedLogData; 
@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)events;
-(NSData *)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(id)_initWithAVItemErrorLog:(id)arg1 ;
@end

