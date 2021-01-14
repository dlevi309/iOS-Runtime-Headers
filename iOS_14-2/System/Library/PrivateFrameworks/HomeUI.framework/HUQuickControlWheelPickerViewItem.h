/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSelected;
-(NSString *)text;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithHFTVInputControlItemValue:(id)arg1 ;
-(id)initWithHFMultiStateControlItemValue:(id)arg1 text:(id)arg2 isSelected:(BOOL)arg3 ;
@end

