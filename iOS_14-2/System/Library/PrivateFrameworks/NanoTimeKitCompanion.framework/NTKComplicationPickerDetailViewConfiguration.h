/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationPickerBaseViewConfiguration.h>

@class NSString, NTKFaceSlotComplicationDetailListProvider;

@interface NTKComplicationPickerDetailViewConfiguration : NTKComplicationPickerBaseViewConfiguration {

	NSString* _title;

}

@property (nonatomic,readonly) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NTKFaceSlotComplicationDetailListProvider * listProvider; 
-(NSString *)title;
-(id)initWithDetailListProvider:(id)arg1 title:(id)arg2 ;
@end

