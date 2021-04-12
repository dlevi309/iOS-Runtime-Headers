/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamColoricer : TDreamProgramWrapper {

	int firstColorUniform;
	int secondColorUniform;
	TDColor3 _secondColor;
	TDColor3 _firstColor;

}

@property (assign,nonatomic) TDColor3 firstColor;               //@synthesize firstColor=_firstColor - In the implementation block
@property (assign,nonatomic) TDColor3 secondColor;              //@synthesize secondColor=_secondColor - In the implementation block
-(id)init;
-(TDColor3)firstColor;
-(void)setFirstColor:(TDColor3)arg1 ;
-(void)setSecondColor:(TDColor3)arg1 ;
-(TDColor3)secondColor;
-(void)setUniforms;
@end

