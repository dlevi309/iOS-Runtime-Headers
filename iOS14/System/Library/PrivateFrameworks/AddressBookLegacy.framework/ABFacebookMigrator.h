/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class NSString, ACAccountStore;

@interface ABFacebookMigrator : NSObject {

	BOOL _mayHaveFacebookSource;
	int _mergeDestinationSourceID;
	unsigned long long _facebookContactsCount;
	NSString* _destinationDescription;
	void* _addressBook;
	ACAccountStore* _accountStore;
	void* _facebookSource;

}

@property (assign,nonatomic) void* addressBook;                                     //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) void* facebookSource;                                  //@synthesize facebookSource=_facebookSource - In the implementation block
@property (assign,nonatomic) int mergeDestinationSourceID;                          //@synthesize mergeDestinationSourceID=_mergeDestinationSourceID - In the implementation block
@property (assign,nonatomic) BOOL mayHaveFacebookSource;                            //@synthesize mayHaveFacebookSource=_mayHaveFacebookSource - In the implementation block
@property (assign,getter=isCheckDone,nonatomic) BOOL checkDone; 
@property (assign,nonatomic) unsigned long long facebookContactsCount;              //@synthesize facebookContactsCount=_facebookContactsCount - In the implementation block
@property (nonatomic,retain) NSString * destinationDescription;                     //@synthesize destinationDescription=_destinationDescription - In the implementation block
+(BOOL)isAccountTypeFacebook:(id)arg1 ;
+(int)_findFacebookStoreID:(CPSqliteConnection*)arg1 ;
+(BOOL)_performQuery:(id)arg1 withStoreID:(int)arg2 connection:(CPSqliteConnection*)arg3 ;
+(BOOL)isSourceFacebook:(void*)arg1 ;
+(BOOL)mayHaveFacebookContacts:(void*)arg1 ;
+(BOOL)removeFacebookSensitiveInformation:(CPSqliteConnection*)arg1 ;
-(void)performPendingMergeOrDeleteAction;
-(BOOL)canMergeFacebookContacts;
-(int)mergeDestinationSourceID;
-(int)findBestMergeDestinationSourceID;
-(NSString *)destinationDescription;
-(void*)addressBook;
-(void)_detectFacebookSource;
-(ACAccountStore *)accountStore;
-(BOOL)isCheckDone;
-(void)setMayHaveFacebookSource:(BOOL)arg1 ;
-(void*)facebookSource;
-(void)setCheckDone:(BOOL)arg1 ;
-(BOOL)_removeContactsAccount:(void*)arg1 ;
-(BOOL)_mergeContactsFromAccount:(void*)arg1 toDestinationSourceID:(int)arg2 ;
-(void)mergeFacebookContacts;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)initWithAddressBook:(void*)arg1 accountStore:(id)arg2 ;
-(void)setFacebookContactsCount:(unsigned long long)arg1 ;
-(void)setDestinationDescription:(NSString *)arg1 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)_startDatabaseDoctorToPerformAction:(id)arg1 ;
-(void)setFacebookSource:(void*)arg1 ;
-(void)deleteFacebookContacts;
-(BOOL)mayHaveFacebookSource;
-(void)setMergeDestinationSourceID:(int)arg1 ;
-(void)dealloc;
-(unsigned long long)facebookContactsCount;
-(void)setAddressBook:(void*)arg1 ;
@end

