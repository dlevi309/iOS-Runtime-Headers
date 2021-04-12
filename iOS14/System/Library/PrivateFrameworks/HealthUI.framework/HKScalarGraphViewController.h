/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController {

	double _minimumHeight;

}

@property (nonatomic,readonly) double minimumHeight;              //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(double)minimumHeight;
-(void)viewDidLoad;
-(void)loadView;
-(id)_buildGraphViewWithLabelDimension:(id)arg1 labelEndings:(long long)arg2 ;
-(id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2 labelEndings:(long long)arg3 ;
-(void)_setupGraphViewSelectionStyle;
-(void)_pinView:(id)arg1 toParentView:(id)arg2 ;
-(id)initWithMinimumHeight:(double)arg1 ;
@end

