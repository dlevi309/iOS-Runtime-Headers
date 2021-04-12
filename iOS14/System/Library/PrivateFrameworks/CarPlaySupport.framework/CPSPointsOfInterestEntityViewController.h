/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSBaseEntityContentViewController.h>

@class CPSPointsOfInterestMapViewController;

@interface CPSPointsOfInterestEntityViewController : CPSBaseEntityContentViewController {

	CPSPointsOfInterestMapViewController* _mapViewController;

}

@property (nonatomic,readonly) CPSPointsOfInterestMapViewController * mapViewController;              //@synthesize mapViewController=_mapViewController - In the implementation block
-(CPSPointsOfInterestMapViewController *)mapViewController;
-(void)setupViewControllers;
-(void)viewDidLoad;
-(id)initWithEntity:(id)arg1 resourceProvider:(id)arg2 ;
-(void)didUpdateEntity:(id)arg1 ;
-(BOOL)shouldAppearInUnsafeArea;
@end

