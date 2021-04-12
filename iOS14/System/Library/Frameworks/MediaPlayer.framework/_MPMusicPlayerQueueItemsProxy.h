/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSArray.h>

@class MPMusicPlayerApplicationController;

@interface _MPMusicPlayerQueueItemsProxy : NSArray {

	MPMusicPlayerApplicationController* _controller;

}

@property (nonatomic,__weak,readonly) MPMusicPlayerApplicationController * controller;              //@synthesize controller=_controller - In the implementation block
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithController:(id)arg1 ;
-(MPMusicPlayerApplicationController *)controller;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

