/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class CNContact, NSString, NSArray, NSData;

@interface IMPerson : NSObject {

	BOOL _registered;
	int _recordID;
	CNContact* _cnContact;

}

@property (nonatomic,readonly) int _recordID;                                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL _registered;                              //@synthesize registered=_registered - In the implementation block
@property (nonatomic,retain) CNContact * cnContact;                           //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) void* _recordRef; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) int recordID; 
@property (nonatomic,copy,readonly) NSString * cnContactID; 
@property (nonatomic,readonly) BOOL isInAddressBook; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * abbreviatedName; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,readonly) BOOL isCompany; 
@property (nonatomic,readonly) NSString * companyName; 
@property (nonatomic,copy) NSArray * emails; 
@property (nonatomic,readonly) NSArray * allEmails; 
@property (nonatomic,retain) NSArray * phoneNumbers; 
@property (nonatomic,readonly) NSArray * mobileNumbers; 
@property (nonatomic,retain) NSData * imageData; 
@property (nonatomic,readonly) NSData * imageDataWithoutLoading; 
@property (nonatomic,readonly) unsigned long long status; 
+(id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 orNumber:(id)arg4 ;
+(id)allPeople;
+(id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 countryCode:(id)arg6 identifier:(int*)arg7 ;
+(id)existingABPersonWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(BOOL)arg3 ;
+(id)existingABPeopleWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(BOOL)arg3 ;
+(void)_setCachedQueriesEnabled:(BOOL)arg1 ;
+(id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 ;
+(id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 ;
+(id)_cachedRecordResultForQuery:(id)arg1 addressBook:(void*)arg2 ;
+(BOOL)shouldPurgeCacheForIMPerson:(id)arg1 ;
+(void)_setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 addressBook:(void*)arg4 ;
+(id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 identifier:(int*)arg6 ;
+(id)existingABPersonWithFirstName:(id)arg1 lastName:(id)arg2 ;
+(id)existingABPersonForPerson:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(BOOL)_registered;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(unsigned long long)status;
-(NSString *)uniqueID;
-(NSString *)displayName;
-(void)save;
-(NSArray *)phoneNumbers;
-(int)recordID;
-(NSString *)fullName;
-(NSArray *)groups;
-(int)_recordID;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)companyName;
-(BOOL)isCompany;
-(NSArray *)allEmails;
-(void)setEmails:(NSArray *)arg1 ;
-(NSArray *)emails;
-(CNContact *)cnContact;
-(id)cnContactWithKeys:(id)arg1 ;
-(void*)_recordRef;
-(void)setCnContact:(CNContact *)arg1 ;
-(BOOL)isInAddressBook;
-(NSArray *)mobileNumbers;
-(id)idsAddresses;
-(id)valuesForIMProperty:(id)arg1 ;
-(id)initWithABRecordID:(int)arg1 ;
-(void)appendID:(id)arg1 toProperty:(id)arg2 ;
-(void)setValues:(id)arg1 forProperty:(id)arg2 ;
-(void)updateCNContact:(id)arg1 ;
-(BOOL)isEqualToIMPerson:(id)arg1 ;
-(NSString *)abbreviatedName;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(NSData *)imageDataWithoutLoading;
-(id)allHandlesForProperty:(id)arg1 ;
-(id)emailHandlesForService:(id)arg1 includeBaseEmail:(BOOL)arg2 ;
-(id)valuesForProperty:(id)arg1 ;
-(BOOL)containsHandle:(id)arg1 forServiceProperty:(id)arg2 ;
-(NSString *)cnContactID;
-(id)emailHandlesForService:(id)arg1 ;
-(void)setValues:(id)arg1 forIMProperty:(id)arg2 ;
-(void)_abPersonChanged:(id)arg1 ;
@end

