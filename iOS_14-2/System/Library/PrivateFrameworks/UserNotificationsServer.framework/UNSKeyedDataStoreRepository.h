/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol UNSContentProtectionStrategy;
@class NSString, UNSBundleLibrarian;

@interface UNSKeyedDataStoreRepository : NSObject {

	NSString* _directory;
	NSString* _fileName;
	NSString* _pathExtension;
	UNSBundleLibrarian* _librarian;
	id<UNSContentProtectionStrategy> _protectionStrategy;
	NSString* _objectIdentifierKey;
	long long _maxObjectsPerKey;
	BOOL _shouldExcludeFromBackup;

}
-(id)_removeObjectsPassingTest:(/*^block*/id)arg1 atPath:(id)arg2 ;
-(id)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllObjectsForKey:(id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(id)objectsForKey:(id)arg1 ;
-(void)removeDataStoreRepository;
-(void)setObjects:(id)arg1 forKey:(id)arg2 ;
-(void)migrateStoreAtPath:(id)arg1 forKey:(id)arg2 ;
-(id)addObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_useReplacementToImport:(id)arg1 into:(id)arg2 ;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 repositoryProtectionStrategy:(id)arg5 objectIdentifierKey:(id)arg6 maxObjectsPerKey:(long long)arg7 shouldExcludeFromBackup:(BOOL)arg8 ;
-(id)removeObjectsPassingTest:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(BOOL)_saveObjects:(id)arg1 atPath:(id)arg2 ;
-(void)_removeItemAtPath:(id)arg1 ;
-(id)_directoryForKey:(id)arg1 ;
-(void)_setObjects:(id)arg1 atPath:(id)arg2 ;
-(id)addObject:(id)arg1 mustReplace:(BOOL)arg2 forKey:(id)arg3 ;
-(id)_pathForKey:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(void)protectionStateChanged;
-(BOOL)_isReplacementSupported;
-(id)_objectsAtPath:(id)arg1 ;
-(void)removeStoreForKey:(id)arg1 ;
-(id)_objectsPassingTest:(/*^block*/id)arg1 atPath:(id)arg2 ;
-(id)_objectsForData:(id)arg1 identifier:(id)arg2 ;
-(id)allKeys;
-(id)_addObject:(id)arg1 toObjects:(id)arg2 mustReplace:(BOOL)arg3 receipt:(id*)arg4 ;
-(id)_addObject:(id)arg1 mustReplace:(BOOL)arg2 atPath:(id)arg3 ;
-(id)directoryPath;
@end

