/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>
#import <UIKit/UIInteractionProgressObserver.h>

@class UIInteractionProgress, NSString;

@interface CSLocketForcePressGestureRecognizer : UILongPressGestureRecognizer <UIInteractionProgressObserver> {

	UIInteractionProgress* _interactionProgress;
	BOOL _forceTouchCompleted;

}

@property (assign,nonatomic) BOOL forceTouchCompleted;              //@synthesize forceTouchCompleted=_forceTouchCompleted - In the implementation block
@property (nonatomic,readonly) double percentComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)percentComplete;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(BOOL)forceTouchCompleted;
-(void)setForceTouchCompleted:(BOOL)arg1 ;
@end

