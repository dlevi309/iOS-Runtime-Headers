/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@interface AVTMorpherWeightRemappingDescriptor : NSObject {

	float _ax;
	float _bx;
	float _cx;
	float _ay;
	float _by;
	float _cy;

}

@property (assign,nonatomic) float ax;              //@synthesize ax=_ax - In the implementation block
@property (assign,nonatomic) float bx;              //@synthesize bx=_bx - In the implementation block
@property (assign,nonatomic) float cx;              //@synthesize cx=_cx - In the implementation block
@property (assign,nonatomic) float ay;              //@synthesize ay=_ay - In the implementation block
@property (assign,nonatomic) float by;              //@synthesize by=_by - In the implementation block
@property (assign,nonatomic) float cy;              //@synthesize cy=_cy - In the implementation block
-(float)cx;
-(void)setCx:(float)arg1 ;
-(float)cy;
-(void)setCy:(float)arg1 ;
-(float)solveCurveX:(float)arg1 ;
-(float)sampleCurveY:(float)arg1 ;
-(float)ay;
-(float)by;
-(float)ax;
-(float)bx;
-(float)sampleCurveX:(float)arg1 ;
-(float)sampleCurveDerivativeX:(float)arg1 ;
-(float)solveFor:(float)arg1 ;
-(void)setAx:(float)arg1 ;
-(void)setBx:(float)arg1 ;
-(void)setAy:(float)arg1 ;
-(void)setBy:(float)arg1 ;
@end

