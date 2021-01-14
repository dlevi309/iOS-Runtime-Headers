/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNMultiValueUpdate.h>

@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate {

	NSOrderedSet* _values;

}

@property (nonatomic,copy,readonly) NSOrderedSet * values;              //@synthesize values=_values - In the implementation block
-(NSOrderedSet *)values;
-(long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2 ;
-(id)description;
-(void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(id)initWithValues:(id)arg1 ;
-(BOOL)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id*)arg5 ;
@end

