/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMapTable;

@interface PKTextInputTouchDetectionGestureRecognizer : UIGestureRecognizer {

	NSMapTable* __touches;

}

@property (nonatomic,retain) NSMapTable * _touches;                                                               //@synthesize _touches=__touches - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputTouchDetectionGestureRecognizerDelegate> delegate; 
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)init;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(NSMapTable *)_touches;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)recognizeTouch;
-(void)recognizeTouch:(id)arg1 afterThreshold:(double)arg2 ;
-(void)set_touches:(NSMapTable *)arg1 ;
@end

