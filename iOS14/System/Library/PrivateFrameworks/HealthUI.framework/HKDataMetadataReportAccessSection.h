/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSection.h>

@class UIViewController;

@interface HKDataMetadataReportAccessSection : HKDataMetadataSection {

	UIViewController* _accessViewController;

}

@property (nonatomic,readonly) UIViewController * accessViewController;              //@synthesize accessViewController=_accessViewController - In the implementation block
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3 ;
-(UIViewController *)accessViewController;
@end

