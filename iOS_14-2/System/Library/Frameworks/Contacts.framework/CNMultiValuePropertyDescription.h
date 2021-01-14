/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPropertyDescription.h>

@class NSArray;

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (nonatomic,readonly) Class valueClass; 
@property (nonatomic,readonly) BOOL isSingleValue; 
@property (nonatomic,readonly) BOOL isMultiValue; 
@property (nonatomic,readonly) NSArray * standardLabels; 
@property (nonatomic,readonly) NSArray * managedLabels; 
@property (nonatomic,readonly) Class labeledValueClass; 
@property (nonatomic,readonly) id plistTransform; 
@property (nonatomic,readonly) id fromPlistTransform; 
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2 ;
-(Class)valueClass;
-(id)CNValueFromABValue:(void*)arg1 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(BOOL)isMultiValue;
-(BOOL)applyABMultivalueValueBytes:(char*)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6 ;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(NSArray *)managedLabels;
-(id)plistTransform;
-(id)fromPlistTransform;
-(Class)labeledValueClass;
-(id)stringForIndexingForContact:(id)arg1 ;
-(BOOL)isValidMultiValueValue:(id)arg1 error:(id*)arg2 ;
-(id)standardLabelsWithOptions:(unsigned long long)arg1 ;
-(unsigned)abPropertyType;
-(id)CNMutableValueForABMultivalue;
-(BOOL)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5 ;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)applyCNValue:(id)arg1 toArray:(id)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
-(id)valueWithResetIdentifiers:(id)arg1 ;
-(void)assertValueType:(id)arg1 ;
-(id)localizedStringForLabel:(id)arg1 ;
-(void*)ABMutableMultiValueForABPerson:(void*)arg1 ;
-(BOOL)isSingleValue;
-(id)CNLabeledValueLabelFromABMultiValueLabel:(CFStringRef)arg1 ;
-(CFStringRef)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3 ;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2 ;
-(NSArray *)standardLabels;
@end

