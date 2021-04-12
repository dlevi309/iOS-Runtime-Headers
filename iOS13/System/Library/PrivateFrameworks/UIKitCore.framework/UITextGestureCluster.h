/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITextGestureClusterViewDelegate;
@class NSMutableArray, NSMutableDictionary, UIView, NSDictionary, NSArray, NSString;

@interface UITextGestureCluster : NSObject <UIGestureRecognizerDelegate> {

	UITextGestureCluster* _parent;
	NSMutableArray* _children;
	NSMutableDictionary* _gestures;
	UIView* _view;
	BOOL _inGesture;
	id<UITextGestureClusterViewDelegate> _delegate;

}

@property (nonatomic,retain,readonly) NSDictionary * gestures;                                  //@synthesize gestures=_gestures - In the implementation block
@property (nonatomic,retain,readonly) NSArray * children;                                       //@synthesize children=_children - In the implementation block
@property (assign,nonatomic,__weak) id<UITextGestureClusterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) UITextGestureCluster * parent; 
@property (__weak,readonly) UITextGestureCluster * root; 
@property (assign,nonatomic) BOOL inGesture;                                                    //@synthesize inGesture=_inGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)addChild:(id)arg1 ;
-(UITextGestureCluster *)parent;
-(id<UITextGestureClusterViewDelegate>)delegate;
-(void)setDelegate:(id<UITextGestureClusterViewDelegate>)arg1 ;
-(UITextGestureCluster *)root;
-(NSArray *)children;
-(void)removeChild:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(id)recursiveDescription;
-(id)recognizerForName:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 withName:(id)arg2 ;
-(void)setInGesture:(BOOL)arg1 ;
-(void)turnOffDrawsAsAtomIfPlainStyleAtom;
-(void)disableClearsOnInsertion;
-(BOOL)inGesture;
-(id)textInput;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(void)detach;
-(NSDictionary *)gestures;
-(void)resetForLink;
-(BOOL)doesControlDelegate;
-(void)completeInitialisation;
-(void)_resetForLink;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(BOOL)shouldClusterAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(id)gestureWithName:(id)arg1 ;
-(BOOL)shouldHandleFormGestureAtLocation:(CGPoint)arg1 ;
-(BOOL)cluster_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)cluster_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isInteractingWithLink;
-(BOOL)shouldIgnoreLinkGestures;
-(id)linkInteractionView;
-(id)defaultDoubleTapRecognizerWithAction:(SEL)arg1 ;
-(id)defaultTapRecognizerWithAction:(SEL)arg1 ;
-(void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting;
-(BOOL)containerChangesSelectionOnOneFingerTap;
-(double)distanceBetweenPoint:(CGPoint)arg1 andRange:(id)arg2 ;
-(BOOL)_shouldObscureTextInput;
@end

