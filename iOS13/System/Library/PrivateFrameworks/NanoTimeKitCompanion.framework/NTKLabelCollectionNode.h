/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCollectionNode.h>

@interface NTKLabelCollectionNode : NTKCollectionNode {

	BOOL _paddedWithZeros;
	unsigned _labels;
	unsigned _start;
	unsigned _multiple;
	unsigned _repeat;
	long long _faceStyle;
	long long _font;
	double _fontSize;
	double _color;
	const NTKLabelPosition* _positions;

}

@property (assign,nonatomic) long long faceStyle;                            //@synthesize faceStyle=_faceStyle - In the implementation block
@property (assign,nonatomic) unsigned labels;                                //@synthesize labels=_labels - In the implementation block
@property (assign,nonatomic) unsigned start;                                 //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) unsigned multiple;                              //@synthesize multiple=_multiple - In the implementation block
@property (assign,nonatomic) unsigned repeat;                                //@synthesize repeat=_repeat - In the implementation block
@property (assign,nonatomic) long long font;                                 //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double fontSize;                                //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) BOOL paddedWithZeros;                           //@synthesize paddedWithZeros=_paddedWithZeros - In the implementation block
@property (assign,nonatomic) double color;                                   //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) const NTKLabelPosition* positions;              //@synthesize positions=_positions - In the implementation block
+(void)applyLabelPositions:(const NTKLabelPosition*)arg1 toNodes:(id)arg2 forDevice:(id)arg3 ;
+(void)applyLabelPosition:(const NTKLabelPosition*)arg1 withCenter:(CGPoint)arg2 toNode:(id)arg3 forDevice:(id)arg4 ;
+(void)applyLabelPositions:(const NTKLabelPosition*)arg1 withCenter:(CGPoint)arg2 toNodes:(id)arg3 forDevice:(id)arg4 ;
+(void)applyLabelPosition:(const NTKLabelPosition*)arg1 toNode:(id)arg2 forDevice:(id)arg3 ;
-(unsigned)start;
-(double)color;
-(void)setColor:(double)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(unsigned)labels;
-(void)setLabels:(unsigned)arg1 ;
-(void)setFont:(long long)arg1 ;
-(long long)font;
-(unsigned)multiple;
-(void)setStart:(unsigned)arg1 ;
-(void)setMultiple:(unsigned)arg1 ;
-(unsigned)repeat;
-(const NTKLabelPosition*)positions;
-(id)initForDevice:(id)arg1 ;
-(long long)faceStyle;
-(BOOL)paddedWithZeros;
-(void)updateLabelNodePositions;
-(void)createSubNodes;
-(void)applyAppearanceFraction:(double)arg1 inverted:(BOOL)arg2 ;
-(void)setFaceStyle:(long long)arg1 ;
-(void)colorize:(id)arg1 ;
-(void)setRepeat:(unsigned)arg1 ;
-(void)setPaddedWithZeros:(BOOL)arg1 ;
-(void)setPositions:(const NTKLabelPosition*)arg1 ;
@end

