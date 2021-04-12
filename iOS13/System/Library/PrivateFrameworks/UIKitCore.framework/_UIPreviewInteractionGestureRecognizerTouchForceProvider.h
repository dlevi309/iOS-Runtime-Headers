/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding.h>

@class UITouchForceGestureRecognizer, NSString;

@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding> {

	BOOL _active;
	UITouchForceGestureRecognizer* _gestureRecognizer;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) UITouchForceGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double touchForce; 
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(void)setGestureRecognizer:(UITouchForceGestureRecognizer *)arg1 ;
-(UITouchForceGestureRecognizer *)gestureRecognizer;
-(void)cancelInteraction;
-(double)touchForce;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(id)initWithView:(id)arg1 configuration:(/*^block*/id)arg2 ;
@end

