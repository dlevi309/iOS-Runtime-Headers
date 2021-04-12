/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/MiroMediaItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHAsset, MiroMetadataRange, NSDate, NSString;

@interface MiroAssetClusteringVideoSegment : NSObject <MiroMediaItem, NSCopying> {

	float _frameRate;
	PHAsset* _videoAsset;
	double _startTime;
	double _duration;
	MiroMetadataRange* _sourceRange;
	MiroMetadataRange* _trimRange;

}

@property (assign,nonatomic) float frameRate;                              //@synthesize frameRate=_frameRate - In the implementation block
@property (nonatomic,retain) PHAsset * videoAsset;                         //@synthesize videoAsset=_videoAsset - In the implementation block
@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,retain) MiroMetadataRange * sourceRange;              //@synthesize sourceRange=_sourceRange - In the implementation block
@property (nonatomic,retain) MiroMetadataRange * trimRange;                //@synthesize trimRange=_trimRange - In the implementation block
@property (nonatomic,readonly) double rangeScore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHAsset * asset; 
+(id)videoSegmentFromAsset:(id)arg1 starting:(double)arg2 duration:(double)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(NSDate *)creationDate;
-(PHAsset *)asset;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)localIdentifier;
-(PHAsset *)videoAsset;
-(void)setFrameRate:(float)arg1 ;
-(float)frameRate;
-(void)setVideoAsset:(PHAsset *)arg1 ;
-(MiroMetadataRange *)trimRange;
-(void)setTrimRange:(MiroMetadataRange *)arg1 ;
-(double)rangeScore;
-(id)rangeScoreExplanation;
-(void)setSourceRange:(MiroMetadataRange *)arg1 ;
-(MiroMetadataRange *)sourceRange;
@end

