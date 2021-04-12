/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSSet, NSUUID;

@interface TITextCheckerExemptionsImpl : NSObject {

	/*^block*/id _contactObserver;
	id _userDictionaryObserver;
	unsigned long long _observerAssertionCount;
	NSSet* _addressBookTokens;
	NSSet* _userDictionaryTokens;
	NSUUID* _userDictionaryUUID;

}

@property (nonatomic,retain) NSSet * addressBookTokens;                 //@synthesize addressBookTokens=_addressBookTokens - In the implementation block
@property (nonatomic,retain) NSSet * userDictionaryTokens;              //@synthesize userDictionaryTokens=_userDictionaryTokens - In the implementation block
@property (nonatomic,copy) NSUUID * userDictionaryUUID;                 //@synthesize userDictionaryUUID=_userDictionaryUUID - In the implementation block
+(id)sharedTextCheckerExemptionsImpl;
-(NSSet *)addressBookTokens;
-(void)setUserDictionaryUUID:(NSUUID *)arg1 ;
-(void)addObserverAssertion;
-(NSUUID *)userDictionaryUUID;
-(void)setUserDictionaryTokens:(NSSet *)arg1 ;
-(BOOL)stringIsExemptFromChecker:(id)arg1 ;
-(NSSet *)userDictionaryTokens;
-(void)setAddressBookTokens:(NSSet *)arg1 ;
-(void)removeObserverAssertion;
-(void)dealloc;
@end

