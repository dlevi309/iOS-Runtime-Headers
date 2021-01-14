/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIContextMenuSelectionGestureRecognizer : UIGestureRecognizer {

	CGVector _allowableMovement;
	CGPoint _originalLocation;

}

@property (assign,nonatomic) CGPoint originalLocation;                //@synthesize originalLocation=_originalLocation - In the implementation block
@property (assign,nonatomic) CGVector allowableMovement;              //@synthesize allowableMovement=_allowableMovement - In the implementation block
+(BOOL)_supportsTouchContinuation;
-(void)setAllowableMovement:(CGVector)arg1 ;
-(id)init;
-(void)_cancelOrFail;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGVector)allowableMovement;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setOriginalLocation:(CGPoint)arg1 ;
-(CGPoint)originalLocation;
@end

