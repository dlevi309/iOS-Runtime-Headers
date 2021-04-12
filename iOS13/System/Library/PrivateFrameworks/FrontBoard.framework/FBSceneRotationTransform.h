/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneRotationTransform : FBSceneTransform {

	long long _degrees;
	double _radians;

}

@property (assign,nonatomic) long long degrees;              //@synthesize degrees=_degrees - In the implementation block
@property (assign,nonatomic) double radians;                 //@synthesize radians=_radians - In the implementation block
-(id)description;
-(double)radians;
-(long long)degrees;
-(void)_updateTransform;
-(id)initWithRadians:(double)arg1 ;
-(id)initWithDegrees:(long long)arg1 ;
-(void)setRadians:(double)arg1 ;
-(void)setDegrees:(long long)arg1 ;
@end

