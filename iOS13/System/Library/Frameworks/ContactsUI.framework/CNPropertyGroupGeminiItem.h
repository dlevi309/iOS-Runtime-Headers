/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyGroupItem.h>
#import <libobjc.A.dylib/CNUIGeminiDataSourceDelegate.h>

@protocol CNUIGeminiDataSourceDelegate;
@class CNGeminiResult, CNMutableContact, NSString;

@interface CNPropertyGroupGeminiItem : CNPropertyGroupItem <CNUIGeminiDataSourceDelegate> {

	CNGeminiResult* _geminiResult;
	id<CNUIGeminiDataSourceDelegate> _geminiUpdateDelegate;
	CNMutableContact* _editingContact;

}

@property (nonatomic,retain) CNMutableContact * editingContact;                                         //@synthesize editingContact=_editingContact - In the implementation block
@property (nonatomic,retain) CNGeminiResult * geminiResult;                                             //@synthesize geminiResult=_geminiResult - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIGeminiDataSourceDelegate> geminiUpdateDelegate;              //@synthesize geminiUpdateDelegate=_geminiUpdateDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)displayValue;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(CNMutableContact *)editingContact;
-(void)setEditingContact:(CNMutableContact *)arg1 ;
-(CNGeminiResult *)geminiResult;
-(id)displayLabel;
-(void)geminiDataSourceDidUpdate:(id)arg1 ;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isValidValue:(id)arg1 ;
-(BOOL)canRemove;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(void)updateLabeledValueWithValue:(id)arg1 ;
-(id<CNUIGeminiDataSourceDelegate>)geminiUpdateDelegate;
-(void)setGeminiUpdateDelegate:(id<CNUIGeminiDataSourceDelegate>)arg1 ;
@end

