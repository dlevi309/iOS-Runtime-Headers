/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFaceComplicationConfiguration.h>

@interface NTKCornerComplicationConfiguration : NTKFaceComplicationConfiguration {

	unsigned long long _topLeftComplication;
	unsigned long long _topRightComplication;
	unsigned long long _bottomLeftComplication;
	unsigned long long _bottomRightComplication;

}
-(id)init;
-(id)orderedComplicationSlots;
-(id)richComplicationSlotsForDevice:(id)arg1 ;
-(BOOL)complicationExistenceInvalidatesSnapshot;
-(id)complicationSlotDescriptors;
-(id)defaultSelectedComplicationSlotForDevice:(id)arg1 ;
-(id)initWithTopLeftComplication:(unsigned long long)arg1 topRightComplication:(unsigned long long)arg2 bottomLeftComplication:(unsigned long long)arg3 bottomRightComplication:(unsigned long long)arg4 ;
@end

