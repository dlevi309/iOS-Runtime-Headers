/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <NanoCompassComplications/NanoCompassBaseComplicationDataSource.h>

@interface AltitudeComplicationDataSource : NanoCompassBaseComplicationDataSource
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(id)appNameLocalizationKey;
+(id)bundleIdentifierSuffix;
-(id)alwaysOnTemplate;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)sampleTemplate;
-(id)_templateNoData:(BOOL)arg1 altitude:(id)arg2 ;
-(id)newTemplate;
-(id)noDataTemplate;
-(id)randomizedTemplate;
@end

