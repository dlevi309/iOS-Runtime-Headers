/*
* Generated on Thursday, January 14, 2021 at 2:21:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)appearing;
-(BOOL)appeared;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)parentControllerDidBecomeActive;
-(void)performResumeDeferredSetup;
-(BOOL)deferredAppeared;
-(void)significantTimeChange;
-(void)viewDidAppearDeferredSetup;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(BOOL)dissapearing;
-(void)setAppeared:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDissapearing:(BOOL)arg1 ;
-(void)setDeferredAppeared:(BOOL)arg1 ;
-(void)childViewControllersPerform:(SEL)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)setAppearing:(BOOL)arg1 ;
@end

