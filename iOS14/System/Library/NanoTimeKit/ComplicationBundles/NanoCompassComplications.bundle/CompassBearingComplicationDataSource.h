/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <NanoCompassComplications/NanoCompassBaseComplicationDataSource.h>

@interface CompassBearingComplicationDataSource : NanoCompassBaseComplicationDataSource
+(id)localizedAppName;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(id)bundleIdentifierSuffix;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)sampleTemplate;
-(id)newTemplate;
-(id)noDataTemplate;
-(id)randomizedTemplate;
-(id)_templateNoData:(BOOL)arg1 calibrated:(BOOL)arg2 heading:(id)arg3 bearing:(id)arg4 useAlphaShadows:(BOOL)arg5 ;
-(id)_templateNoData:(BOOL)arg1 calibrated:(BOOL)arg2 heading:(id)arg3 bearing:(id)arg4 ;
@end

