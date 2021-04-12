/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/CompoundClip.h>
#import <libobjc.A.dylib/KonaClipMiroAutoEditAdditions.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class IrisClipStyle, NSArray, IrisMovieClip, NSString;

@interface IrisClip : CompoundClip <KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation> {

	unsigned long long _irisStyle;
	IrisClipStyle* _irisClipStyle;
	NSArray* _containedClips;
	IrisMovieClip* _introClip;
	IrisMovieClip* _outroClip;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IrisClipStyle * irisClipStyle;              //@synthesize irisClipStyle=_irisClipStyle - In the implementation block
@property (nonatomic,retain) NSArray * containedClips;                   //@synthesize containedClips=_containedClips - In the implementation block
@property (nonatomic,retain) IrisMovieClip * introClip;                  //@synthesize introClip=_introClip - In the implementation block
@property (nonatomic,retain) IrisMovieClip * outroClip;                  //@synthesize outroClip=_outroClip - In the implementation block
@property (assign,nonatomic) unsigned long long irisStyle;               //@synthesize irisStyle=_irisStyle - In the implementation block
@property (nonatomic,readonly) double minimumDuration; 
@property (nonatomic,readonly) double idealDuration; 
@property (nonatomic,readonly) double maximumDuration; 
@property (nonatomic,readonly) BOOL introClipAvailable; 
@property (nonatomic,readonly) BOOL outroClipAvailable; 
+(id)allowedTransitions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maximumDuration;
-(void)setAudioVolume:(float)arg1 ;
-(int)maxDuration;
-(double)minimumDuration;
-(NSArray *)containedClips;
-(BOOL)isIris;
-(unsigned long long)irisStyle;
-(double)autoEditLongestDurationWithBlueprint:(id)arg1 ;
-(double)idealDuration;
-(void)setAltAspect:(double)arg1 ;
-(void)setIrisStyle:(unsigned long long)arg1 ;
-(void)setContainedClips:(NSArray *)arg1 ;
-(void)setMinimumPhotoDuration:(double)arg1 ;
-(void)setIdealPhotoDuration:(double)arg1 ;
-(void)setMaximumPhotoDuration:(double)arg1 ;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)setIntroClip:(IrisMovieClip *)arg1 ;
-(void)setOutroClip:(IrisMovieClip *)arg1 ;
-(IrisClipStyle *)irisClipStyle;
-(void)setIrisClipStyle:(IrisClipStyle *)arg1 ;
-(NSRange)preferredInTransitionDurationRange;
-(NSRange)preferredOutTransitionDurationRange;
-(BOOL)introClipAvailable;
-(BOOL)outroClipAvailable;
-(IrisMovieClip *)introClip;
-(IrisMovieClip *)outroClip;
@end

