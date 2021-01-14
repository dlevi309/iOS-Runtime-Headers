/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)mode;
-(CGPoint)center;
-(id)init;
-(float)fine;
-(void)setMode:(int)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFine:(float)arg1 ;
-(void)setUniforms;
@end

