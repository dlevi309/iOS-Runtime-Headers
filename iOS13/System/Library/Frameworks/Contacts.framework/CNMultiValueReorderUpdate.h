/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNMultiValueUpdate.h>

@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate {

	NSOrderedSet* _values;

}

@property (nonatomic,copy,readonly) NSOrderedSet * values;              //@synthesize values=_values - In the implementation block
-(id)description;
-(NSOrderedSet *)values;
-(id)initWithValues:(id)arg1 ;
-(void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id*)arg5 ;
-(long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2 ;
@end

