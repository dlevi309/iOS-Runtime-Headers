/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogFireWaterFaceView : NTKAnalogVideoFaceView {

	unsigned long long _currentColor;
	unsigned long long _currentDialShape;
	NSDictionary* _dataSources;

}

@property (assign,nonatomic) unsigned long long currentColor;                  //@synthesize currentColor=_currentColor - In the implementation block
@property (assign,nonatomic) unsigned long long currentDialShape;              //@synthesize currentDialShape=_currentDialShape - In the implementation block
@property (nonatomic,retain) NSDictionary * dataSources;                       //@synthesize dataSources=_dataSources - In the implementation block
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(id)_nameForColor:(unsigned long long)arg1 ;
-(NSDictionary *)dataSources;
-(void)setDataSources:(NSDictionary *)arg1 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_wantsConstantSpeedZoom;
-(void)setCurrentColor:(unsigned long long)arg1 ;
-(unsigned long long)currentColor;
-(id)imageForEditOption:(id)arg1 ;
-(void)_customizeVideoPlayerOnSetup;
-(id)_complicationsCompanionForegroundColor;
-(void)setCurrentDialShape:(unsigned long long)arg1 ;
-(void)reloadDataSources;
-(void)_updateDialSize;
-(void)setupDataSources;
-(unsigned long long)currentDialShape;
-(id)_swatchImageForColor:(unsigned long long)arg1 andDialShape:(unsigned long long)arg2 ;
@end

