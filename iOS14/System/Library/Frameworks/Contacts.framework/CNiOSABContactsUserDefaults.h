/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(long long)sortOrder;
-(long long)newContactDisplayNameOrder;
-(void)_unregisterObserverForKey:(id)arg1 ;
-(id)countryCode;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)setShortNameFormat:(long long)arg1 ;
-(id)init;
-(BOOL)isShortNameFormatEnabled;
-(NSMutableDictionary *)observerCountPerKey;
-(void)setObserverCountPerKey:(NSMutableDictionary *)arg1 ;
-(long long)shortNameFormat;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(void)flushCache;
-(id)initWithABWrapper:(id)arg1 ;
-(NSCache *)valueCache;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(CNiOSABContactsUserDefaultsABWrapper *)abWrapper;
-(BOOL)shortNameFormatPrefersNicknames;
-(id)filteredGroupAndContainerIDs;
-(void)setValueCache:(NSCache *)arg1 ;
-(void)_registerObserverForKey:(id)arg1 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(long long)displayNameOrder;
-(void)dealloc;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
@end

