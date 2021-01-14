/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@interface AVTStickerGeneratorOptions : NSObject {

	BOOL _correctClipping;
	double _sizeMultiplier;
	double _scaleFactor;

}

@property (assign,nonatomic) double sizeMultiplier;              //@synthesize sizeMultiplier=_sizeMultiplier - In the implementation block
@property (assign,nonatomic) double scaleFactor;                 //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) BOOL correctClipping;               //@synthesize correctClipping=_correctClipping - In the implementation block
+(id)defaultOptions;
+(id)optionsWithCorrectClipping:(BOOL)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(double)scaleFactor;
-(id)init;
-(void)setCorrectClipping:(BOOL)arg1 ;
-(void)setSizeMultiplier:(double)arg1 ;
-(double)sizeMultiplier;
-(BOOL)correctClipping;
@end

