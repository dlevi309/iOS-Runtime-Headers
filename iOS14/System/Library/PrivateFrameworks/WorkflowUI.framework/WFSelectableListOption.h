/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString;

@interface WFSelectableListOption : NSObject {

	BOOL _selected;
	NSString* _displayTitle;
	id _value;

}

@property (nonatomic,copy,readonly) NSString * displayTitle;               //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,readonly) id value;                                   //@synthesize value=_value - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)displayTitle;
-(id)value;
-(id)initWithDisplayTitle:(id)arg1 value:(id)arg2 ;
@end

