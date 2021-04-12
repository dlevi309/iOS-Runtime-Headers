/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMMediaPlaybackAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMMutableMediaPlaybackAction : HMMediaPlaybackAction <NSCopying>

@property (nonatomic,copy) NSSet * mediaProfiles; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,retain) NSNumber * volume; 
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setVolume:(NSNumber *)arg1 ;
-(void)setMediaProfiles:(NSSet *)arg1 ;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
@end

