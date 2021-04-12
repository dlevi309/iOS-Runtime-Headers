/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFirstColor:(TDColor3)arg1 ;
-(void)setSecondColor:(TDColor3)arg1 ;
-(TDColor3)firstColor;
-(TDColor3)secondColor;
-(void)setUniforms;
@end

