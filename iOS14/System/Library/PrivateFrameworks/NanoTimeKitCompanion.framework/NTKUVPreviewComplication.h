/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKComplicationPreviewTimelineEntry;

@interface NTKUVPreviewComplication : NTKComplication {

	CLKComplicationPreviewTimelineEntry* _entry;
	long long _family;

}

@property (nonatomic,readonly) CLKComplicationPreviewTimelineEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) long long family;                                         //@synthesize family=_family - In the implementation block
+(id)complicationWithEntry:(id)arg1 forFamily:(long long)arg2 ;
-(id)init;
-(CLKComplicationPreviewTimelineEntry *)entry;
-(long long)family;
-(id)initWithComplicationType:(unsigned long long)arg1 ;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
@end

