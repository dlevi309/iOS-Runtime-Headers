/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDataMetadataProvider.h>

@class HKSample, HKUnitPreferenceController;

@interface HKDataMetadataDataSource : NSObject <HKDataMetadataProvider> {

	HKSample* _sample;
	HKUnitPreferenceController* _unitPreferenceController;

}
-(id)initWithSample:(id)arg1 unitPreferenceController:(id)arg2 ;
-(void)addDetailValuesToSection:(id)arg1 ;
-(id)_mediaSourceDisplayNamesForSample:(id)arg1 ;
-(void)addAdditionalDetailValuesToSection:(id)arg1 key:(id)arg2 value:(id)arg3 ;
@end

