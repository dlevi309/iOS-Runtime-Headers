/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKTimestampEvent.h>

@class TIKeyboardLayout;

@interface TISKLayoutSwitchEvent : TISKTimestampEvent {

	TIKeyboardLayout* _layout;

}

@property (nonatomic,retain) TIKeyboardLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)description;
-(TIKeyboardLayout *)layout;
-(void)setLayout:(TIKeyboardLayout *)arg1 ;
-(double)touchDownTimestamp;
-(double)touchUpTimestamp;
-(id)init:(double)arg1 layout:(id)arg2 order:(long long)arg3 ;
@end

