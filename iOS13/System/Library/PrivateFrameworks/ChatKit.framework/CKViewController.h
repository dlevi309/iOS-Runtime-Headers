/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>

@interface CKViewController : UIViewController {

	BOOL _appeared;
	BOOL _deferredAppeared;
	BOOL _appearing;
	BOOL _dissapearing;

}

@property (assign,nonatomic) BOOL appeared;                      //@synthesize appeared=_appeared - In the implementation block
@property (assign,nonatomic) BOOL deferredAppeared;              //@synthesize deferredAppeared=_deferredAppeared - In the implementation block
@property (assign,nonatomic) BOOL appearing;                     //@synthesize appearing=_appearing - In the implementation block
@property (assign,nonatomic) BOOL dissapearing;                  //@synthesize dissapearing=_dissapearing - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)significantTimeChange;
-(void)systemApplicationWillEnterForeground;
-(void)setAppearing:(BOOL)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)parentControllerDidBecomeActive;
-(void)performResumeDeferredSetup;
-(BOOL)deferredAppeared;
-(BOOL)appeared;
-(BOOL)appearing;
-(void)setDissapearing:(BOOL)arg1 ;
-(void)setAppeared:(BOOL)arg1 ;
-(void)setDeferredAppeared:(BOOL)arg1 ;
-(void)childViewControllersPerform:(SEL)arg1 ;
-(BOOL)dissapearing;
@end

