/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitServices.framework/PassKitServices
*/


#import <PassKitServices/PassKitServices-Structs.h>
@class NSXPCConnection, NSMutableDictionary, NSString;

@interface PKServicePaymentTransactionImageGenerator : NSObject {

	NSXPCConnection* _connectionToService;
	NSMutableDictionary* _mappedFilesIndices;
	NSMutableDictionary* _keysHitCounts;
	SCD_Struct_PK0* _mappedFiles[50];
	NSString* _nextKeyToEvict;
	unsigned long long _evictionHitCount;
	os_unfair_lock_s _lock;
	BOOL _hasSetupTempDir;

}
-(id)init;
-(void)imageDataForTransaction:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)connectionToService;
-(void)_cleanMappedFile:(SCD_Struct_PK0*)arg1 ;
-(void)_updateNextKeyToEvict;
-(unsigned long long)_nextIndexToUseAndEvictIfNeeded;
-(id)cachedImageDataForKey:(id)arg1 ;
-(void)setCachedImageData:(id)arg1 forKey:(id)arg2 ;
@end

