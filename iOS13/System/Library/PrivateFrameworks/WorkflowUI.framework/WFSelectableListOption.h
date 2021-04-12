/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)value;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)displayTitle;
-(id)initWithDisplayTitle:(id)arg1 value:(id)arg2 ;
@end

