/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKFaceComplicationConfiguration.h>

@protocol NTKFaceComplicationConfiguration <NSObject>
@optional
-(id)dateComplicationSlotForDevice:(id)arg1;
-(unsigned long long)dateComplicationSlotSupportedStylesForDevice:(id)arg1;

@required
+(id)defaultLocalizedNameForComplicationSlot:(id)arg1;
-(id)orderedComplicationSlots;
-(id)richComplicationSlotsForDevice:(id)arg1;
-(BOOL)complicationExistenceInvalidatesSnapshot;
-(id)complicationSlotDescriptors;
-(id)defaultSelectedComplicationSlotForDevice:(id)arg1;
-(id)localizedNameForComplicationSlot:(id)arg1;

@end


@class NSString;

@interface NTKFaceComplicationConfiguration : NSObject <NTKFaceComplicationConfiguration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLocalizedNameForComplicationSlot:(id)arg1 ;
-(id)orderedComplicationSlots;
-(id)richComplicationSlotsForDevice:(id)arg1 ;
-(BOOL)complicationExistenceInvalidatesSnapshot;
-(id)complicationSlotDescriptors;
-(id)defaultSelectedComplicationSlotForDevice:(id)arg1 ;
-(id)localizedNameForComplicationSlot:(id)arg1 ;
@end

