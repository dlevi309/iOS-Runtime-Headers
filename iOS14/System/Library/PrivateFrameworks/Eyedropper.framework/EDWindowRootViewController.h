/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Eyedropper.framework/Eyedropper
*/

#import <Eyedropper/Eyedropper-Structs.h>
#import <UIKitCore/UIViewController.h>

@class EDLensView;

@interface EDWindowRootViewController : UIViewController {

	EDLensView* _lensView;

}

@property (nonatomic,retain) EDLensView * lensView;              //@synthesize lensView=_lensView - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)getRotationContentSettings:(SCD_Struct_ED3*)arg1 forWindow:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(EDLensView *)lensView;
-(void)setLensView:(EDLensView *)arg1 ;
@end

