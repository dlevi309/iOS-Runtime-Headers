/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKTimestampEvent.h>

@class TIKeyboardLayout;

@interface TISKLayoutSwitchEvent : TISKTimestampEvent {

	TIKeyboardLayout* _layout;

}

@property (nonatomic,retain) TIKeyboardLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)description;
-(void)setLayout:(TIKeyboardLayout *)arg1 ;
-(TIKeyboardLayout *)layout;
-(double)touchDownTimestamp;
-(double)touchUpTimestamp;
-(id)init:(double)arg1 layout:(id)arg2 order:(long long)arg3 ;
@end

