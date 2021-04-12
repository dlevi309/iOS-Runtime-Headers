/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand {

	NSArray* _preferredIntervals;

}

@property (nonatomic,copy) NSArray * preferredIntervals;              //@synthesize preferredIntervals=_preferredIntervals - In the implementation block
-(void)setPreferredIntervals:(NSArray *)arg1 ;
-(NSArray *)preferredIntervals;
-(id)newCommandEventWithInterval:(double)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
@end

