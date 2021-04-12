/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPHuman : NSObject {

	float _confidence;
	unsigned long long _flags;
	CGRect _bounds;

}

@property (assign) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (assign) CGRect bounds;                         //@synthesize bounds=_bounds - In the implementation block
@property (assign) float confidence;                      //@synthesize confidence=_confidence - In the implementation block
+(unsigned long long)flagsFromKeypoints:(id)arg1 withMinConfidence:(float)arg2 ;
-(float)confidence;
-(CGRect)bounds;
-(id)init;
-(unsigned long long)flags;
-(void)setBounds:(CGRect)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
@end

