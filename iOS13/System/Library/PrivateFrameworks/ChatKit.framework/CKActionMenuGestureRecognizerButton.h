/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKActionMenuGestureRecognizerButtonDelegate;
@class CKActionMenuGestureRecognizer, UIButton, NSDate;

@interface CKActionMenuGestureRecognizerButton : NSObject {

	CKActionMenuGestureRecognizer* _gestureRecognizer;
	UIButton* _button;
	id<CKActionMenuGestureRecognizerButtonDelegate> _delegate;
	NSDate* _gestureDidBeginDate;

}

@property (nonatomic,retain) CKActionMenuGestureRecognizer * gestureRecognizer;                            //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                            //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSDate * gestureDidBeginDate;                                                 //@synthesize gestureDidBeginDate=_gestureDidBeginDate - In the implementation block
@property (assign,nonatomic,__weak) id<CKActionMenuGestureRecognizerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)actionMenuGestureRecognizerButtonWithButton:(id)arg1 ;
-(id<CKActionMenuGestureRecognizerButtonDelegate>)delegate;
-(void)setDelegate:(id<CKActionMenuGestureRecognizerButtonDelegate>)arg1 ;
-(UIButton *)button;
-(void)setGestureRecognizer:(CKActionMenuGestureRecognizer *)arg1 ;
-(CKActionMenuGestureRecognizer *)gestureRecognizer;
-(void)setButton:(UIButton *)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 button:(id)arg2 ;
-(void)gestureRecognized:(id)arg1 ;
-(void)touchDownButton:(id)arg1 ;
-(void)touchUpInsideButton:(id)arg1 ;
-(void)touchUpOutsideButton:(id)arg1 ;
-(void)setGestureDidBeginDate:(NSDate *)arg1 ;
-(NSDate *)gestureDidBeginDate;
@end

