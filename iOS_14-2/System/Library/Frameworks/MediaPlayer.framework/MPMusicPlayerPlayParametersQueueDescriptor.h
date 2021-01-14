/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {

	NSArray* _playParametersQueue;
	MPMusicPlayerPlayParameters* _startItemPlayParameters;

}

@property (nonatomic,copy) NSArray * playParametersQueue;                                        //@synthesize playParametersQueue=_playParametersQueue - In the implementation block
@property (nonatomic,retain) MPMusicPlayerPlayParameters * startItemPlayParameters;              //@synthesize startItemPlayParameters=_startItemPlayParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithPlayParametersQueue:(id)arg1 ;
-(void)setPlayParametersQueue:(NSArray *)arg1 ;
-(void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(NSArray *)playParametersQueue;
-(MPMusicPlayerPlayParameters *)startItemPlayParameters;
-(void)setStartItemPlayParameters:(MPMusicPlayerPlayParameters *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

