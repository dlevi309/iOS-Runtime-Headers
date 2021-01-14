/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (retain,readonly) UIView * twoFingerDraggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) CGRect popoverFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(NSArray *)constraints;
-(BOOL)allConstraintsActive;
-(CGPoint)origin;
-(UIEdgeInsets)contentInsets;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(void)applyChanges:(id)arg1 ;
-(UIView *)draggableView;
-(CGRect)popoverFrame;
-(CGRect)targetRect;
-(NSString *)description;
-(UIView *)twoFingerDraggableView;
-(id)initForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(void)invalidate;
-(void)prepare;
-(BOOL)isEqual:(id)arg1 ;
-(void)checkVerticalConstraint;
@end

