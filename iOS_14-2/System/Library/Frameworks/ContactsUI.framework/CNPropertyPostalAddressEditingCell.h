/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyEditingCell.h>

@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell {

	CNPostalAddressEditorView* _addressEditor;

}

@property (nonatomic,retain) CNPostalAddressEditorView * addressEditor;              //@synthesize addressEditor=_addressEditor - In the implementation block
@property (nonatomic,copy) UIColor * editorSeparatorColor; 
-(void)layoutMarginsDidChange;
-(void)setPresentingDelegate:(id)arg1 ;
-(id)valueView;
-(void)setBackgroundColor:(id)arg1 ;
-(CNPostalAddressEditorView *)addressEditor;
-(void)valueChanged:(id)arg1 ;
-(void)layoutChanged:(id)arg1 ;
-(void)setEditorSeparatorColor:(UIColor *)arg1 ;
-(UIColor *)editorSeparatorColor;
-(void)setAddressEditor:(CNPostalAddressEditorView *)arg1 ;
-(id)variableConstraints;
-(id)firstResponderItem;
-(void)updateWithPropertyItem:(id)arg1 ;
-(double)leftValueMargin;
@end

