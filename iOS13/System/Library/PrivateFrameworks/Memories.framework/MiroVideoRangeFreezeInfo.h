/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo {

	BOOL _added;
	BOOL _removed;
	BOOL _used;
	BOOL _trimmed;
	BOOL _userModified;
	float _normalGain;
	float _dimmedGain;
	unsigned long long _mute;
	double _start;
	double _duration;

}

@property (assign,nonatomic) BOOL added;                           //@synthesize added=_added - In the implementation block
@property (assign,nonatomic) BOOL removed;                         //@synthesize removed=_removed - In the implementation block
@property (assign,nonatomic) BOOL used;                            //@synthesize used=_used - In the implementation block
@property (assign,nonatomic) BOOL trimmed;                         //@synthesize trimmed=_trimmed - In the implementation block
@property (assign,nonatomic) unsigned long long mute;              //@synthesize mute=_mute - In the implementation block
@property (nonatomic,readonly) float gain; 
@property (assign,nonatomic) float normalGain;                     //@synthesize normalGain=_normalGain - In the implementation block
@property (assign,nonatomic) float dimmedGain;                     //@synthesize dimmedGain=_dimmedGain - In the implementation block
@property (assign,nonatomic) double start;                         //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL userModified;                    //@synthesize userModified=_userModified - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(double)start;
-(id)dataRepresentation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStart:(double)arg1 ;
-(float)gain;
-(BOOL)used;
-(void)setUsed:(BOOL)arg1 ;
-(void)setAdded:(BOOL)arg1 ;
-(BOOL)added;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)removed;
-(BOOL)trimmed;
-(unsigned long long)mute;
-(void)setMute:(unsigned long long)arg1 ;
-(BOOL)userModified;
-(void)setTrimmed:(BOOL)arg1 ;
-(float)normalGain;
-(void)setNormalGain:(float)arg1 ;
-(float)dimmedGain;
-(void)setDimmedGain:(float)arg1 ;
-(void)setUserModified:(BOOL)arg1 ;
@end

