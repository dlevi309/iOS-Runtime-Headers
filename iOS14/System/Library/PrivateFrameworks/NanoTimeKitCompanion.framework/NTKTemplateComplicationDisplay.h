/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKTemplateComplicationDisplay <NTKComplicationDisplay,NTKTimeTravel>
@optional
+(BOOL)supportsComplicationFamily:(long long)arg1;
+(long long)layoutOverride;
-(unsigned long long)timelineAnimationFadeTypeOverride;

@required
+(BOOL)handlesComplicationTemplate:(id)arg1;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
-(id)complicationTemplate;

@end

