/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogMetallicFaceView : NTKAnalogVideoFaceView {

	BOOL _shouldApplyTransform;
	unsigned long long _currentMetallicColor;
	unsigned long long _currentDialShape;
	NSDictionary* _dataSources;

}

@property (assign,nonatomic) unsigned long long currentMetallicColor;              //@synthesize currentMetallicColor=_currentMetallicColor - In the implementation block
@property (assign,nonatomic) unsigned long long currentDialShape;                  //@synthesize currentDialShape=_currentDialShape - In the implementation block
@property (nonatomic,retain) NSDictionary * dataSources;                           //@synthesize dataSources=_dataSources - In the implementation block
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(id)_nameForMetallicColor:(unsigned long long)arg1 ;
-(NSDictionary *)dataSources;
-(void)setDataSources:(NSDictionary *)arg1 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_wantsConstantSpeedZoom;
-(id)imageForEditOption:(id)arg1 ;
-(void)_customizeVideoPlayerOnSetup;
-(void)_handleEitherScreenWake;
-(id)_complicationsCompanionForegroundColor;
-(void)setCurrentDialShape:(unsigned long long)arg1 ;
-(void)reloadDataSources;
-(void)_applyVideoPlayerTransform;
-(void)_updateDialSize;
-(void)setupDataSources;
-(unsigned long long)currentDialShape;
-(void)setCurrentMetallicColor:(unsigned long long)arg1 ;
-(id)_swatchImageForMetallicColor:(unsigned long long)arg1 andDialShape:(unsigned long long)arg2 ;
-(unsigned long long)currentMetallicColor;
@end
