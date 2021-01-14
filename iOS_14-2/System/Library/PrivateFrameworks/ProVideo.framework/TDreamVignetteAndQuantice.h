/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamVignetteAndQuantice : TDreamProgramWrapper {

	int modeUniform;
	int vignetteCenterUniform;
	int vignetteColorUniform;
	int vignetteStartUniform;
	int vignetteEndUniform;
	int numLevelsUniform;
	int recipNumLevelsUniform;
	float numLevels;
	float recipNumLevels;
	int _mode;
	double _vignetteEnd;
	double _vignetteStart;
	TDColor3 _vignetteColor;
	CGPoint _vignetteCenter;

}

@property (assign,nonatomic) int mode;                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) CGPoint vignetteCenter;              //@synthesize vignetteCenter=_vignetteCenter - In the implementation block
@property (assign,nonatomic) TDColor3 vignetteColor;              //@synthesize vignetteColor=_vignetteColor - In the implementation block
@property (assign,nonatomic) double vignetteStart;                //@synthesize vignetteStart=_vignetteStart - In the implementation block
@property (assign,nonatomic) double vignetteEnd;                  //@synthesize vignetteEnd=_vignetteEnd - In the implementation block
-(int)mode;
-(id)init;
-(void)setMode:(int)arg1 ;
-(void)setUniforms;
-(void)setNumLevels:(unsigned)arg1 ;
-(void)setVignetteStart:(double)arg1 ;
-(void)setVignetteEnd:(double)arg1 ;
-(void)setVignetteColor:(TDColor3)arg1 ;
-(void)setVignetteCenter:(CGPoint)arg1 ;
-(CGPoint)vignetteCenter;
-(TDColor3)vignetteColor;
-(double)vignetteStart;
-(double)vignetteEnd;
@end

