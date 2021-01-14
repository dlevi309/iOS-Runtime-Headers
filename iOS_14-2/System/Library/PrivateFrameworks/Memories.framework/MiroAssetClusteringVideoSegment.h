/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) PHAsset * asset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)videoSegmentFromAsset:(id)arg1 starting:(double)arg2 duration:(double)arg3 ;
-(id)localIdentifier;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(PHAsset *)asset;
-(void)setStartTime:(double)arg1 ;
-(float)frameRate;
-(NSString *)description;
-(NSDate *)creationDate;
-(void)setFrameRate:(float)arg1 ;
-(unsigned long long)hash;
-(void)setVideoAsset:(PHAsset *)arg1 ;
-(MiroMetadataRange *)trimRange;
-(double)duration;
-(PHAsset *)videoAsset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(MiroMetadataRange *)sourceRange;
-(void)setSourceRange:(MiroMetadataRange *)arg1 ;
-(double)rangeScore;
-(id)rangeScoreExplanation;
-(void)setTrimRange:(MiroMetadataRange *)arg1 ;
@end

