/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNContactTypeDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(Class)valueClass;
-(id)nilValue;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(id)CNValueForContact:(id)arg1 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)CNValueFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
@end

