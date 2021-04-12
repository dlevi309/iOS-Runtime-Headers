/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBTouchTemplateGestureRecognizerDelegate.h>

@protocol SBHomeGestureInteractionDelegate;
@class SBHomeGesturePanGestureRecognizer, SBIndirectPanGestureRecognizer, SBFluidScrunchGestureRecognizer, NSSet, UIGestureRecognizer, NSString;

@interface SBHomeGestureInteraction : NSObject <UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate> {

	BOOL _enabled;
	long long _recognizedGestureType;
	SBHomeGesturePanGestureRecognizer* _screenEdgePanGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectPanGestureRecognizer;
	SBFluidScrunchGestureRecognizer* _scrunchGestureRecognizer;
	id<SBHomeGestureInteractionDelegate> _delegate;

}

@property (nonatomic,retain) SBHomeGesturePanGestureRecognizer * screenEdgePanGestureRecognizer;              //@synthesize screenEdgePanGestureRecognizer=_screenEdgePanGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectPanGestureRecognizer;                   //@synthesize indirectPanGestureRecognizer=_indirectPanGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidScrunchGestureRecognizer * scrunchGestureRecognizer;                      //@synthesize scrunchGestureRecognizer=_scrunchGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<SBHomeGestureInteractionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long recognizedGestureType;                                                 //@synthesize recognizedGestureType=_recognizedGestureType - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSSet * gestureRecognizers; 
@property (nonatomic,readonly) UIGestureRecognizer * recognizedGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(id<SBHomeGestureInteractionDelegate>)delegate;
-(void)setDelegate:(id<SBHomeGestureInteractionDelegate>)arg1 ;
-(BOOL)isEnabled;
-(id)initWithDelegate:(id)arg1 ;
-(NSSet *)gestureRecognizers;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(SBHomeGesturePanGestureRecognizer *)screenEdgePanGestureRecognizer;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(id)gestureRecognizerForType:(long long)arg1 ;
-(void)_configureGestureRecognizers;
-(void)_configureScreenEdgePanGestureRecognizer;
-(void)_configureIndirectPanGestureRecognizer;
-(void)_configureScrunchGestureRecognizer;
-(long long)typeOfGestureRecognizer:(id)arg1 ;
-(UIGestureRecognizer *)recognizedGestureRecognizer;
-(BOOL)_isGestureRunning:(id)arg1 ;
-(long long)recognizedGestureType;
-(void)setRecognizedGestureType:(long long)arg1 ;
-(void)setScreenEdgePanGestureRecognizer:(SBHomeGesturePanGestureRecognizer *)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectPanGestureRecognizer;
-(void)setIndirectPanGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(SBFluidScrunchGestureRecognizer *)scrunchGestureRecognizer;
-(void)setScrunchGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
@end

