/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKActionMenuGestureRecognizer *)gestureRecognizer;
-(UIButton *)button;
-(id<CKActionMenuGestureRecognizerButtonDelegate>)delegate;
-(void)setButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<CKActionMenuGestureRecognizerButtonDelegate>)arg1 ;
-(void)gestureRecognized:(id)arg1 ;
-(void)touchUpInsideButton:(id)arg1 ;
-(void)touchDownButton:(id)arg1 ;
-(NSDate *)gestureDidBeginDate;
-(id)initWithGestureRecognizer:(id)arg1 button:(id)arg2 ;
-(void)touchUpOutsideButton:(id)arg1 ;
-(void)setGestureDidBeginDate:(NSDate *)arg1 ;
-(void)setGestureRecognizer:(CKActionMenuGestureRecognizer *)arg1 ;
@end

