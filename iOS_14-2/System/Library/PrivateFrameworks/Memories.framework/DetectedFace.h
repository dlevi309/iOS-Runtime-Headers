/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSNumber;

@interface DetectedFace : NSObject {

	int _trackID;
	int _frames;
	NSNumber* _size;
	NSNumber* _confidence;
	CGPoint _leftEye;
	CGPoint _rightEye;
	CGPoint _mouthCenter;
	CGPoint _faceCenter;
	CGRect _faceRect;
	CGRect _approximateFaceRect;

}

@property (nonatomic,retain) NSNumber * size;                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint leftEye;                         //@synthesize leftEye=_leftEye - In the implementation block
@property (assign,nonatomic) CGPoint rightEye;                        //@synthesize rightEye=_rightEye - In the implementation block
@property (assign,nonatomic) CGPoint mouthCenter;                     //@synthesize mouthCenter=_mouthCenter - In the implementation block
@property (assign,nonatomic) CGPoint faceCenter;                      //@synthesize faceCenter=_faceCenter - In the implementation block
@property (nonatomic,retain) NSNumber * confidence;                   //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) int trackID;                             //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) int frames;                              //@synthesize frames=_frames - In the implementation block
@property (assign,nonatomic) CGRect faceRect;                         //@synthesize faceRect=_faceRect - In the implementation block
@property (assign,nonatomic) CGRect approximateFaceRect;              //@synthesize approximateFaceRect=_approximateFaceRect - In the implementation block
-(NSNumber *)confidence;
-(CGRect)faceRect;
-(int)frames;
-(void)setFrames:(int)arg1 ;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(int)trackID;
-(CGPoint)leftEye;
-(id)description;
-(void)setConfidence:(NSNumber *)arg1 ;
-(CGPoint)rightEye;
-(void)setFaceRect:(CGRect)arg1 ;
-(void)setLeftEye:(CGPoint)arg1 ;
-(void)setRightEye:(CGPoint)arg1 ;
-(CGPoint)faceCenter;
-(void)setTrackID:(int)arg1 ;
-(void)setFaceCenter:(CGPoint)arg1 ;
-(void)setApproximateFaceRect:(CGRect)arg1 ;
-(CGRect)approximateFaceRect;
-(CGPoint)mouthCenter;
-(id)initWithFaceSize:(id)arg1 leftEye:(CGPoint)arg2 rightEye:(CGPoint)arg3 mouthCenter:(CGPoint)arg4 faceCenter:(CGPoint)arg5 confidence:(id)arg6 trackID:(int)arg7 frames:(int)arg8 ;
-(id)initWithFaceFeature:(id)arg1 withImageSize:(CGSize)arg2 ;
-(void)setMouthCenter:(CGPoint)arg1 ;
@end

