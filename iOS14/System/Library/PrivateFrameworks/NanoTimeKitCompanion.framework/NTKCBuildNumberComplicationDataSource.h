/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class NRDevice, NSString;

@interface NTKCBuildNumberComplicationDataSource : NTKComplicationDataSource {

	NRDevice* nrDevice;
	NSString* companionBuild;

}
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)_currentTimelineEntry;
@end

