/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSAccessoryViewController.h>

@class CSAccessoryTrayView;

@interface CSAccessoryTrayViewController : CSAccessoryViewController {

	CSAccessoryTrayView* _trayView;

}

@property (nonatomic,retain) CSAccessoryTrayView * trayView;              //@synthesize trayView=_trayView - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)accessoryView;
-(void)viewDidLoad;
-(id)initWithAccessory:(id)arg1 ;
-(CSAccessoryTrayView *)trayView;
-(double)animationDurationBeforeDismissal;
-(id)_trayColorForAccessory:(id)arg1 ;
-(void)setTrayView:(CSAccessoryTrayView *)arg1 ;
@end

