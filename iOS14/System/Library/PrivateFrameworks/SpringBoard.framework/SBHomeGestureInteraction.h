/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBTouchTemplateGestureRecognizerDelegate.h>

@protocol SBHomeGestureInteractionDelegate;
@class SBHomeGesturePanGestureRecognizer, SBIndirectPanGestureRecognizer, SBFluidScrunchGestureRecognizer, SBSystemGestureManager, NSSet, UIGestureRecognizer, NSString;

@interface SBHomeGestureInteraction : NSObject <UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate> {

	BOOL _enabled;
	long long _recognizedGestureType;
	SBHomeGesturePanGestureRecognizer* _screenEdgePanGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectPanGestureRecognizer;
	SBFluidScrunchGestureRecognizer* _scrunchGestureRecognizer;
	id<SBHomeGestureInteractionDelegate> _delegate;
	SBSystemGestureManager* _gestureManager;

}

@property (nonatomic,retain) SBHomeGesturePanGestureRecognizer * screenEdgePanGestureRecognizer;              //@synthesize screenEdgePanGestureRecognizer=_screenEdgePanGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectPanGestureRecognizer;                   //@synthesize indirectPanGestureRecognizer=_indirectPanGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidScrunchGestureRecognizer * scrunchGestureRecognizer;                      //@synthesize scrunchGestureRecognizer=_scrunchGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<SBHomeGestureInteractionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long recognizedGestureType;                                                 //@synthesize recognizedGestureType=_recognizedGestureType - In the implementation block
@property (nonatomic,retain) SBSystemGestureManager * gestureManager;                                         //@synthesize gestureManager=_gestureManager - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSSet * gestureRecognizers; 
@property (nonatomic,readonly) UIGestureRecognizer * recognizedGestureRecognizer; 
@property (nonatomic,readonly) double indirectScreenEdgeGestureRecognitionDistance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)velocityInView:(id)arg1 ;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<SBHomeGestureInteractionDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_configureGestureRecognizers;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setGestureManager:(SBSystemGestureManager *)arg1 ;
-(SBSystemGestureManager *)gestureManager;
-(void)setDelegate:(id<SBHomeGestureInteractionDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(SBHomeGesturePanGestureRecognizer *)screenEdgePanGestureRecognizer;
-(void)invalidate;
-(BOOL)isEnabled;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(NSSet *)gestureRecognizers;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(id)gestureRecognizerForType:(long long)arg1 ;
-(id)initWithSystemGestureManager:(id)arg1 delegate:(id)arg2 ;
-(void)_configureScreenEdgePanGestureRecognizer;
-(void)_configureIndirectPanGestureRecognizer;
-(void)_configureScrunchGestureRecognizer;
-(long long)typeOfGestureRecognizer:(id)arg1 ;
-(UIGestureRecognizer *)recognizedGestureRecognizer;
-(double)indirectScreenEdgeGestureRecognitionDistance;
-(BOOL)_isGestureRunning:(id)arg1 ;
-(long long)recognizedGestureType;
-(void)setRecognizedGestureType:(long long)arg1 ;
-(void)setScreenEdgePanGestureRecognizer:(SBHomeGesturePanGestureRecognizer *)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectPanGestureRecognizer;
-(void)setIndirectPanGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(SBFluidScrunchGestureRecognizer *)scrunchGestureRecognizer;
-(void)setScrunchGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
@end

