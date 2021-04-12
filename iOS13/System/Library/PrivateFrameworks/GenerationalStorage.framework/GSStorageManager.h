/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/


#import <GenerationalStorage/GenerationalStorage-Structs.h>
@interface GSStorageManager : NSObject
+(void)initialize;
+(id)manager;
+(BOOL)_isPermanentStorageSupportedForStatFSInfo:(statfs*)arg1 error:(id*)arg2 ;
+(BOOL)_isPermanentStorageSupportedForFD:(int)arg1 error:(id*)arg2 ;
-(id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(BOOL)arg2 error:(id*)arg3 ;
-(id)persistentIdentifierInStorage:(id)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3 ;
-(BOOL)isPermanentStorageSupportedAtURL:(id)arg1 error:(id*)arg2 ;
-(id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id*)arg3 ;
-(id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeTemporaryStorage:(id)arg1 error:(id*)arg2 ;
-(void)_connectionWithDaemonWasLost;
-(id)stagingPrefixForDocumentID:(id)arg1 ;
-(BOOL)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
-(BOOL)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
@end

