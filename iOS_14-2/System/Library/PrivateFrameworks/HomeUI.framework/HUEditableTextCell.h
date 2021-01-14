/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTitleValueCell.h>
#import <libobjc.A.dylib/HUEditableTextCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class UITextField, NSString;

@interface HUEditableTextCell : HUTitleValueCell <HUEditableTextCellProtocol, HUDisableableCellProtocol> {

	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;                    //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UITextField *)textField;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

