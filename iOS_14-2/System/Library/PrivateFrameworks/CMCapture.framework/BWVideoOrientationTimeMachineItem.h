/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@interface BWVideoOrientationTimeMachineItem : NSObject {

	short _exifOrientation;
	double _ptsSeconds;

}

@property (assign,nonatomic) double ptsSeconds;                  //@synthesize ptsSeconds=_ptsSeconds - In the implementation block
@property (assign,nonatomic) short exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
-(void)setExifOrientation:(short)arg1 ;
-(id)description;
-(short)exifOrientation;
-(id)initWithPTSSeconds:(double)arg1 exifOrientation:(short)arg2 ;
-(double)ptsSeconds;
-(void)setPtsSeconds:(double)arg1 ;
@end

