/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) id<UIInteractionEffect> interactionEffect;                              //@synthesize interactionEffect=_interactionEffect - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                 //@synthesize view=_view - In the implementation block
-(void)setAllowableMovement:(double)arg1 ;
-(void)setFeedbackGenerator:(_UIClickFeedbackGenerator *)arg1 ;
-(void)_createFeedbackGenerator;
-(void)_beginInteraction;
-(BOOL)hapticsEnabled;
-(void)_updateDriver;
-(id)init;
-(void)setDriver:(id<_UIClickInteractionDriving>)arg1 ;
-(id<_UIClickInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(void)clickDriver:(id)arg1 shouldBegin:(/*^block*/id)arg2 ;
-(void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2 ;
-(void)_viewTraitCollectionDidChange:(id)arg1 ;
-(void)setInteractionEffect:(id<UIInteractionEffect>)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(_UIClickFeedbackGenerator *)feedbackGenerator;
-(double)allowableMovement;
-(void)willMoveToView:(id)arg1 ;
-(BOOL)driverCancelsTouchesInView;
-(id<_UIClickInteractionDriving>)driver;
-(void)setDelegate:(id<_UIClickInteractionDelegate>)arg1 ;
-(void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2 ;
-(UIView *)view;
-(void)cancelInteraction;
-(id<UIInteractionEffect>)interactionEffect;
-(void)_setOverrideDriverClass:(Class)arg1 ;
-(void)_endInteraction;
-(void)setHapticsEnabled:(BOOL)arg1 ;
-(Class)_driverClass;
-(void)setDriverCancelsTouchesInView:(BOOL)arg1 ;
-(Class)overrideDriverClass;
@end

