/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	CPSPanView* _panView;
	id<CPSPanEventDelegate> _panDelegate;
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
@property (nonatomic,readonly) BOOL useRightHandDriveFocusGuide; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(CPSPanView *)panView;
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
-(id)_linearFocusItemsWithPresentedMapButtons:(id)arg1 ;
-(void)setPanDelegate:(id<CPSPanEventDelegate>)arg1 ;
-(void)setNudgeGestureRecognizers:(NSArray *)arg1 ;
@end

