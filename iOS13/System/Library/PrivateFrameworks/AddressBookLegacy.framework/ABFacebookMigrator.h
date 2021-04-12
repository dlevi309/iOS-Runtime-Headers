/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)initWithAddressBook:(void*)arg1 ;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)mergeFacebookContacts;
-(void)deleteFacebookContacts;
-(unsigned long long)facebookContactsCount;
-(NSString *)destinationDescription;
-(BOOL)canMergeFacebookContacts;
-(id)initWithAddressBook:(void*)arg1 accountStore:(id)arg2 ;
-(void)_detectFacebookSource;
-(void*)facebookSource;
-(BOOL)mayHaveFacebookSource;
-(int)findBestMergeDestinationSourceID;
-(void)setMergeDestinationSourceID:(int)arg1 ;
-(void)setCheckDone:(BOOL)arg1 ;
-(void)_startDatabaseDoctorToPerformAction:(id)arg1 ;
-(BOOL)isCheckDone;
-(void)setFacebookSource:(void*)arg1 ;
-(void)setFacebookContactsCount:(unsigned long long)arg1 ;
-(void)setMayHaveFacebookSource:(BOOL)arg1 ;
-(void)setDestinationDescription:(NSString *)arg1 ;
-(int)mergeDestinationSourceID;
-(BOOL)_mergeContactsFromAccount:(void*)arg1 toDestinationSourceID:(int)arg2 ;
-(BOOL)_removeContactsAccount:(void*)arg1 ;
-(void)performPendingMergeOrDeleteAction;
@end

