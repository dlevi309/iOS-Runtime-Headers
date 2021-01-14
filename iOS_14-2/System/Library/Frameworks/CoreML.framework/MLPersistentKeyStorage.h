/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLPersistentKeyStorage : NSObject
+(id)syncQueue;
+(id)persistentKeyStorageURL;
+(BOOL)storeKeyBlob:(id)arg1 forKeyIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)retrieveKeyBlobForKeyIdentifier:(id)arg1 ;
@end

