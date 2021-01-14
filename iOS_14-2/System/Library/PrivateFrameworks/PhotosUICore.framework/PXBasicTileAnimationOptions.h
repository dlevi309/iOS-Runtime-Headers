/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXBasicTileAnimationOptions : NSObject <NSCopying> {

	BOOL _shouldNotifyTiles;
	BOOL _shouldSnapshotDynamicContents;
	double _delay;
	double _duration;
	long long _style;
	unsigned long long _flags;

}

@property (assign,nonatomic) double delay;                                    //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long style;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyTiles;                          //@synthesize shouldNotifyTiles=_shouldNotifyTiles - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapshotDynamicContents;              //@synthesize shouldSnapshotDynamicContents=_shouldSnapshotDynamicContents - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                        //@synthesize flags=_flags - In the implementation block
+(id)defaultAnimationOptions;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setDelay:(double)arg1 ;
-(unsigned long long)flags;
-(BOOL)shouldNotifyTiles;
-(void)setShouldNotifyTiles:(BOOL)arg1 ;
-(BOOL)shouldSnapshotDynamicContents;
-(void)setShouldSnapshotDynamicContents:(BOOL)arg1 ;
-(id)description;
-(double)delay;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
@end

