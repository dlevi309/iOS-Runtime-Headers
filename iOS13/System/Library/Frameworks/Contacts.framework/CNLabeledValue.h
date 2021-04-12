/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNSuggested.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, NSString, CNLabelValuePair, NSDictionary, NSSet;

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding> {

	CNLabelValuePair* _labelValuePair;
	NSString* _identifier;
	int _iOSLegacyIdentifier;
	NSString* _storeIdentifier;
	NSDictionary* _storeInfo;
	NSSet* _linkedIdentifiers;
	BOOL _isValueMutable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (nonatomic,readonly) NSString * suggestionFoundInBundleId; 
@property (readonly) CNLabelValuePair * labelValuePair;                               //@synthesize labelValuePair=_labelValuePair - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * linkedIdentifiers;                                 //@synthesize linkedIdentifiers=_linkedIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * storeInfo;                                  //@synthesize storeInfo=_storeInfo - In the implementation block
@property (assign,nonatomic) int iOSLegacyIdentifier;                                 //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding> value; 
+(BOOL)supportsSecureCoding;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)identifierProvider;
+(id)makeIdentifier;
+(/*^block*/id)testMatchingIdentifier:(id)arg1 ;
+(id)propertyDescriptionOwnersByLabel;
+(id)localizedStringForLabel:(id)arg1 ;
+(id)entryForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)labelForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)valueForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
+(BOOL)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2 ;
+(id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2 ;
+(id)emptyEntries;
+(id)allValuesInArray:(id)arg1 ;
+(id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(NSString *)label;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(int)iOSLegacyIdentifier;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSDictionary *)storeInfo;
-(id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(id)primitiveInitWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(NSSet *)linkedIdentifiers;
-(void)setLinkedIdentifiers:(NSSet *)arg1 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(CNLabelValuePair *)labelValuePair;
-(id)labeledValueBySettingLabel:(id)arg1 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(void)addStoreInfo:(id)arg1 ;
-(BOOL)isEqualToLabeledValue:(id)arg1 ;
-(BOOL)isEqualToLabeledValue:(id)arg1 includeIdentifiers:(BOOL)arg2 ;
-(BOOL)isSuggested;
-(SGRecordId *)suggestionRecordId;
-(NSString *)suggestionFoundInBundleId;
-(id)valueOrigin;
@end

