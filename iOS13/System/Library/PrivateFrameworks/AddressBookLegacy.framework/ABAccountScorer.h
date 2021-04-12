/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@class NSString, ACAccountStore;

@interface ABAccountScorer : NSObject {

	int _sourceID;
	int _defaultSourceID;
	double _score;
	NSString* _accountType;
	void* _addressBook;
	ACAccountStore* _accountStore;
	void* _account;

}

@property (assign,nonatomic) void* addressBook;                                          //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) void* account;                                              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) int defaultSourceID;                                        //@synthesize defaultSourceID=_defaultSourceID - In the implementation block
@property (assign,nonatomic) double score;                                               //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSString * accountType;                                     //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeDescription; 
@property (nonatomic,readonly) NSString * accountDisambiguationDescription; 
@property (assign,nonatomic) int sourceID;                                               //@synthesize sourceID=_sourceID - In the implementation block
-(void)dealloc;
-(double)score;
-(void*)account;
-(void)setScore:(double)arg1 ;
-(void)setAccount:(void*)arg1 ;
-(int)sourceID;
-(int)defaultSourceID;
-(void)setSourceID:(int)arg1 ;
-(NSString *)accountType;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)setAccountType:(NSString *)arg1 ;
-(NSString *)accountTypeDescription;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(id)initWithAddressBook:(void*)arg1 accountStore:(id)arg2 account:(void*)arg3 defaultSourceID:(int)arg4 ;
-(void)calculateScore;
-(NSString *)accountDisambiguationDescription;
-(int)_findBestSourceID;
-(void)setDefaultSourceID:(int)arg1 ;
@end

