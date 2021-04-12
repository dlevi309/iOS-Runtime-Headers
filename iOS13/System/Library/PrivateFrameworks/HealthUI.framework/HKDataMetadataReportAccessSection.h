/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

