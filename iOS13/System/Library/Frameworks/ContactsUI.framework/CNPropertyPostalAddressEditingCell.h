/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyEditingCell.h>

@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell {

	CNPostalAddressEditorView* _addressEditor;

}

@property (nonatomic,retain) CNPostalAddressEditorView * addressEditor;              //@synthesize addressEditor=_addressEditor - In the implementation block
@property (nonatomic,copy) UIColor * editorSeparatorColor; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(id)valueView;
-(id)variableConstraints;
-(void)setPresentingDelegate:(id)arg1 ;
-(id)firstResponderItem;
-(void)updateWithPropertyItem:(id)arg1 ;
-(double)leftValueMargin;
-(CNPostalAddressEditorView *)addressEditor;
-(void)valueChanged:(id)arg1 ;
-(void)layoutChanged:(id)arg1 ;
-(void)setEditorSeparatorColor:(UIColor *)arg1 ;
-(UIColor *)editorSeparatorColor;
-(void)setAddressEditor:(CNPostalAddressEditorView *)arg1 ;
@end

