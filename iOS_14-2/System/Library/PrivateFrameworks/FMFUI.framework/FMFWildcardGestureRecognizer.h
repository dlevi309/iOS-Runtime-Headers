/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface FMFWildcardGestureRecognizer : UIGestureRecognizer {

	/*^block*/id _touchesBeganCallback;
	/*^block*/id _touchesEndedCallback;

}

@property (nonatomic,copy) id touchesBeganCallback;              //@synthesize touchesBeganCallback=_touchesBeganCallback - In the implementation block
@property (nonatomic,copy) id touchesEndedCallback;              //@synthesize touchesEndedCallback=_touchesEndedCallback - In the implementation block
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)init;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)ignoreTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)setTouchesBeganCallback:(id)arg1 ;
-(void)setTouchesEndedCallback:(id)arg1 ;
-(id)touchesBeganCallback;
-(id)touchesEndedCallback;
@end

