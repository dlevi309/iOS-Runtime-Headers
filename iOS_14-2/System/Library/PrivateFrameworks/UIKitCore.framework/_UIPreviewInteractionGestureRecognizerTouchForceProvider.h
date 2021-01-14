/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_handleGestureRecognizer:(id)arg1 ;
-(UITouchForceGestureRecognizer *)gestureRecognizer;
-(void)setActive:(BOOL)arg1 ;
-(double)touchForce;
-(BOOL)isActive;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)cancelInteraction;
-(void)setGestureRecognizer:(UITouchForceGestureRecognizer *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(id)initWithView:(id)arg1 configuration:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

