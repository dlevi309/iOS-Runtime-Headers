/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSArray.h>

@class MPMusicPlayerApplicationController;

@interface _MPMusicPlayerQueueItemsProxy : NSArray {

	MPMusicPlayerApplicationController* _controller;

}

@property (nonatomic,__weak,readonly) MPMusicPlayerApplicationController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(MPMusicPlayerApplicationController *)controller;
-(id)initWithController:(id)arg1 ;
@end

