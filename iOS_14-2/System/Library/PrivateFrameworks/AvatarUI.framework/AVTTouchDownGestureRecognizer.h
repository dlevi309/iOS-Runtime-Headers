/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_configure;
-(id)init;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(void)setAllowsTouchesToPassThrough:(BOOL)arg1 ;
-(BOOL)allowsTouchesToPassThrough;
-(NSHashTable *)recognizersRequiredToFail;
-(void)setRecognizersRequiredToFail:(NSHashTable *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

