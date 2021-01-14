/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PTSRow.h>

@interface PTEditStringRow : PTSRow
+(void)_px_configureTextField:(id)arg1 withTextPlaceholder:(id)arg2 saveAction:(id)arg3 forRow:(id)arg4 ;
+(id)px_rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 textPlaceholder:(id)arg5 textValidator:(/*^block*/id)arg6 condition:(id)arg7 ;
+(BOOL)supportsSecureCoding;
-(void)setValue:(id)arg1 ;
-(/*^block*/id)_px_editStringRowTextValidationAction;
-(/*^block*/id)_px_editStringRowTextFieldAction;
-(void)_px_setEditStringRowTextValidationAction:(/*^block*/id)arg1 ;
-(id)_px_validatedTextFromText:(id)arg1 ;
-(void)_px_setEditStringRowTextFieldAction:(/*^block*/id)arg1 ;
-(void)_px_updateSaveActionFromTextField;
-(Class)tableViewCellClass;
@end

