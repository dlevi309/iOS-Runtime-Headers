/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SXComponentInteractionManager.h>

@protocol SXComponentInteractionManager <NSObject>
@required
-(void)commitViewController:(id)arg1;
-(BOOL)hasInteractionForLocation:(CGPoint)arg1;
-(id)previewViewControllerForLocation:(CGPoint)arg1;

@end


@protocol SXComponentInteractionHandlerManager;
@class SXViewport, UITapGestureRecognizer, UILongPressGestureRecognizer, SXDelayed, SXComponentInteractionPreview, SXComponentView, NSString;

@interface SXComponentInteractionManager : NSObject <UIGestureRecognizerDelegate, SXComponentInteractionManager> {

	id<SXComponentInteractionHandlerManager> _interactionHandlerManager;
	SXViewport* _viewport;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	SXDelayed* _longPressDelay;
	SXComponentInteractionPreview* _currentPreview;
	SXComponentView* _currentComponentView;
	CGPoint _longPressStartLocation;

}

@property (nonatomic,readonly) id<SXComponentInteractionHandlerManager> interactionHandlerManager;              //@synthesize interactionHandlerManager=_interactionHandlerManager - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                                           //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                                   //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;                       //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SXDelayed * longPressDelay;                                                        //@synthesize longPressDelay=_longPressDelay - In the implementation block
@property (assign,nonatomic) CGPoint longPressStartLocation;                                                    //@synthesize longPressStartLocation=_longPressStartLocation - In the implementation block
@property (nonatomic,retain) SXComponentInteractionPreview * currentPreview;                                    //@synthesize currentPreview=_currentPreview - In the implementation block
@property (nonatomic,retain) SXComponentView * currentComponentView;                                            //@synthesize currentComponentView=_currentComponentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)handleLongPressGesture:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)handleTapGesture:(id)arg1 ;
-(void)commitViewController:(id)arg1 ;
-(BOOL)hasInteractionForLocation:(CGPoint)arg1 ;
-(id)previewViewControllerForLocation:(CGPoint)arg1 ;
-(id<SXComponentInteractionHandlerManager>)interactionHandlerManager;
-(void)setCurrentPreview:(SXComponentInteractionPreview *)arg1 ;
-(SXComponentInteractionPreview *)currentPreview;
-(id)initWithInteractionHandlerManager:(id)arg1 viewport:(id)arg2 ;
-(void)cancelInteractionForComponentView:(id)arg1 ;
-(void)animateHighlight:(BOOL)arg1 forComponentView:(id)arg2 ;
-(void)handleInteraction:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)toggleHighlightForComponentView:(id)arg1 ;
-(void)setCurrentComponentView:(SXComponentView *)arg1 ;
-(void)setLongPressStartLocation:(CGPoint)arg1 ;
-(SXComponentView *)currentComponentView;
-(void)setLongPressDelay:(SXDelayed *)arg1 ;
-(CGPoint)longPressStartLocation;
-(SXDelayed *)longPressDelay;
-(void)updateHighlight:(BOOL)arg1 forComponentView:(id)arg2 ;
@end

