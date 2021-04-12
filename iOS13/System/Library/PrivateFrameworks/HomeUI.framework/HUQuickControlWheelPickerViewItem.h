/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSString;

@interface HUQuickControlWheelPickerViewItem : NSObject {

	BOOL _isSelected;
	id _value;
	NSString* _text;

}

@property (nonatomic,copy,readonly) id value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                   //@synthesize isSelected=_isSelected - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)value;
-(NSString *)text;
-(BOOL)isSelected;
-(id)initWithHFTVInputControlItemValue:(id)arg1 ;
-(id)initWithHFMultiStateControlItemValue:(id)arg1 text:(id)arg2 isSelected:(BOOL)arg3 ;
@end

