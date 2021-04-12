/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInputViewSetPlacementApplicator.h>

@protocol UIInputViewSetPlacementOwner;
@class NSArray, UIView, NSLayoutConstraint, NSString;

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {

	NSLayoutConstraint* _horizontalConstraint;
	NSLayoutConstraint* _verticalConstraint;
	NSLayoutConstraint* _widthConstraint;
	id<UIInputViewSetPlacementOwner> _owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (retain,readonly) UIView * twoFingerDraggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) CGRect popoverFrame; 
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(NSArray *)constraints;
-(CGPoint)origin;
-(UIEdgeInsets)contentInsets;
-(void)prepare;
-(CGRect)targetRect;
-(id)initForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(UIView *)draggableView;
-(void)checkVerticalConstraint;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(BOOL)allConstraintsActive;
-(void)applyChanges:(id)arg1 ;
-(UIView *)twoFingerDraggableView;
-(CGRect)popoverFrame;
@end

