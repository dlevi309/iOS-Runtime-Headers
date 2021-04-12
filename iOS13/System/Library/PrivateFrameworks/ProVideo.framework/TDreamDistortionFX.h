/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamDistortionFX : TDreamProgramWrapper {

	int centerUniform;
	int modeUniform;
	float adjustUniform;
	int _mode;
	float _fine;
	CGPoint _center;

}

@property (assign,nonatomic) int mode;                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float fine;                  //@synthesize fine=_fine - In the implementation block
@property (assign,nonatomic) CGPoint center;              //@synthesize center=_center - In the implementation block
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(float)fine;
-(void)setFine:(float)arg1 ;
-(void)setUniforms;
@end

