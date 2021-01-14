/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLFileSystemPersistence : NSObject {

	NSObject*<OS_dispatch_queue> _writerQueue;

}
+(void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)sharedInstance;
+(id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1 ;
+(void)performBlockOnWriterQueue:(/*^block*/id)arg1 ;
+(void)clearAllAttributesForFileAtUrl:(id)arg1 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 ;
+(void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)persistenceKeyTypes;
+(void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistMetadata:(id)arg1 fileURL:(id)arg2 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 exists:(BOOL*)arg2 includeUnknownAttributes:(BOOL)arg3 ;
-(id)init;
-(void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2 ;
-(void)_performOnWriterQueueWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
@end

