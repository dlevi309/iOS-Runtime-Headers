/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKTemplateComplicationDisplay <NTKComplicationDisplay,NTKTimeTravel>
@optional
+(BOOL)supportsComplicationFamily:(long long)arg1;
-(long long)layoutOverride;
-(unsigned long long)timelineAnimationFadeTypeOverride;

@required
+(BOOL)handlesComplicationTemplate:(id)arg1;
-(id)complicationTemplate;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;

@end

