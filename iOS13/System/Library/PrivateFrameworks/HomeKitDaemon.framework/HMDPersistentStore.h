/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@interface HMDPersistentStore : HMFObject
+(void)removeTransactionJournal;
+(id)unarchiveHomeData:(id*)arg1 decryptionFailed:(BOOL*)arg2 ;
+(void)resetConfiguration;
+(id)loadBuiltinPlainMetadataDictionary;
+(id)loadPlainMetadataDictionary;
+(BOOL)archiveMetadata:(id)arg1 ;
+(id)archiveBulletinBoard:(id)arg1 ;
+(id)unarchiveBulletinBoard;
+(id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3 ;
+(id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3 ;
+(id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long*)arg2 deleteExtraKeys:(BOOL)arg3 allowControllerIdentifierToChange:(BOOL)arg4 controllerIdentifierChanged:(BOOL*)arg5 successfulKeyUserName:(id*)arg6 error:(id*)arg7 ;
+(id)archiveCloudServerTokenData:(id)arg1 ;
+(BOOL)deserializeHomeData:(id*)arg1 localStorage:(BOOL)arg2 fromData:(id)arg3 ;
+(id)serializeHomeData:(id)arg1 localStorage:(BOOL)arg2 remoteDeviceOnSameAccount:(BOOL)arg3 ;
+(id)encryptDataWithControllerKey:(id)arg1 error:(id*)arg2 ;
+(id)decryptDataWithMetadataKey:(id)arg1 error:(id*)arg2 ;
+(id)encryptDataWithMetadataKey:(id)arg1 error:(id*)arg2 ;
+(BOOL)writeDictionary:(id)arg1 toStorePath:(id)arg2 ;
+(id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
+(id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
+(void)cleanupKeysInStore;
+(void)resetMetadata;
+(id)archiveHomeData:(id)arg1 ;
+(void)archiveVendorStore:(id)arg1 ;
+(id)unarchiveVendorStore;
+(id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id*)arg2 ;
+(id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3 ;
+(void)removeServerTokenDataFile;
+(id)archiveIDSDataSyncJournal:(id)arg1 ;
+(id)unarchiveIDSDataSyncJournal;
@end

