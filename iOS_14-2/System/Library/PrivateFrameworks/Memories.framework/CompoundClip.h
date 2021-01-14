/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KenBurnsClip.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class KenBurnsClip, NSString;

@interface CompoundClip : KenBurnsClip <CompoundClipInformation> {

	double _minimumPhotoDuration;
	double _idealPhotoDuration;
	double _maximumPhotoDuration;
	KenBurnsClip* _kenBurnsClip;

}

@property (nonatomic,retain) KenBurnsClip * kenBurnsClip;              //@synthesize kenBurnsClip=_kenBurnsClip - In the implementation block
@property (assign,nonatomic) double minimumPhotoDuration;              //@synthesize minimumPhotoDuration=_minimumPhotoDuration - In the implementation block
@property (assign,nonatomic) double idealPhotoDuration;                //@synthesize idealPhotoDuration=_idealPhotoDuration - In the implementation block
@property (assign,nonatomic) double maximumPhotoDuration;              //@synthesize maximumPhotoDuration=_maximumPhotoDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)containedClips;
-(KenBurnsClip *)kenBurnsClip;
-(void)setMinimumPhotoDuration:(double)arg1 ;
-(void)setIdealPhotoDuration:(double)arg1 ;
-(void)setMaximumPhotoDuration:(double)arg1 ;
-(id)initWithKenBurnsClip:(id)arg1 ;
-(void)turnOffKenBurnsForClips:(id)arg1 ;
-(id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 transitionEffectProperties:(id)arg3 betweenClips:(id)arg4 ;
-(void)setKenBurnsClip:(KenBurnsClip *)arg1 ;
-(void)takePropertiesFromKenBurnsClip:(id)arg1 ;
-(double)minimumPhotoDuration;
-(double)idealPhotoDuration;
-(BOOL)expandsEditList;
-(id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 betweenClips:(id)arg3 ;
-(double)maximumPhotoDuration;
@end

