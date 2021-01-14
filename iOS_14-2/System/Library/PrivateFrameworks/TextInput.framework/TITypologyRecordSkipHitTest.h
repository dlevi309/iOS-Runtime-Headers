/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardTouchEvent, TIKeyboardState, TIKeyboardLayout;

@interface TITypologyRecordSkipHitTest : TITypologyRecord {

	TIKeyboardTouchEvent* _touchEvent;
	TIKeyboardState* _keyboardState;
	TIKeyboardLayout* _keyLayout;

}

@property (nonatomic,retain) TIKeyboardTouchEvent * touchEvent;              //@synthesize touchEvent=_touchEvent - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                   //@synthesize keyLayout=_keyLayout - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(TIKeyboardTouchEvent *)touchEvent;
-(void)setTouchEvent:(TIKeyboardTouchEvent *)arg1 ;
-(id)currentKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(TIKeyboardLayout *)keyLayout;
-(void)replaceDocumentState:(id)arg1 ;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
@end

