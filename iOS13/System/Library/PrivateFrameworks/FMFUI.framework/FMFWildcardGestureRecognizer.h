/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface FMFWildcardGestureRecognizer : UIGestureRecognizer {

	/*^block*/id _touchesBeganCallback;
	/*^block*/id _touchesEndedCallback;

}

@property (nonatomic,copy) id touchesBeganCallback;              //@synthesize touchesBeganCallback=_touchesBeganCallback - In the implementation block
@property (nonatomic,copy) id touchesEndedCallback;              //@synthesize touchesEndedCallback=_touchesEndedCallback - In the implementation block
-(id)init;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)ignoreTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)setTouchesBeganCallback:(id)arg1 ;
-(void)setTouchesEndedCallback:(id)arg1 ;
-(id)touchesBeganCallback;
-(id)touchesEndedCallback;
@end

