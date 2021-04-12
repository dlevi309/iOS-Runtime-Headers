/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)allKeys;
-(id)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(id)addObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectsForKey:(id)arg1 ;
-(void)setObjects:(id)arg1 forKey:(id)arg2 ;
-(id)directoryPath;
-(id)_pathForKey:(id)arg1 ;
-(id)_directoryForKey:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 repositoryProtectionStrategy:(id)arg5 objectIdentifierKey:(id)arg6 maxObjectsPerKey:(long long)arg7 shouldExcludeFromBackup:(BOOL)arg8 ;
-(void)protectionStateChanged;
-(void)removeStoreForKey:(id)arg1 ;
-(id)_objectsAtPath:(id)arg1 ;
-(id)_objectsForData:(id)arg1 identifier:(id)arg2 ;
-(id)_objectsPassingTest:(/*^block*/id)arg1 atPath:(id)arg2 ;
-(BOOL)_saveObjects:(id)arg1 atPath:(id)arg2 ;
-(id)_removeObjectsPassingTest:(/*^block*/id)arg1 atPath:(id)arg2 ;
-(void)_setObjects:(id)arg1 atPath:(id)arg2 ;
-(id)addObject:(id)arg1 mustReplace:(BOOL)arg2 forKey:(id)arg3 ;
-(id)_addObject:(id)arg1 mustReplace:(BOOL)arg2 atPath:(id)arg3 ;
-(id)_addObject:(id)arg1 toObjects:(id)arg2 mustReplace:(BOOL)arg3 receipt:(id*)arg4 ;
-(BOOL)_isReplacementSupported;
-(void)_removeItemAtPath:(id)arg1 ;
-(BOOL)_useReplacementToImport:(id)arg1 into:(id)arg2 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)removeAllObjectsForKey:(id)arg1 ;
-(id)removeObjectsPassingTest:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)removeDataStoreRepository;
-(void)migrateStoreAtPath:(id)arg1 forKey:(id)arg2 ;
@end

