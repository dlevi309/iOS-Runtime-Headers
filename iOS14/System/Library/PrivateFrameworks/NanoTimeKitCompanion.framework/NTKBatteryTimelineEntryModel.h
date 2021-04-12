/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel {

	float _level;
	long long _state;

}

@property (assign,nonatomic) float level;                  //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
-(float)level;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setLevel:(float)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)_newUtilitarianSmallFlatTemplate;
-(id)_newUtilitarianLargeTemplate;
-(id)_signatureCircularTemplate;
-(id)_signatureBezelTemplate;
-(id)_signatureCornerTemplate;
-(id)_graphicExtraLargeCircularTemplate;
-(id)_newBatteryTemplateForFamily:(long long)arg1 ;
-(id)_levelTintColor;
-(id)_ringTextProvider;
@end

