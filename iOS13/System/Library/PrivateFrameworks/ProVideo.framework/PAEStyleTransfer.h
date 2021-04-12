/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class NSString, EspressoImage2Image;

@interface PAEStyleTransfer : PAEFilterDefaultBase {

	HGRef<HStyleTransfer>* _styleTransfer;
	NSString* _modelName;
	BOOL _defaultsLoaded;
	EspressoImage2Image* _espresso;
	long long _currentQualityLevel;
	double _currentAspectRatio;

}

@property (nonatomic,retain) EspressoImage2Image * espresso;              //@synthesize espresso=_espresso - In the implementation block
@property (assign,nonatomic) long long currentQualityLevel;               //@synthesize currentQualityLevel=_currentQualityLevel - In the implementation block
@property (assign,nonatomic) double currentAspectRatio;                   //@synthesize currentAspectRatio=_currentAspectRatio - In the implementation block
+(BOOL)hasEspressoVersion;
-(void)dealloc;
-(id)properties;
-(BOOL)loadModel:(id)arg1 ;
-(void)loadDefaults;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA79*)arg3 ;
-(BOOL)variesOverTime;
-(id)pathForSettings;
-(EspressoImage2Image *)espresso;
-(long long)currentQualityLevel;
-(id)_modeNames;
-(void)setCurrentQualityLevel:(long long)arg1 ;
-(id)modelNameAtIndex:(unsigned long long)arg1 ;
-(void)setEspresso:(EspressoImage2Image *)arg1 ;
-(double)currentAspectRatio;
-(void)setCurrentAspectRatio:(double)arg1 ;
@end

