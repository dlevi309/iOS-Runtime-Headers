/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QueryResultSet_BackingStore : NSObject {

	vector<long long, std::__1::allocator<long long> >* _persistentIDs;
	vector<unsigned char, std::__1::allocator<unsigned char> > _sections;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)reverseEnumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
-(void)reverseEnumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(id)backingStoreByRemovingPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
@end

