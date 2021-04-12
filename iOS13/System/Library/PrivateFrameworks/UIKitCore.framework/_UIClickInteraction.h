/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickInteractionDriverDelegate.h>
#import <UIKit/UIInteraction_Private.h>
#import <UIKit/UIInteraction_Internal.h>
#import <UIKit/UIInteraction.h>

@protocol UIInteractionEffect, _UIClickInteractionDelegate, _UIClickInteractionDriving;
@class UIView, _UIClickFeedbackGenerator, NSString;

@interface _UIClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction_Internal, UIInteraction> {

	BOOL _hapticsEnabled;
	UIView* _view;
	id<UIInteractionEffect> _interactionEffect;
	id<_UIClickInteractionDelegate> _delegate;
	double _allowableMovement;
	id<_UIClickInteractionDriving> _driver;
	_UIClickFeedbackGenerator* _feedbackGenerator;
	Class _overrideDriverClass;

}

@property (nonatomic,retain) id<_UIClickInteractionDriving> driver;                                  //@synthesize driver=_driver - In the implementation block
@property (nonatomic,retain) _UIClickFeedbackGenerator * feedbackGenerator;                          //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL driverCancelsTouchesInView; 
@property (assign,setter=_setOverrideDriverClass:,nonatomic) Class overrideDriverClass;              //@synthesize overrideDriverClass=_overrideDriverClass - In the implementation block
@property (assign,nonatomic) BOOL hapticsEnabled;                                                    //@synthesize hapticsEnabled=_hapticsEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<_UIClickInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                               //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<UIInteractionEffect> interactionEffect;                              //@synthesize interactionEffect=_interactionEffect - In the implementation block
-(id)init;
-(id<_UIClickInteractionDelegate>)delegate;
-(void)setDelegate:(id<_UIClickInteractionDelegate>)arg1 ;
-(UIView *)view;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setFeedbackGenerator:(_UIClickFeedbackGenerator *)arg1 ;
-(_UIClickFeedbackGenerator *)feedbackGenerator;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2 ;
-(double)allowableMovement;
-(void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2 ;
-(void)cancelInteraction;
-(void)clickDriver:(id)arg1 shouldBegin:(/*^block*/id)arg2 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(id<UIInteractionEffect>)interactionEffect;
-(void)setInteractionEffect:(id<UIInteractionEffect>)arg1 ;
-(void)_viewTraitCollectionDidChange:(id)arg1 ;
-(void)_beginInteraction;
-(void)setHapticsEnabled:(BOOL)arg1 ;
-(id<_UIClickInteractionDriving>)driver;
-(void)_updateDriver;
-(void)_createFeedbackGenerator;
-(BOOL)hapticsEnabled;
-(Class)_driverClass;
-(void)setDriver:(id<_UIClickInteractionDriving>)arg1 ;
-(Class)overrideDriverClass;
-(void)_endInteraction;
-(void)_setOverrideDriverClass:(Class)arg1 ;
-(BOOL)driverCancelsTouchesInView;
-(void)setDriverCancelsTouchesInView:(BOOL)arg1 ;
@end

