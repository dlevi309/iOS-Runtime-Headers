/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)geminiDataSourceDidUpdate:(id)arg1 ;
-(NSString *)description;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(CNMutableContact *)editingContact;
-(void)setEditingContact:(CNMutableContact *)arg1 ;
-(BOOL)canRemove;
-(CNGeminiResult *)geminiResult;
-(BOOL)isValidValue:(id)arg1 ;
-(id)displayLabel;
-(id<CNUIGeminiDataSourceDelegate>)geminiUpdateDelegate;
-(void)setGeminiUpdateDelegate:(id<CNUIGeminiDataSourceDelegate>)arg1 ;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(id)displayValue;
-(void)updateLabeledValueWithValue:(id)arg1 ;
@end

