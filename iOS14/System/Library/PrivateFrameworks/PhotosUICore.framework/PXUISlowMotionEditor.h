/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSlowMotionEditor.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPanGestureRecognizer, UITapGestureRecognizer, UIImpactFeedbackGenerator, NSString;

@interface PXUISlowMotionEditor : PXSlowMotionEditor <UIGestureRecognizerDelegate> {

	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _tapGesture;
	UIImpactFeedbackGenerator* _impactGenerator;

}

@property (nonatomic,retain) UIPanGestureRecognizer * panGesture;                      //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                      //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactGenerator;              //@synthesize impactGenerator=_impactGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handleImage;
+(id)createSnappingControllerWithSnappingTarget:(double)arg1 ;
-(id)init;
-(void)_handlePan:(id)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)_handleBeginPanGesture:(id)arg1 ;
-(void)_PXUISlowMotionEditor_commonInit;
-(void)_handleChangePanGesture:(id)arg1 ;
-(void)_handleEndPanGesture:(id)arg1 ;
-(void)prepareForImpact;
-(void)impactOccured;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UIImpactFeedbackGenerator *)impactGenerator;
-(void)setImpactGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(UIPanGestureRecognizer *)panGesture;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
@end

