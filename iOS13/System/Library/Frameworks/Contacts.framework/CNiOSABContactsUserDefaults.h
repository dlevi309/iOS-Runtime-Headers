/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContactsUserDefaults.h>

@class NSMutableDictionary, NSCache, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults {

	NSMutableDictionary* _observerCountPerKey;
	NSCache* _valueCache;
	CNiOSABContactsUserDefaultsABWrapper* _abWrapper;

}

@property (nonatomic,retain) NSMutableDictionary * observerCountPerKey;                       //@synthesize observerCountPerKey=_observerCountPerKey - In the implementation block
@property (nonatomic,retain) NSCache * valueCache;                                            //@synthesize valueCache=_valueCache - In the implementation block
@property (nonatomic,readonly) CNiOSABContactsUserDefaultsABWrapper * abWrapper;              //@synthesize abWrapper=_abWrapper - In the implementation block
-(id)init;
-(void)dealloc;
-(id)countryCode;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(NSCache *)valueCache;
-(long long)sortOrder;
-(BOOL)shortNameFormatPrefersNicknames;
-(BOOL)isShortNameFormatEnabled;
-(void)flushCache;
-(long long)displayNameOrder;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(id)filteredGroupAndContainerIDs;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(id)initWithABWrapper:(id)arg1 ;
-(NSMutableDictionary *)observerCountPerKey;
-(void)_registerObserverForKey:(id)arg1 ;
-(void)_unregisterObserverForKey:(id)arg1 ;
-(CNiOSABContactsUserDefaultsABWrapper *)abWrapper;
-(void)setObserverCountPerKey:(NSMutableDictionary *)arg1 ;
-(void)setValueCache:(NSCache *)arg1 ;
@end

