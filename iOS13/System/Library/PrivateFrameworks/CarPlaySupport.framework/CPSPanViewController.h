/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSPanViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSPanEventDelegate;
@class CPSPanView, NSArray, NSString;

@interface CPSPanViewController : UIViewController <CPSPanViewDelegate, UIGestureRecognizerDelegate, CPSLinearFocusProviding> {

	BOOL _rightHandDrive;
	id<CPSPanEventDelegate> _panDelegate;
	CPSPanView* _panView;
	NSArray* _nudgeGestureRecognizers;

}

@property (nonatomic,retain) CPSPanView * panView;                                    //@synthesize panView=_panView - In the implementation block
@property (nonatomic,retain) NSArray * nudgeGestureRecognizers;                       //@synthesize nudgeGestureRecognizers=_nudgeGestureRecognizers - In the implementation block
@property (assign,nonatomic,__weak) id<CPSPanEventDelegate> panDelegate;              //@synthesize panDelegate=_panDelegate - In the implementation block
@property (nonatomic,readonly) double sideButtonTopInset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)panView:(id)arg1 panWithDirection:(long long)arg2 ;
-(void)panView:(id)arg1 panBeganWithDirection:(long long)arg2 ;
-(void)panView:(id)arg1 panEndedWithDirection:(long long)arg2 ;
-(double)sideButtonTopInset;
-(id)_linearFocusItems;
-(void)setPanView:(CPSPanView *)arg1 ;
-(void)_handleNudgeLongPress:(id)arg1 ;
-(void)_handleNudgeTapped:(id)arg1 ;
-(NSArray *)nudgeGestureRecognizers;
-(id<CPSPanEventDelegate>)panDelegate;
-(CPSPanView *)panView;
-(id)_linearFocusItemsWithPresentedMapButtons:(id)arg1 ;
-(void)setPanDelegate:(id<CPSPanEventDelegate>)arg1 ;
-(void)setNudgeGestureRecognizers:(NSArray *)arg1 ;
@end

