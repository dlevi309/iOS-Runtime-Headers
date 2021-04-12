/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/


#import <GenerationalStorage/GenerationalStorage-Structs.h>
@interface GSStorageManager : NSObject
+(void)initialize;
+(id)manager;
+(BOOL)_isPermanentStorageSupportedForStatFSInfo:(statfs*)arg1 error:(id*)arg2 ;
+(BOOL)_isPermanentStorageSupportedForFD:(int)arg1 error:(id*)arg2 ;
-(id)persistentIdentifierInStorage:(id)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3 ;
-(id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(BOOL)arg2 error:(id*)arg3 ;
-(id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)isPermanentStorageSupportedAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeTemporaryStorage:(id)arg1 error:(id*)arg2 ;
-(BOOL)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)mayPermanentStorageBeSupportedAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
-(void)_connectionWithDaemonWasLost;
-(BOOL)mayPermanentStorageBeSupportedWithFD:(int)arg1 error:(id*)arg2 ;
-(id)stagingPrefixForDocumentID:(id)arg1 ;
-(BOOL)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
@end

