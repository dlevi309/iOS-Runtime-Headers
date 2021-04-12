/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNPolicy : NSObject

@property (getter=isReadonly,nonatomic,readonly) BOOL readonly; 
-(BOOL)isReadonly;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(BOOL)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4 ;
-(BOOL)shouldAddContact:(id)arg1 ;
-(BOOL)shouldRemoveContact:(id)arg1 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
-(BOOL)_validateLabeledValueArrayLabels:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id*)arg3 ;
-(BOOL)_validateLabeledValueArrayAttributeSupport:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id*)arg3 ;
-(id)_replacementLabeledValue:(id)arg1 omittingKeys:(id)arg2 ;
@end

