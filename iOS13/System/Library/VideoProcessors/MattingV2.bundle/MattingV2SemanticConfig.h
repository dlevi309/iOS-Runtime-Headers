/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
*/


@interface MattingV2SemanticConfig : NSObject {

	BOOL _useDepthFilter;
	BOOL _constraintsEnabled;
	unsigned _width;
	unsigned _height;
	unsigned _kernelSpatialDiameter;
	float _epsilon;
	unsigned _iterations;
	float _fgThresholdValue;
	float _bgThresholdValue;
	unsigned _erosionKernelSize;

}

@property (assign,nonatomic) unsigned width;                              //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned height;                             //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned kernelSpatialDiameter;              //@synthesize kernelSpatialDiameter=_kernelSpatialDiameter - In the implementation block
@property (assign,nonatomic) float epsilon;                               //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) unsigned iterations;                         //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) BOOL useDepthFilter;                         //@synthesize useDepthFilter=_useDepthFilter - In the implementation block
@property (assign,nonatomic) BOOL constraintsEnabled;                     //@synthesize constraintsEnabled=_constraintsEnabled - In the implementation block
@property (assign,nonatomic) float fgThresholdValue;                      //@synthesize fgThresholdValue=_fgThresholdValue - In the implementation block
@property (assign,nonatomic) float bgThresholdValue;                      //@synthesize bgThresholdValue=_bgThresholdValue - In the implementation block
@property (assign,nonatomic) unsigned erosionKernelSize;                  //@synthesize erosionKernelSize=_erosionKernelSize - In the implementation block
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(unsigned)iterations;
-(void)setIterations:(unsigned)arg1 ;
-(unsigned)kernelSpatialDiameter;
-(void)setKernelSpatialDiameter:(unsigned)arg1 ;
-(BOOL)useDepthFilter;
-(void)setUseDepthFilter:(BOOL)arg1 ;
-(BOOL)constraintsEnabled;
-(float)fgThresholdValue;
-(float)bgThresholdValue;
-(unsigned)erosionKernelSize;
-(void)setConstraintsEnabled:(BOOL)arg1 ;
-(void)setFgThresholdValue:(float)arg1 ;
-(void)setBgThresholdValue:(float)arg1 ;
-(void)setErosionKernelSize:(unsigned)arg1 ;
@end

