/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)accountType;
-(void)setSourceID:(int)arg1 ;
-(void*)account;
-(void)setAccount:(void*)arg1 ;
-(void)calculateScore;
-(id)initWithAddressBook:(void*)arg1 accountStore:(id)arg2 account:(void*)arg3 defaultSourceID:(int)arg4 ;
-(NSString *)accountDisambiguationDescription;
-(int)_findBestSourceID;
-(void)setDefaultSourceID:(int)arg1 ;
-(void*)addressBook;
-(double)score;
-(ACAccountStore *)accountStore;
-(void)setScore:(double)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(int)defaultSourceID;
-(NSString *)accountTypeDescription;
-(int)sourceID;
-(void)setAccountType:(NSString *)arg1 ;
-(void)dealloc;
-(void)setAddressBook:(void*)arg1 ;
@end

