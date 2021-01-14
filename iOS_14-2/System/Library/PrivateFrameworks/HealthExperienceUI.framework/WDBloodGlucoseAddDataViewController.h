/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDDisplayTypeAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntrySpinnerDataSource.h>

@class WDAddDataManualEntrySpinner, NSString;

@interface WDBloodGlucoseAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource> {

	WDAddDataManualEntrySpinner* _mealTimeEntryItem;

}

@property (nonatomic,retain) WDAddDataManualEntrySpinner * mealTimeEntryItem;              //@synthesize mealTimeEntryItem=_mealTimeEntryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultMetadata;
-(long long)numberOfRowsInManualEntrySpinner:(id)arg1 ;
-(id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2 ;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(WDAddDataManualEntrySpinner *)mealTimeEntryItem;
-(void)setMealTimeEntryItem:(WDAddDataManualEntrySpinner *)arg1 ;
@end

