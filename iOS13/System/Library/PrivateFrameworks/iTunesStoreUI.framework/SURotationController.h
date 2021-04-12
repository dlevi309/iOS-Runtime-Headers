/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class SUViewController;

@interface SURotationController : NSObject {

	SUViewController* _viewController;

}

@property (assign,nonatomic) SUViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setViewController:(SUViewController *)arg1 ;
-(SUViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(long long)arg1 ;
-(CGRect)viewFrameForInterfaceOrientation:(long long)arg1 ;
-(BOOL)orientationAffectsViewFrame;
@end

