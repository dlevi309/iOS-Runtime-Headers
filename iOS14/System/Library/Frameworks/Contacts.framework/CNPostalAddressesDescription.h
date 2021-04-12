/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNCompoundMultiValuePropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)CNValueForContact:(id)arg1 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)init;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(Class)labeledValueClass;
-(BOOL)isNonnull;
-(/*^block*/id)dictionaryTransform;
-(/*^block*/id)fromDictionaryTransform;
-(id)summarizationKeys;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
@end

