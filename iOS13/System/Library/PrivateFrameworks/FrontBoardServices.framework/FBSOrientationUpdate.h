/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@interface FBSOrientationUpdate : NSObject {

	long long _orientation;
	double _duration;
	long long _rotationDirection;
	unsigned long long _sequenceNumber;

}

@property (assign,nonatomic) long long orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long rotationDirection;                    //@synthesize rotationDirection=_rotationDirection - In the implementation block
-(id)init;
-(id)description;
-(long long)orientation;
-(double)duration;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setOrientation:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)initWithOrientation:(long long)arg1 sequenceNumber:(unsigned long long)arg2 duration:(double)arg3 rotationDirection:(long long)arg4 ;
-(long long)rotationDirection;
-(void)setRotationDirection:(long long)arg1 ;
@end

