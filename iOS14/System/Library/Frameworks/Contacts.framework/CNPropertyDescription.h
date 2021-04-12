/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2 ;
-(id)CNValueForContact:(id)arg1 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(Class)valueClass;
-(id)CNValueFromABValue:(void*)arg1 ;
-(SEL)readSelector;
-(SEL)writeSelector;
-(void)resetGuardianManagedValueOnContact:(id)arg1 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isMultiValue;
-(BOOL)applyABMultivalueValueBytes:(char*)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6 ;
-(BOOL)supportsABLazyLoading;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)isWritable;
-(BOOL)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2 ;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 readSelector:(SEL)arg2 writeSelector:(SEL)arg3 ;
-(BOOL)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2 ;
-(BOOL)isNonnull;
-(NSArray *)equivalentLabelSets;
-(id)stringForIndexingForContact:(id)arg1 ;
-(id)nilValue;
-(id)valueForKeyTransform;
-(void*)ABValueForABPerson:(void*)arg1 ;
-(id)unifiableLabelsForLabel:(id)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(_CFError*)arg3 ;
-(id)CNMutableValueForABMultivalue;
-(BOOL)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5 ;
-(id)valueWithResetIdentifiers:(id)arg1 ;
-(void)assertValueType:(id)arg1 ;
-(void)copyFromABPerson:(void*)arg1 toContact:(id)arg2 ;
-(BOOL)setCNValue:(id)arg1 onABPerson:(void*)arg2 withDependentPropertiesContext:(id)arg3 error:(id*)arg4 ;
-(BOOL)isSingleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

