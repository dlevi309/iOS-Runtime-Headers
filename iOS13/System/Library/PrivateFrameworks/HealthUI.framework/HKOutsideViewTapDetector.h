/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UIView, NSString;

@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _recognizer;
	UIView* _view;
	/*^block*/id _outsideTapBlock;

}

@property (nonatomic,retain) UITapGestureRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (nonatomic,retain) UIView * view;                                    //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) id outsideTapBlock;                                 //@synthesize outsideTapBlock=_outsideTapBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)handleTap:(id)arg1 ;
-(id)initWithView:(id)arg1 outsideTapBlock:(/*^block*/id)arg2 ;
-(UITapGestureRecognizer *)recognizer;
-(id)outsideTapBlock;
-(void)setRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setOutsideTapBlock:(id)arg1 ;
@end

