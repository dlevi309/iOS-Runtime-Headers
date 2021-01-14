/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class NSString;

@interface CNAutocompleteResultValue : NSObject {

	NSString* _address;
	long long _addressType;
	NSString* _instantMessageAddressService;
	NSString* _identifier;
	NSString* _label;
	NSString* _stringForHashingMemo;

}

@property (nonatomic,copy) NSString * stringForHashingMemo;              //@synthesize stringForHashingMemo=_stringForHashingMemo - In the implementation block
@property (copy) NSString * address;                                     //@synthesize address=_address - In the implementation block
@property (assign) long long addressType;                                //@synthesize addressType=_addressType - In the implementation block
@property (copy) NSString * instantMessageAddressService;                //@synthesize instantMessageAddressService=_instantMessageAddressService - In the implementation block
@property (copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * label;                                       //@synthesize label=_label - In the implementation block
+(id)resultValueWithAddress:(id)arg1 addressType:(long long)arg2 ;
+(id)stringForHashingValue:(id)arg1 ;
+(id)normalizedAddressForValue:(id)arg1 ;
-(void)setAddressType:(long long)arg1 ;
-(long long)addressType;
-(id)description;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInstantMessageAddressService:(NSString *)arg1 ;
-(NSString *)instantMessageAddressService;
-(NSString *)stringForHashingMemo;
-(void)setStringForHashingMemo:(NSString *)arg1 ;
-(id)addressTypeDescription;
-(id)stringForHashing;
-(id)stringForSorting;
-(BOOL)addressExactlyMatchesSearchTerm:(id)arg1 ;
@end

