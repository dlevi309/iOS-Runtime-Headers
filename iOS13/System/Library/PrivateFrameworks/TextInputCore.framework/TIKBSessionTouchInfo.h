/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIKeyboardTouchEvent;

@interface TIKBSessionTouchInfo : NSObject {

	TIKeyboardTouchEvent* _touch;
	unsigned long long _layoutId;

}

@property (nonatomic,retain) TIKeyboardTouchEvent * touch;              //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) unsigned long long layoutId;               //@synthesize layoutId=_layoutId - In the implementation block
-(TIKeyboardTouchEvent *)touch;
-(void)setTouch:(TIKeyboardTouchEvent *)arg1 ;
-(unsigned long long)layoutId;
-(void)setLayoutId:(unsigned long long)arg1 ;
@end

