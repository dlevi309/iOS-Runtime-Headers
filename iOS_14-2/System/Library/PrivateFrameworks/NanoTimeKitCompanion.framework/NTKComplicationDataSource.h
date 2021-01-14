/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ClockComplications/CLKCComplicationDataSource.h>

@class NTKComplication;

@interface NTKComplicationDataSource : CLKCComplicationDataSource

@property (nonatomic,readonly) NTKComplication * complication; 
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3 ;
+(Class)dataSourceClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg1 ;
-(id)sampleTemplate;
@end

