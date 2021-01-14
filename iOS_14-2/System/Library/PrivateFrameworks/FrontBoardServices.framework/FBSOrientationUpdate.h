/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(double)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)sequenceNumber;
-(id)initWithOrientation:(long long)arg1 sequenceNumber:(unsigned long long)arg2 duration:(double)arg3 rotationDirection:(long long)arg4 ;
-(void)setRotationDirection:(long long)arg1 ;
-(id)description;
-(long long)rotationDirection;
-(long long)orientation;
-(double)duration;
-(void)setOrientation:(long long)arg1 ;
@end

