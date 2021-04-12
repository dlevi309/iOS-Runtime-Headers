/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)stringIsExemptFromChecker:(id)arg1 ;
-(void)addObserverAssertion;
-(void)removeObserverAssertion;
-(NSSet *)addressBookTokens;
-(void)setAddressBookTokens:(NSSet *)arg1 ;
-(NSSet *)userDictionaryTokens;
-(void)setUserDictionaryTokens:(NSSet *)arg1 ;
-(NSUUID *)userDictionaryUUID;
-(void)setUserDictionaryUUID:(NSUUID *)arg1 ;
@end

