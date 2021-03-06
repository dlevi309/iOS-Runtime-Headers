/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLCamera.h>

@interface MDLStereoscopicCamera : MDLCamera {

	float _interPupillaryDistance;
	float _leftVergence;
	float _rightVergence;
	float _overlap;

}

@property (assign,nonatomic) float interPupillaryDistance;                        //@synthesize interPupillaryDistance=_interPupillaryDistance - In the implementation block
@property (assign,nonatomic) float leftVergence;                                  //@synthesize leftVergence=_leftVergence - In the implementation block
@property (assign,nonatomic) float rightVergence;                                 //@synthesize rightVergence=_rightVergence - In the implementation block
@property (assign,nonatomic) float overlap;                                       //@synthesize overlap=_overlap - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MD1 leftViewMatrix; 
@property (nonatomic,readonly) SCD_Struct_MD1 rightViewMatrix; 
@property (nonatomic,readonly) SCD_Struct_MD1 leftProjectionMatrix; 
@property (nonatomic,readonly) SCD_Struct_MD1 rightProjectionMatrix; 
-(id)init;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
-(SCD_Struct_MD1)leftViewMatrix;
-(SCD_Struct_MD1)rightViewMatrix;
-(SCD_Struct_MD1)leftProjectionMatrix;
-(SCD_Struct_MD1)rightProjectionMatrix;
-(float)interPupillaryDistance;
-(void)setInterPupillaryDistance:(float)arg1 ;
-(float)leftVergence;
-(void)setLeftVergence:(float)arg1 ;
-(float)rightVergence;
-(void)setRightVergence:(float)arg1 ;
@end

