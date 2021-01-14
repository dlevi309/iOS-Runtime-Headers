/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPVideoMetaLensSwitchAnalyzer : NSObject {

	BOOL _hadZoom;
	float _minZoom;
	float _maxZoom;

}

@property (assign,nonatomic) BOOL hadZoom;               //@synthesize hadZoom=_hadZoom - In the implementation block
@property (assign,nonatomic) float minZoom;              //@synthesize minZoom=_minZoom - In the implementation block
@property (assign,nonatomic) float maxZoom;              //@synthesize maxZoom=_maxZoom - In the implementation block
-(id)results;
-(float)maxZoom;
-(id)init;
-(float)minZoom;
-(BOOL)hadZoom;
-(void)setMinZoom:(float)arg1 ;
-(void)setHadZoom:(BOOL)arg1 ;
-(void)setMaxZoom:(float)arg1 ;
@end

