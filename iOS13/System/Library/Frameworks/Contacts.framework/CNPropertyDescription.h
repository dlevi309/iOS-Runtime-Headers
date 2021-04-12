/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CNPropertyDescription : NSObject <NSSecureCoding, NSCopying> {

	NSString* _key;
	SEL _readSelector;
	SEL _writeSelector;
	/*^block*/id _valueForKeyTransform;
	BOOL _isNonnull;

}

@property (nonatomic,readonly) SEL readSelector;                           //@synthesize readSelector=_readSelector - In the implementation block
@property (nonatomic,readonly) SEL writeSelector;                          //@synthesize writeSelector=_writeSelector - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) Class valueClass; 
@property (nonatomic,readonly) BOOL isSingleValue; 
@property (nonatomic,readonly) BOOL isMultiValue; 
@property (nonatomic,readonly) BOOL isNonnull;                             //@synthesize isNonnull=_isNonnull - In the implementation block
@property (nonatomic,copy,readonly) id valueForKeyTransform;               //@synthesize valueForKeyTransform=_valueForKeyTransform - In the implementation block
@property (nonatomic,readonly) id nilValue; 
@property (nonatomic,readonly) NSArray * equivalentLabelSets; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)valueClass;
-(BOOL)supportsABLazyLoading;
-(id)nilValue;
-(BOOL)isWritable;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2 ;
-(BOOL)isNonnull;
-(id)CNValueForContact:(id)arg1 ;
-(id)initWithKey:(id)arg1 readSelector:(SEL)arg2 writeSelector:(SEL)arg3 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(void)resetGuardianManagedValueOnContact:(id)arg1 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(BOOL)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2 ;
-(NSArray *)equivalentLabelSets;
-(id)stringForIndexingForContact:(id)arg1 ;
-(BOOL)isMultiValue;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(id)unifiableLabelsForLabel:(id)arg1 ;
-(id)valueForKeyTransform;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)CNMutableValueForABMultivalue;
-(BOOL)applyABMultivalueValueBytes:(char*)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6 ;
-(BOOL)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5 ;
-(id)CNValueFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)valueWithResetIdentifiers:(id)arg1 ;
-(BOOL)setCNValue:(id)arg1 onABPerson:(void*)arg2 withDependentPropertiesContext:(id)arg3 error:(id*)arg4 ;
-(void*)ABValueForABPerson:(void*)arg1 ;
-(void)assertValueType:(id)arg1 ;
-(void)copyFromABPerson:(void*)arg1 toContact:(id)arg2 ;
-(BOOL)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(_CFError*)arg3 ;
-(BOOL)isSingleValue;
-(SEL)readSelector;
-(SEL)writeSelector;
@end

