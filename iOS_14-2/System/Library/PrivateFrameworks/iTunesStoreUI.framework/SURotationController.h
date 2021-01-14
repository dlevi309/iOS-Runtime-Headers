/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class SUViewController;

@interface SURotationController : NSObject {

	SUViewController* _viewController;

}

@property (assign,nonatomic) SUViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(SUViewController *)arg1 ;
-(id)init;
-(id)initWithViewController:(id)arg1 ;
-(SUViewController *)viewController;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(void)dealloc;
-(void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(long long)arg1 ;
-(CGRect)viewFrameForInterfaceOrientation:(long long)arg1 ;
-(BOOL)orientationAffectsViewFrame;
@end

