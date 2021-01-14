/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContainerPropertyDescription.h>

@interface CNContainerRestrictionsDescription : CNContainerPropertyDescription
-(Class)valueClass;
-(id)CNValueFromABValue:(void*)arg1 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueForContainer:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContainer:(id)arg2 ;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)isWritable;
-(id)key;
-(int)abPropertyID;
-(BOOL)isConvertibleABValue:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(_CFError*)arg3 ;
@end

