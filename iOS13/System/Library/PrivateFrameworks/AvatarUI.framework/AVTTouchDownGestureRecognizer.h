/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSHashTable, NSString;

@interface AVTTouchDownGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	BOOL _allowsTouchesToPassThrough;
	NSHashTable* _recognizersRequiredToFail;

}

@property (nonatomic,retain) NSHashTable * recognizersRequiredToFail;              //@synthesize recognizersRequiredToFail=_recognizersRequiredToFail - In the implementation block
@property (assign,nonatomic) BOOL allowsTouchesToPassThrough;                      //@synthesize allowsTouchesToPassThrough=_allowsTouchesToPassThrough - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_configure;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(void)setAllowsTouchesToPassThrough:(BOOL)arg1 ;
-(BOOL)allowsTouchesToPassThrough;
-(NSHashTable *)recognizersRequiredToFail;
-(void)setRecognizersRequiredToFail:(NSHashTable *)arg1 ;
@end

