/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLFileSystemPersistence : NSObject {

	NSObject*<OS_dispatch_queue> _writerQueue;

}
+(id)sharedInstance;
+(void)performBlockOnWriterQueue:(/*^block*/id)arg1 ;
+(id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1 ;
+(void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 ;
+(void)persistMetadata:(id)arg1 fileURL:(id)arg2 ;
+(void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 exists:(BOOL*)arg2 includeUnknownAttributes:(BOOL)arg3 ;
+(id)persistenceKeyTypes;
+(void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)clearAllAttributesForFileAtUrl:(id)arg1 ;
-(id)init;
-(void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2 ;
-(void)_performOnWriterQueueWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
@end

