/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNHandleStringClassification, NSMutableArray, NSArray;

@interface CNContactClassifiedHandleStringInterpreter : NSObject {

	BOOL _hasBeenInterpreted;
	CNHandleStringClassification* _classification;
	NSMutableArray* _emailAddressesImpl;
	NSMutableArray* _phoneNumbersImpl;
	NSMutableArray* _unconvertableHandles;

}

@property (nonatomic,readonly) CNHandleStringClassification * classification;              //@synthesize classification=_classification - In the implementation block
@property (nonatomic,readonly) NSMutableArray * emailAddressesImpl;                        //@synthesize emailAddressesImpl=_emailAddressesImpl - In the implementation block
@property (nonatomic,readonly) NSMutableArray * phoneNumbersImpl;                          //@synthesize phoneNumbersImpl=_phoneNumbersImpl - In the implementation block
@property (nonatomic,readonly) NSMutableArray * unconvertableHandles;                      //@synthesize unconvertableHandles=_unconvertableHandles - In the implementation block
@property (assign,nonatomic) BOOL hasBeenInterpreted;                                      //@synthesize hasBeenInterpreted=_hasBeenInterpreted - In the implementation block
@property (readonly) NSArray * emailAddresses; 
@property (readonly) NSArray * phoneNumbers; 
-(id)init;
-(NSArray *)emailAddresses;
-(NSArray *)phoneNumbers;
-(id)description;
-(CNHandleStringClassification *)classification;
-(void)interpretEmailAddresses;
-(void)interpretValues;
-(id)initWithHandleStringClassification:(id)arg1 ;
-(void)interpretPhoneNumbers;
-(void)setHasBeenInterpreted:(BOOL)arg1 ;
-(void)interpretUnknownsAsEmailAddresses;
-(NSMutableArray *)emailAddressesImpl;
-(NSMutableArray *)phoneNumbersImpl;
-(NSMutableArray *)unconvertableHandles;
-(BOOL)hasBeenInterpreted;
@end

