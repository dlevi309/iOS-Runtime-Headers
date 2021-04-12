/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController {

	double _minimumHeight;

}

@property (nonatomic,readonly) double minimumHeight;              //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(void)loadView;
-(void)viewDidLoad;
-(double)minimumHeight;
-(id)initWithMinimumHeight:(double)arg1 ;
-(id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2 labelEndings:(long long)arg3 ;
-(id)_buildGraphViewWithLabelDimension:(id)arg1 labelEndings:(long long)arg2 ;
-(void)_setupGraphViewSelectionStyle;
-(void)_pinView:(id)arg1 toParentView:(id)arg2 ;
@end

