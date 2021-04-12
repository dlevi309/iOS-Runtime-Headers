/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSimpleSection.h>
#import <libobjc.A.dylib/HKDataMetadataDetailSectionDataReceiver.h>

@protocol HKDataMetadataObject;
@class HKDisplayTypeController, HKUnitPreferenceController, HKDataMetadataDataSource, NSObject;

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection <HKDataMetadataDetailSectionDataReceiver> {

	HKDataMetadataDataSource* _metadataDataSource;
	NSObject*<HKDataMetadataObject> _object;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;

}

@property (nonatomic,readonly) NSObject*<HKDataMetadataObject> object;                       //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;              //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;                  //@synthesize unitController=_unitController - In the implementation block
-(NSObject*<HKDataMetadataObject>)object;
-(HKUnitPreferenceController *)unitController;
-(HKDisplayTypeController *)displayTypeController;
-(id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(id)initWithWorkoutEvent:(id)arg1 ;
-(void)_loadMetadataValues;
@end

